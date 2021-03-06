// -*- C++ -*-
// $Id$

#include "ace/Get_Opt.h"
#include "ace/OS_NS_stdio.h"
#include "tao/StringSeqC.h"
#include "tao/IORTable/IORTable.h"
#include "tao/Utils/PolicyList_Destroyer.h"
#include "orbsvcs/CosNamingC.h"
#include "ExecutionManager_Module.h"
#include "ExecutionManager_Impl.h"
#include "dance/Logger/Log_Macros.h"

namespace DAnCE
{
  namespace ExecutionManager
  {
    bool
    write_IOR (const ACE_TCHAR * ior_file_name, const char* ior)
    {
      FILE* ior_output_file_ =
        ACE_OS::fopen (ior_file_name, ACE_TEXT("w"));

      if (ior_output_file_)
        {
          ACE_OS::fprintf (ior_output_file_,
                           "%s",
                           ior);
          ACE_OS::fclose (ior_output_file_);
          DANCE_DEBUG (DANCE_LOG_EVENT_TRACE,
                       (LM_TRACE, DLINFO
                        ACE_TEXT("ExectionManager::write_IOR - EM's ior was written into file \"%C\"\n"), ior_file_name));
          return true;
        }
      else
        {
          DANCE_ERROR (DANCE_LOG_ERROR,
                       (LM_ERROR,
                        ACE_TEXT("[%M%] DAnCE_ExecutionManager::write_ior-file - ")
                        ACE_TEXT("Unable to open ExecutionManager IOR output file %C : %m\n"),
                        ior_file_name));
          return false;
        }
      return true;
    }
  }
}

DAnCE_ExecutionManager_Module::DAnCE_ExecutionManager_Module (void)
  : em_impl_ (0)
{
}

DAnCE_ExecutionManager_Module::~DAnCE_ExecutionManager_Module (void)
{
  delete this->em_impl_;
}

