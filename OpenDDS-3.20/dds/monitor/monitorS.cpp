// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.2a_p23
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_codegen.cpp:639

#ifndef _TAO_IDL_MONITORS_UDTW9D_CPP_
#define _TAO_IDL_MONITORS_UDTW9D_CPP_


#include "monitorS.h"
#include "tao/PortableServer/Operation_Table_Perfect_Hash.h"
#include "tao/PortableServer/Upcall_Command.h"
#include "tao/PortableServer/Upcall_Wrapper.h"
#include "tao/TAO_Server_Request.h"
#include "tao/ORB_Core.h"
#include "tao/Profile.h"
#include "tao/Stub.h"
#include "tao/IFR_Client_Adapter.h"
#include "tao/Object_T.h"
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/DynamicC.h"
#include "tao/CDR.h"
#include "tao/operation_details.h"
#include "tao/PortableInterceptor.h"
#include "ace/Dynamic_Service.h"
#include "ace/Malloc_Allocator.h"

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_interface.cpp:1866

class TAO_OpenDDS_DCPS_ProcessMonitor_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_OpenDDS_DCPS_ProcessMonitor_Perfect_Hash_OpTable -N lookup */

unsigned int
TAO_OpenDDS_DCPS_ProcessMonitor_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
     35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
     35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
     35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
     35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
     35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
     35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
     35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
     35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
     35, 35, 35, 35, 35,  0, 35,  0, 35, 35,
      0,  5, 35,  0, 35, 35, 35, 35, 35, 35,
      5, 35, 35, 35,  5,  5,  0, 35, 35, 35,
     35, 35, 35, 35, 35, 35, 35, 35,
    };
  return len + asso_values[(int) str[len - 1]] + asso_values[(int) str[0]];
}

const TAO_operation_db_entry *
TAO_OpenDDS_DCPS_ProcessMonitor_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 12,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 25,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 34,
      HASH_VALUE_RANGE = 30,
      DUPLICATES = 0,
      WORDLIST_SIZE = 17
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_is_a", &TAO_ServantBase::_is_a_thru_poa_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_component", &TAO_ServantBase::_component_thru_poa_skel, 0},
      {"",0,0},{"",0,0},
      {"_non_existent", &TAO_ServantBase::_non_existent_thru_poa_skel, 0},
      {"_repository_id", &TAO_ServantBase::_repository_id_thru_poa_skel, 0},
      {"_interface", &TAO_ServantBase::_interface_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"retrieve_report", &POA_OpenDDS::DCPS::ProcessMonitor::retrieve_report_skel, 0},
      {"get_publishing_period", &POA_OpenDDS::DCPS::ProcessMonitor::get_publishing_period_skel, 0},
      {"",0,0},{"",0,0},
      {"diable_report_publishing", &POA_OpenDDS::DCPS::ProcessMonitor::diable_report_publishing_skel, 0},
      {"",0,0},
      {"set_publishing_period", &POA_OpenDDS::DCPS::ProcessMonitor::set_publishing_period_skel, 0},
      {"",0,0},{"",0,0},
      {"enable_report_publishing", &POA_OpenDDS::DCPS::ProcessMonitor::enable_report_publishing_skel, 0},
      {"disable_report_collection", &POA_OpenDDS::DCPS::ProcessMonitor::disable_report_collection_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},
      {"enable_report_collection", &POA_OpenDDS::DCPS::ProcessMonitor::enable_report_collection_skel, 0},
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          const char *s = wordlist[key].opname;

          if (*str == *s && !ACE_OS::strncmp (str + 1, s + 1, len - 1))
            return &wordlist[key];
        }
    }
  return 0;
}

static TAO_OpenDDS_DCPS_ProcessMonitor_Perfect_Hash_OpTable tao_OpenDDS_DCPS_ProcessMonitor_optable;


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_ss.cpp:92



POA_OpenDDS::DCPS::ProcessMonitor::ProcessMonitor (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_OpenDDS_DCPS_ProcessMonitor_optable;
}

POA_OpenDDS::DCPS::ProcessMonitor::ProcessMonitor (const ProcessMonitor& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}

POA_OpenDDS::DCPS::ProcessMonitor::~ProcessMonitor (void)
{
}

namespace POA_OpenDDS
{
  
  namespace DCPS
  {
    
    // TAO_IDL - Generated from
    // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_operation\upcall_command_ss.cpp:82

