// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v1.7.7
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
// be/be_codegen.cpp:1277

#include "Progressive_exec.h"

#include "ace/Log_Msg.h"

namespace CIAO_Simple_Progressive_Impl
{
  //============================================================
  // Facet Executor Implementation Class: Trigger_exec_i
  //============================================================
  Trigger_exec_i::Trigger_exec_i (bool &triggered,
                                  ::Simple::CCM_Progressive_Context_ptr context)
    : triggered_ (triggered),
      context_ (context)
  {
    ACE_TRACE ("Trigger_exec_i::Trigger_exec_i (void)");
  }

  Trigger_exec_i::~Trigger_exec_i (void)
  {
    ACE_TRACE ("Trigger_exec_i::~Trigger_exec_i (void)");
  }

  // Operations from ::Simple::Trigger

  void
  Trigger_exec_i::hello (
    const char * hello )
  {
    ACE_TRACE ("Trigger_exec_i::hello ()");
    this->triggered_ = true;
    // Your code here.
    ACE_DEBUG ((LM_EMERGENCY, "Trigger_exec_i::hello - "
                 "Got the following information from trig port: %C\n",
                 hello));

    ::Simple::Trigger_var trig (this->context_->get_connection_trig_out ());

    if (CORBA::is_nil (trig.in ()))
      {
        ACE_ERROR ((LM_ERROR, "SimpleUser_exec_i::ccm_activate () - "
                    "Error: Reference nil for port trig\n"));
        return;
      }

    try
      {
        trig->hello ("Test successful; hello from SimpleUser.");
      }
    catch (CORBA::Exception &ex)
      {
        ACE_ERROR ((LM_ERROR, "SimpleUser_exec_i::ccm_activate () - "
                     "Caught CORBA exception, details follow:\n"));
        ex._tao_print_exception ("SimpleUser_exec_i::ccm_activate () - ");
      }
    catch (...)
      {
        ACE_ERROR ((LM_ERROR, "SimpleUser_exec_i::ccm_activate () - "
                     "Error: Caught unknown exception whilst invoking reference for port trig.\n"));
      }
  }

  //============================================================
  // Component Executor Implementation Class: Progressive_exec_i
  //============================================================

  Progressive_exec_i::Progressive_exec_i (void)
    : triggered_ (false)
  {
  }

  Progressive_exec_i::~Progressive_exec_i (void)
  {
  }

  // Supported operations and attributes.

  // Component attributes and port operations.

  ::Simple::CCM_Trigger_ptr
  Progressive_exec_i::get_trig_in (void)
  {
    ACE_TRACE ("SimpleProvider_exec_i::get_trig ()");
    return new Trigger_exec_i (this->triggered_,
                               this->context_);
  }

  // Operations from Components::SessionComponent.

  void
  Progressive_exec_i::set_session_context (
    ::Components::SessionContext_ptr ctx)
  {
    this->context_ =
      ::Simple::CCM_Progressive_Context::_narrow (ctx);

    if ( ::CORBA::is_nil (this->context_.in ()))
      {
        throw ::CORBA::INTERNAL ();
      }
  }

  void
  Progressive_exec_i::configuration_complete (void)
  {
    /* Your code here. */
  }

  void
  Progressive_exec_i::ccm_activate (void)
  {
    /* Your code here. */
  }

  void
  Progressive_exec_i::ccm_passivate (void)
  {
    /* Your code here. */
  }

  void
  Progressive_exec_i::ccm_remove (void)
  {
    ACE_TRACE ("SimpleProvider_exec_i::ccm_remove ()");
    if (!triggered_)
      ACE_ERROR ((LM_EMERGENCY, "Error:  My facet wasn't triggered!!\n"));
  }

  extern "C" PROGRESSIVE_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_Simple_Progressive_Impl (void)
  {
    ::Components::EnterpriseComponent_ptr retval =
      ::Components::EnterpriseComponent::_nil ();

    ACE_NEW_NORETURN (
      retval,
      Progressive_exec_i);

    return retval;
  }
}

namespace CIAO_Simple_Progressive_Impl
{
  //============================================================
  // Home Executor Implementation Class: ProgressiveHome_exec_i
  //============================================================

  ProgressiveHome_exec_i::ProgressiveHome_exec_i (void)
  {
  }

  ProgressiveHome_exec_i::~ProgressiveHome_exec_i (void)
  {
  }

  // Implicit operations.

  ::Components::EnterpriseComponent_ptr
  ProgressiveHome_exec_i::create (void)
  {
    ::Components::EnterpriseComponent_ptr retval =
      ::Components::EnterpriseComponent::_nil ();

    ACE_NEW_THROW_EX (
      retval,
      Progressive_exec_i,
      ::CORBA::NO_MEMORY ());

    return retval;
  }

  extern "C" PROGRESSIVE_EXEC_Export ::Components::HomeExecutorBase_ptr
  create_Simple_ProgressiveHome_Impl (void)
  {
    ::Components::HomeExecutorBase_ptr retval =
      ::Components::HomeExecutorBase::_nil ();

    ACE_NEW_NORETURN (
      retval,
      ProgressiveHome_exec_i);

    return retval;
  }
}