bool
DAnCE_ExecutionManager_Module::parse_args (int argc, ACE_TCHAR *argv[])
{
  DANCE_TRACE ("DAnCE_ExecutionManager_Module::parse_args");

  ACE_Get_Opt get_opts (argc,
                        argv,
                        "n:e::p::c::r::ifh",
                        0,
                        0,
                        0,
                        ACE_Get_Opt::RETURN_IN_ORDER);

  get_opts.long_option (ACE_TEXT("exec-mgr"), 'e', ACE_Get_Opt::ARG_OPTIONAL);
  get_opts.long_option (ACE_TEXT("node-mgr"), 'n', ACE_Get_Opt::ARG_REQUIRED);
  get_opts.long_option (ACE_TEXT("process-ns"), 'p', ACE_Get_Opt::ARG_OPTIONAL);
  get_opts.long_option (ACE_TEXT("create-plan-ns"), 'c', ACE_Get_Opt::ARG_OPTIONAL);
  get_opts.long_option (ACE_TEXT("rebind-plan-ns"), 'r', ACE_Get_Opt::ARG_OPTIONAL);
  get_opts.long_option (ACE_TEXT("port-indirection"), 'i', ACE_Get_Opt::NO_ARG);
  get_opts.long_option (ACE_TEXT("ignore-failure"), 'f', ACE_Get_Opt::NO_ARG);
  get_opts.long_option (ACE_TEXT("help"), 'h', ACE_Get_Opt::NO_ARG);
  get_opts.long_option (ACE_TEXT("domain-nc"), ACE_Get_Opt::ARG_REQUIRED);
  get_opts.long_option (ACE_TEXT("cdd"), ACE_Get_Opt::ARG_REQUIRED);



  //get_opts.long_option ("help", '?');

  int c;
  while ( (c = get_opts ()) != -1)
    {
      switch (c)
        {
        case 'e':
          DANCE_DEBUG (DANCE_LOG_MAJOR_DEBUG_INFO,
                       (LM_TRACE, DLINFO ACE_TEXT("DAnCE_ExecutionManager_Module::parse_args - ")
                        ACE_TEXT("Output filename is %s\n"),
                        get_opts.opt_arg ()));
          this->options_.exec_mgr_file_ = get_opts.opt_arg ();
          break;
        case 'n':
          DANCE_DEBUG (DANCE_LOG_MAJOR_DEBUG_INFO,
                       (LM_TRACE, DLINFO
                        ACE_TEXT("DAnCE_ExecutionManager_Module::parse_args - ")
                        ACE_TEXT("--node-mgr option was parsed out for EM\n")));
          this->options_.node_managers_.push_back (get_opts.opt_arg ());
          break;

        case 'p':
          DANCE_DEBUG (DANCE_LOG_MAJOR_DEBUG_INFO,
                       (LM_TRACE, DLINFO
                        ACE_TEXT("DAnCE_ExecutionManager_Module::parse_args - ")
                        ACE_TEXT("--process-ns enabled for EM\n")));
          this->options_.process_ns_ = true;
          this->options_.process_ns_file_ = get_opts.opt_arg ();
          break;

        case 'c':
          DANCE_DEBUG (DANCE_LOG_MAJOR_DEBUG_INFO,
                       (LM_TRACE, DLINFO
                        ACE_TEXT("DAnCE_ExecutionManager_Module::parse_args - ")
                        ACE_TEXT("--create-plan-ns enabled for EM\n")));
          this->options_.create_plan_ns_ = true;
          this->options_.create_plan_ns_ior_ = get_opts.opt_arg ();
          break;

        case 'r':
          DANCE_DEBUG (DANCE_LOG_MAJOR_DEBUG_INFO,
                       (LM_TRACE, DLINFO
                        ACE_TEXT("DAnCE_ExecutionManager_Module::parse_args - ")
                        ACE_TEXT("--rebind-plan-ns enabled for EM\n")));
          this->options_.rebind_plan_ns_ = true;
          this->options_.rebind_plan_ns_ior_ = get_opts.opt_arg ();
          break;

        case 'i':
          DANCE_DEBUG (DANCE_LOG_MAJOR_DEBUG_INFO,
                       (LM_TRACE, DLINFO
                        ACE_TEXT("DAnCE_ExecutionManager_Module::parse_args - ")
                        ACE_TEXT("--port-indirection enabled for EM\n")));
          this->options_.port_indirection_ = true;
          break;

        case 'f':
          DANCE_DEBUG (DANCE_LOG_MAJOR_DEBUG_INFO,
                       (LM_TRACE, DLINFO
                        ACE_TEXT("DAnCE_ExecutionManager_Module::parse_args - ")
                        ACE_TEXT("--ignore-failure enabled for EM\n")));
          this->options_.ignore_failure_ = true;
          break;

        case 0:
           if (ACE_OS::strcmp (get_opts.long_option (),
                                   ACE_TEXT("domain-nc")) == 0)
            {
              DANCE_DEBUG (DANCE_LOG_MAJOR_DEBUG_INFO,
                           (LM_DEBUG, DLINFO
                            ACE_TEXT("Node_Manager_Module::parse_args - ")
                            ACE_TEXT("Binding to domain naming context %s.\n"),
                            get_opts.opt_arg ()));
              this->options_.domain_nc_ = get_opts.opt_arg ();
              break;
            }
          else if (ACE_OS::strcmp (get_opts.long_option (),
                                    ACE_TEXT("cdd")) == 0)
             {
               DANCE_DEBUG (DANCE_LOG_MAJOR_DEBUG_INFO,
                            (LM_DEBUG, DLINFO
                             ACE_TEXT("Node_Manager_Module::parse_args - ")
                             ACE_TEXT("Found Node map filename %s.\n"),
                             get_opts.opt_arg ()));
               this->options_.cdd_ = get_opts.opt_arg ();
               break;
             }

        case 'h':
          DANCE_ERROR (DANCE_LOG_EMERGENCY,
                       (LM_ERROR,
                        "usage: %s\n"
                        "\t--exec-mgr,-e [execution manager ior file name]\n"
                        "\t--node-mgr,-n <node name>[=node manager ior file name]\n"
                        "\t--domain-nc <nc ior> \t\tIOR for the Domain Naming Context\n"
                        //"-p|--process-ns [file name] \t\tcreate process name service and store its ior to file name\n"
                        //"-c|--create-plan-ns [NC] \t\tcreate plan objects (components and ports) representation in name context with ior NC\n"
                        //"-r|--rebind-plan-ns [NC] \t\tbind plan representation name context to NC\n"
                        //"-i \t\t\t\tenable plan objects indirection via servant locator\n",
                        ,argv [0]));
            return false;
          break;
        }
    }
  return true;
}