    class retrieve_report_ProcessMonitor
      : public TAO::Upcall_Command
    {
    public:
      inline retrieve_report_ProcessMonitor (
        POA_OpenDDS::DCPS::ProcessMonitor * servant,
        TAO_Operation_Details const * operation_details,
        TAO::Argument * const args[])
        : servant_ (servant)
          , operation_details_ (operation_details)
          , args_ (args)
      {
      }

      virtual void execute (void)
      {
        TAO::SArg_Traits< ::OpenDDS::DCPS::GenericReport>::ret_arg_type retval =
          TAO::Portable_Server::get_ret_arg< ::OpenDDS::DCPS::GenericReport> (
            this->operation_details_,
            this->args_);
        
        TAO::SArg_Traits< char *>::in_arg_type arg_1 =
          TAO::Portable_Server::get_in_arg< char *> (
            this->operation_details_,
            this->args_,
            1);
          
        retval =
          this->servant_->retrieve_report (
            arg_1);
      }
    
    private:
      POA_OpenDDS::DCPS::ProcessMonitor * const servant_;
      TAO_Operation_Details const * const operation_details_;
      TAO::Argument * const * const args_;
    };
  }
}
// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_operation\operation_ss.cpp:170

void POA_OpenDDS::DCPS::ProcessMonitor::retrieve_report_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::OpenDDS::DCPS::GenericReport>::ret_val retval;
  TAO::SArg_Traits< char *>::in_arg_val _tao_name;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_name
    };
  
  static size_t const nargs = 2;

  POA_OpenDDS::DCPS::ProcessMonitor * const impl =
    dynamic_cast<POA_OpenDDS::DCPS::ProcessMonitor *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  retrieve_report_ProcessMonitor command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


namespace POA_OpenDDS
{
  
  namespace DCPS
  {
    
    // TAO_IDL - Generated from
    // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_operation\upcall_command_ss.cpp:82

    class enable_report_collection_ProcessMonitor
      : public TAO::Upcall_Command
    {
    public:
      inline enable_report_collection_ProcessMonitor (
        POA_OpenDDS::DCPS::ProcessMonitor * servant)
        : servant_ (servant)
      {
      }

      virtual void execute (void)
      {
        this->servant_->enable_report_collection ();
      }
    
    private:
      POA_OpenDDS::DCPS::ProcessMonitor * const servant_;
    };
  }
}
// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_operation\operation_ss.cpp:170

void POA_OpenDDS::DCPS::ProcessMonitor::enable_report_collection_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;

  POA_OpenDDS::DCPS::ProcessMonitor * const impl =
    dynamic_cast<POA_OpenDDS::DCPS::ProcessMonitor *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  enable_report_collection_ProcessMonitor command (
    impl);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


namespace POA_OpenDDS
{
  
  namespace DCPS
  {
    
    // TAO_IDL - Generated from
    // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_operation\upcall_command_ss.cpp:82

    class disable_report_collection_ProcessMonitor
      : public TAO::Upcall_Command
    {
    public:
      inline disable_report_collection_ProcessMonitor (
        POA_OpenDDS::DCPS::ProcessMonitor * servant)
        : servant_ (servant)
      {
      }

      virtual void execute (void)
      {
        this->servant_->disable_report_collection ();
      }
    
    private:
      POA_OpenDDS::DCPS::ProcessMonitor * const servant_;
    };
  }
}
// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_operation\operation_ss.cpp:170

void POA_OpenDDS::DCPS::ProcessMonitor::disable_report_collection_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;

  POA_OpenDDS::DCPS::ProcessMonitor * const impl =
    dynamic_cast<POA_OpenDDS::DCPS::ProcessMonitor *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  disable_report_collection_ProcessMonitor command (
    impl);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


namespace POA_OpenDDS
{
  
  namespace DCPS
  {
    
    // TAO_IDL - Generated from
    // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_operation\upcall_command_ss.cpp:82

    class enable_report_publishing_ProcessMonitor
      : public TAO::Upcall_Command
    {
    public:
      inline enable_report_publishing_ProcessMonitor (
        POA_OpenDDS::DCPS::ProcessMonitor * servant)
        : servant_ (servant)
      {
      }

      virtual void execute (void)
      {
        this->servant_->enable_report_publishing ();
      }
    
    private:
      POA_OpenDDS::DCPS::ProcessMonitor * const servant_;
    };
  }
}
// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_operation\operation_ss.cpp:170

void POA_OpenDDS::DCPS::ProcessMonitor::enable_report_publishing_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;

  POA_OpenDDS::DCPS::ProcessMonitor * const impl =
    dynamic_cast<POA_OpenDDS::DCPS::ProcessMonitor *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  enable_report_publishing_ProcessMonitor command (
    impl);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


namespace POA_OpenDDS
{
  
  namespace DCPS
  {
    
    // TAO_IDL - Generated from
    // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_operation\upcall_command_ss.cpp:82

    class diable_report_publishing_ProcessMonitor
      : public TAO::Upcall_Command
    {
    public:
      inline diable_report_publishing_ProcessMonitor (
        POA_OpenDDS::DCPS::ProcessMonitor * servant)
        : servant_ (servant)
      {
      }

      virtual void execute (void)
      {
        this->servant_->diable_report_publishing ();
      }
    
    private:
      POA_OpenDDS::DCPS::ProcessMonitor * const servant_;
    };
  }
}
// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_operation\operation_ss.cpp:170