CORBA::Object_ptr
DAnCE_ExecutionManager_Module::init (CORBA::ORB_ptr orb,
                                      int argc,
                                      ACE_TCHAR *argv[])
{
  DANCE_TRACE ("DAnCE_ExecutionManager_Module::init");

  try
    {
      if (this->em_impl_ != 0)
        {
          DANCE_ERROR (DANCE_LOG_ERROR,
                       (LM_ERROR,
                        DLINFO ACE_TEXT("DAnCE_ExecutionManager_Module::init - ")
                        ACE_TEXT("Error: ExecutionManager already exists.\n")));
          return CORBA::Object::_nil ();
        }

      DANCE_TRACE_LOG (DANCE_LOG_DETAILED_TRACE,
                       (LM_TRACE, DLINFO
                        ACE_TEXT("DAnCE_ExecutionManager_Module::init - ")
                        ACE_TEXT("before parsing arguments.\n")));

      if (!this->parse_args (argc, argv))
        return CORBA::Object::_nil ();

      // Get reference to Root POA.
      CORBA::Object_var poa_obj
        = orb->resolve_initial_references ("RootPOA");

      PortableServer::POA_var poa
        = PortableServer::POA::_narrow (poa_obj.in ());

      PortableServer::POAManager_var mgr = poa->the_POAManager ();
      PortableServer::POA_var persistent_poa;
      TAO::Utils::PolicyList_Destroyer policies (2);
      policies.length (2);
      try
        {
          DANCE_TRACE_LOG (DANCE_LOG_DETAILED_TRACE,
                           (LM_TRACE, DLINFO
                            ACE_TEXT("DAnCE_ExecutionManager_Module::init - ")
                            ACE_TEXT("before creating the \"Managers\" POA.\n")));

          policies[0] = poa->create_id_assignment_policy (PortableServer::USER_ID);
          policies[1] = poa->create_lifespan_policy (PortableServer::PERSISTENT);
          persistent_poa = poa->create_POA ("Managers",
                                            mgr.in(),
                                            policies);
        }
      catch (const PortableServer::POA::AdapterAlreadyExists &)
        {
          persistent_poa = poa->find_POA ("Managers", 0);
        }

      CosNaming::NamingContext_var domain_nc;

      // Resolve DomainNC
      try
        {
          if (this->options_.domain_nc_)
            {
              DANCE_TRACE_LOG (DANCE_LOG_DETAILED_TRACE,
                               (LM_TRACE, DLINFO
                                ACE_TEXT("DAnCE_ExecutionManager_Module::init - ")
                                ACE_TEXT("before resolving \"DomainNC\".\n")));
              CORBA::Object_var domain_obj = orb->string_to_object (this->options_.domain_nc_);
              if (!CORBA::is_nil (domain_obj.in ()))
                {
                  domain_nc = CosNaming::NamingContext::_narrow (domain_obj.in());
                  if (CORBA::is_nil (domain_nc.in ()))
                    {
                      DANCE_ERROR (DANCE_LOG_TERMINAL_ERROR,
                                   (LM_ERROR, DLINFO
                                    ACE_TEXT("Narrow to NamingContext return nil for DomainNC.\n")));
                      return CORBA::Object::_nil ();
                    }
                }
            }
        }
      catch (CORBA::Exception&)
        {
          DANCE_DEBUG (DANCE_LOG_NONFATAL_ERROR,
                       (LM_DEBUG,
                        DLINFO ACE_TEXT("DomainNC context not found!\n")));
        }

      // Initialize IOR table
      CORBA::Object_var table_object
        = orb->resolve_initial_references ("IORTable");

      IORTable::Table_var adapter
        = IORTable::Table::_narrow (table_object.in ());

      if (CORBA::is_nil (adapter.in ()))
        {
          DANCE_ERROR (DANCE_LOG_TERMINAL_ERROR,
                       (LM_ERROR,
                        DLINFO ACE_TEXT("Nil IORTable\n")));
          return CORBA::Object::_nil ();
        }

      // Create and install the DAnCE Daemon servant on child POA
      DANCE_TRACE_LOG (DANCE_LOG_DETAILED_TRACE,
                       (LM_TRACE, DLINFO
                        ACE_TEXT("DAnCE_ExecutionManager_Module::init - before creating EM servant.\n")));
      ACE_NEW_RETURN (this->em_impl_,
                      DAnCE::ExecutionManager_Impl (orb,
                                                    poa.in (),
                                                    domain_nc.in ()),
                      CORBA::Object::_nil ());

      // Explicit activation through the persistent POA
      PortableServer::ObjectId_var oid =
        PortableServer::string_to_ObjectId ("ExecutionManager");
      persistent_poa->activate_object_with_id (oid, this->em_impl_);

      CORBA::Object_var em_obj = persistent_poa->id_to_reference (oid.in ());
      CORBA::String_var em_ior = orb->object_to_string (em_obj.in ());

      Deployment::ExecutionManager_var em_daemon
        = Deployment::ExecutionManager::_narrow (em_obj.in ());

      // Binding ior to IOR Table
      adapter->bind ("ExecutionManager", em_ior.in ());

      // End ExecutionManager initialization part

      // Initializing NodeManagers
      DANCE_TRACE_LOG (DANCE_LOG_TRACE,
                       (LM_TRACE, DLINFO
                        ACE_TEXT("DAnCE_ExecutionManager_Module::init - ")
                        ACE_TEXT("before processing --node-mgr options(%u).\n"),
                        this->options_.node_managers_.size()));

      for (size_t i = 0; i < this->options_.node_managers_.size(); ++i)
        {
          size_t const pos = this->options_.node_managers_[i].find ('=');
          ACE_TString node_name = this->options_.node_managers_[i];
          ACE_TString nm_ior;

          if (ACE_CString::npos == pos)
            {
              DANCE_ERROR (DANCE_LOG_NONFATAL_ERROR,
                           (LM_ERROR, DLINFO
                            ACE_TEXT("DAnCE_ExecutionManager_Module::init - ")
                            ACE_TEXT("Execution manager received --node-mgr without IOR\n")));
              continue;
            }

          node_name = this->options_.node_managers_[i].substring (0, pos);
          nm_ior = this->options_.node_managers_[i].substring (pos + 1);

          DANCE_DEBUG (DANCE_LOG_MAJOR_DEBUG_INFO,
                       (LM_TRACE, DLINFO
                        ACE_TEXT("Placing node \"%s\" to EM's map.\n"), node_name.c_str()));
          this->em_impl_->add_node_manager (ACE_TEXT_ALWAYS_CHAR(node_name.c_str()), ACE_TEXT_ALWAYS_CHAR(nm_ior.c_str ()));
        }

        if (this->options_.cdd_ != 0)
          {
            DANCE_DEBUG (DANCE_LOG_MAJOR_DEBUG_INFO,
                         (LM_TRACE, DLINFO
                          ACE_TEXT("DAnCE_ExecutionManager_Module::init - ")
                          ACE_TEXT("Parsing cdd file %C\n"),
                          this->options_.cdd_));
           this->em_impl_->load_cdd (this->options_.cdd_);
          }

      mgr->activate ();

      // Saving execution manager ior
      if (0 != this->options_.exec_mgr_file_)
        {
          DAnCE::ExecutionManager::write_IOR (this->options_.exec_mgr_file_, em_ior.in ());
        }

      // Binding execution manager to name service
      if (!CORBA::is_nil (domain_nc.in ()))
        {
          DANCE_DEBUG (DANCE_LOG_MINOR_EVENT,
                       (LM_TRACE, DLINFO ACE_TEXT("Registering EM in NC.\n")));
          CosNaming::Name name (1);
          name.length (1);
          name[0].id = CORBA::string_dup ("ExecutionManager");
          domain_nc->rebind (name, em_daemon.in());
        }

      return em_obj._retn ();
    }
  catch (const CORBA::Exception& ex)
    {
      ex._tao_print_exception ("DAnCE_ExecutionManager::run_main\n");
      return CORBA::Object::_nil ();
    }
}