void POA_OpenDDS::DCPS::ProcessMonitor::diable_report_publishing_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;

  POA_OpenDDS::DCPS::ProcessMonitor * const impl =
    dynamic_cast<POA_OpenDDS::DCPS::ProcessMonitor *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  diable_report_publishing_ProcessMonitor command (
    impl);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


namespace POA_OpenDDS
{
  
  namespace DCPS
  {
    
    // TAO_IDL - Generated from
    // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_operation\upcall_command_ss.cpp:82

    class set_publishing_period_ProcessMonitor
      : public TAO::Upcall_Command
    {
    public:
      inline set_publishing_period_ProcessMonitor (
        POA_OpenDDS::DCPS::ProcessMonitor * servant,
        TAO_Operation_Details const * operation_details,
        TAO::Argument * const args[])
        : servant_ (servant)
          , operation_details_ (operation_details)
          , args_ (args)
      {
      }

      virtual void execute (void)
      {
        TAO::SArg_Traits< ::DDS::Duration_t>::in_arg_type arg_1 =
          TAO::Portable_Server::get_in_arg< ::DDS::Duration_t> (
            this->operation_details_,
            this->args_,
            1);
          
        this->servant_->set_publishing_period (
          arg_1);
      }
    
    private:
      POA_OpenDDS::DCPS::ProcessMonitor * const servant_;
      TAO_Operation_Details const * const operation_details_;
      TAO::Argument * const * const args_;
    };
  }
}
// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_operation\operation_ss.cpp:170

void POA_OpenDDS::DCPS::ProcessMonitor::set_publishing_period_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;
  TAO::SArg_Traits< ::DDS::Duration_t>::in_arg_val _tao_period;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_period
    };
  
  static size_t const nargs = 2;

  POA_OpenDDS::DCPS::ProcessMonitor * const impl =
    dynamic_cast<POA_OpenDDS::DCPS::ProcessMonitor *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  set_publishing_period_ProcessMonitor command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


namespace POA_OpenDDS
{
  
  namespace DCPS
  {
    
    // TAO_IDL - Generated from
    // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_operation\upcall_command_ss.cpp:82

    class get_publishing_period_ProcessMonitor
      : public TAO::Upcall_Command
    {
    public:
      inline get_publishing_period_ProcessMonitor (
        POA_OpenDDS::DCPS::ProcessMonitor * servant,
        TAO_Operation_Details const * operation_details,
        TAO::Argument * const args[])
        : servant_ (servant)
          , operation_details_ (operation_details)
          , args_ (args)
      {
      }

      virtual void execute (void)
      {
        TAO::SArg_Traits< ::DDS::Duration_t>::ret_arg_type retval =
          TAO::Portable_Server::get_ret_arg< ::DDS::Duration_t> (
            this->operation_details_,
            this->args_);
        
        retval =
          this->servant_->get_publishing_period ();
      }
    
    private:
      POA_OpenDDS::DCPS::ProcessMonitor * const servant_;
      TAO_Operation_Details const * const operation_details_;
      TAO::Argument * const * const args_;
    };
  }
}
// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_operation\operation_ss.cpp:170

void POA_OpenDDS::DCPS::ProcessMonitor::get_publishing_period_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::DDS::Duration_t>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;

  POA_OpenDDS::DCPS::ProcessMonitor * const impl =
    dynamic_cast<POA_OpenDDS::DCPS::ProcessMonitor *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  get_publishing_period_ProcessMonitor command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}




// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_ss.cpp:164





::CORBA::Boolean POA_OpenDDS::DCPS::ProcessMonitor::_is_a (const char* value)
{
  return
    (
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/ProcessMonitor:1.0"
        ) == 0 ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_OpenDDS::DCPS::ProcessMonitor::_interface_repository_id (void) const
{
  return "IDL:OpenDDS/DCPS/ProcessMonitor:1.0";
}


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_ss.cpp:422



void POA_OpenDDS::DCPS::ProcessMonitor::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_ss.cpp:370



OpenDDS::DCPS::ProcessMonitor *
POA_OpenDDS::DCPS::ProcessMonitor::_this (void)
{
  TAO_Stub *stub = this->_create_stub ();

  TAO_Stub_Auto_Ptr safe_stub (stub);
  ::CORBA::Object_ptr tmp = CORBA::Object_ptr ();

  ::CORBA::Boolean const _tao_opt_colloc =
    stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  
  ACE_NEW_RETURN (
      tmp,
      ::CORBA::Object (stub, _tao_opt_colloc, this),
      0);
  
  ::CORBA::Object_var obj = tmp;
  (void) safe_stub.release ();

  typedef ::OpenDDS::DCPS::ProcessMonitor STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in ());
}

OPENDDS_END_VERSIONED_NAMESPACE_DECL



#endif /* ifndef */

