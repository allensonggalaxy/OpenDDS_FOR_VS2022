// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v1.8.2
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

#include "WU_LateBinding_Receiver_exec.h"
#include "WU_LateBinding_Receiver_impl.h"

namespace CIAO_WU_LateBinding_Receiver_Impl
{

  /**
   * Facet Executor Implementation Class: info_out_event_data_listener_exec_i
   */

  info_out_event_data_listener_exec_i::info_out_event_data_listener_exec_i (
        ::WU_LateBinding::CCM_Receiver_Context_ptr ctx)
    : ciao_context_ (
        ::WU_LateBinding::CCM_Receiver_Context::_duplicate (ctx))
  {
  }

  info_out_event_data_listener_exec_i::~info_out_event_data_listener_exec_i (void)
  {
  }

  // Operations from ::WU_LateBinding::WU_LateBindingTestConnector::Listener

  void
  info_out_event_data_listener_exec_i::on_one_data (const ::WU_LateBindingTest & datum,
  const ::CCM_DDS::ReadInfo & /* info */)
  {
    WU_LateBinding_Receiver_impl::on_one_data(datum);
  }

  void
  info_out_event_data_listener_exec_i::on_many_data (const ::WU_LateBindingTestSeq & /* data */,
  const ::CCM_DDS::ReadInfoSeq & /* infos */)
  {
    WU_LateBinding_Receiver_impl::on_many_data();
  }

  /**
   * Facet Executor Implementation Class: info_out_event_status_exec_i
   */

  info_out_event_status_exec_i::info_out_event_status_exec_i (
        ::WU_LateBinding::CCM_Receiver_Context_ptr ctx)
    : ciao_context_ (
        ::WU_LateBinding::CCM_Receiver_Context::_duplicate (ctx))
  {
  }

  info_out_event_status_exec_i::~info_out_event_status_exec_i (void)
  {
  }

  // Operations from ::CCM_DDS::PortStatusListener

  void
  info_out_event_status_exec_i::on_requested_deadline_missed (::DDS::DataReader_ptr /* the_reader */,
  const ::DDS::RequestedDeadlineMissedStatus & /* status */)
  {
    /* Your code here. */
  }

  void
  info_out_event_status_exec_i::on_sample_lost (::DDS::DataReader_ptr /* the_reader */,
  const ::DDS::SampleLostStatus & /* status */)
  {
    /* Your code here. */
  }

  /**
   * Facet Executor Implementation Class: info_out_state_data_listener_exec_i
   */

  info_out_state_data_listener_exec_i::info_out_state_data_listener_exec_i (
        ::WU_LateBinding::CCM_Receiver_Context_ptr ctx)
    : ciao_context_ (
        ::WU_LateBinding::CCM_Receiver_Context::_duplicate (ctx))
  {
  }

  info_out_state_data_listener_exec_i::~info_out_state_data_listener_exec_i (void)
  {
  }

  // Operations from ::WU_LateBinding::WU_LateBindingTestConnector::StateListener

  void
  info_out_state_data_listener_exec_i::on_creation (const ::WU_LateBindingTest & datum,
  const ::CCM_DDS::ReadInfo & /* info */)
  {
    WU_LateBinding_Receiver_impl::on_creation(datum);
  }

  void
  info_out_state_data_listener_exec_i::on_one_update (const ::WU_LateBindingTest & datum,
  const ::CCM_DDS::ReadInfo & /* info */)
  {
    WU_LateBinding_Receiver_impl::on_one_update(datum);
  }

  void
  info_out_state_data_listener_exec_i::on_many_updates (const ::WU_LateBindingTestSeq & /* data */,
  const ::CCM_DDS::ReadInfoSeq & /* infos */)
  {
    /* Your code here. */
  }

  void
  info_out_state_data_listener_exec_i::on_deletion (const ::WU_LateBindingTest & /* datum */,
  const ::CCM_DDS::ReadInfo & /* info */)
  {
    /* Your code here. */
  }

  /**
   * Facet Executor Implementation Class: info_out_state_status_exec_i
   */

  info_out_state_status_exec_i::info_out_state_status_exec_i (
        ::WU_LateBinding::CCM_Receiver_Context_ptr ctx)
    : ciao_context_ (
        ::WU_LateBinding::CCM_Receiver_Context::_duplicate (ctx))
  {
  }

  info_out_state_status_exec_i::~info_out_state_status_exec_i (void)
  {
  }

  // Operations from ::CCM_DDS::PortStatusListener

  void
  info_out_state_status_exec_i::on_requested_deadline_missed (::DDS::DataReader_ptr /* the_reader */,
  const ::DDS::RequestedDeadlineMissedStatus & /* status */)
  {
    /* Your code here. */
  }

  void
  info_out_state_status_exec_i::on_sample_lost (::DDS::DataReader_ptr /* the_reader */,
  const ::DDS::SampleLostStatus & /* status */)
  {
    /* Your code here. */
  }

  /**
   * Component Executor Implementation Class: Receiver_exec_i
   */

  Receiver_exec_i::Receiver_exec_i (void)
    : iterations_ (0)
  {
  }

  Receiver_exec_i::~Receiver_exec_i (void)
  {
  }

  // Supported operations and attributes.

  // Component attributes and port operations.

  ::WU_LateBinding::WU_LateBindingTestConnector::CCM_Listener_ptr
  Receiver_exec_i::get_info_out_event_data_listener (void)
  {
    if ( ::CORBA::is_nil (this->ciao_info_out_event_data_listener_.in ()))
      {
        info_out_event_data_listener_exec_i *tmp = 0;
        ACE_NEW_RETURN (
          tmp,
          info_out_event_data_listener_exec_i (
            this->ciao_context_.in ()),
            ::WU_LateBinding::WU_LateBindingTestConnector::CCM_Listener::_nil ());

          this->ciao_info_out_event_data_listener_ = tmp;
      }

    return
      ::WU_LateBinding::WU_LateBindingTestConnector::CCM_Listener::_duplicate (
        this->ciao_info_out_event_data_listener_.in ());
  }

  ::CCM_DDS::CCM_PortStatusListener_ptr
  Receiver_exec_i::get_info_out_event_status (void)
  {
    if ( ::CORBA::is_nil (this->ciao_info_out_event_status_.in ()))
      {
        info_out_event_status_exec_i *tmp = 0;
        ACE_NEW_RETURN (
          tmp,
          info_out_event_status_exec_i (
            this->ciao_context_.in ()),
            ::CCM_DDS::CCM_PortStatusListener::_nil ());

          this->ciao_info_out_event_status_ = tmp;
      }

    return
      ::CCM_DDS::CCM_PortStatusListener::_duplicate (
        this->ciao_info_out_event_status_.in ());
  }

  ::WU_LateBinding::WU_LateBindingTestConnector::CCM_StateListener_ptr
  Receiver_exec_i::get_info_out_state_data_listener (void)
  {
    if ( ::CORBA::is_nil (this->ciao_info_out_state_data_listener_.in ()))
      {
        info_out_state_data_listener_exec_i *tmp = 0;
        ACE_NEW_RETURN (
          tmp,
          info_out_state_data_listener_exec_i (
            this->ciao_context_.in ()),
            ::WU_LateBinding::WU_LateBindingTestConnector::CCM_StateListener::_nil ());

          this->ciao_info_out_state_data_listener_ = tmp;
      }

    return
      ::WU_LateBinding::WU_LateBindingTestConnector::CCM_StateListener::_duplicate (
        this->ciao_info_out_state_data_listener_.in ());
  }

  ::CCM_DDS::CCM_PortStatusListener_ptr
  Receiver_exec_i::get_info_out_state_status (void)
  {
    if ( ::CORBA::is_nil (this->ciao_info_out_state_status_.in ()))
      {
        info_out_state_status_exec_i *tmp = 0;
        ACE_NEW_RETURN (
          tmp,
          info_out_state_status_exec_i (
            this->ciao_context_.in ()),
            ::CCM_DDS::CCM_PortStatusListener::_nil ());

          this->ciao_info_out_state_status_ = tmp;
      }

    return
      ::CCM_DDS::CCM_PortStatusListener::_duplicate (
        this->ciao_info_out_state_status_.in ());
  }

  ::CORBA::UShort
  Receiver_exec_i::iterations (void)
  {
    return this->iterations_;
  }

  void
  Receiver_exec_i::iterations (
    const ::CORBA::UShort iterations)
  {
    this->iterations_ = iterations;
  }

  // Operations from Components::SessionComponent.

  void
  Receiver_exec_i::set_session_context (
    ::Components::SessionContext_ptr ctx)
  {
    this->ciao_context_ =
      ::WU_LateBinding::CCM_Receiver_Context::_narrow (ctx);

    if ( ::CORBA::is_nil (this->ciao_context_.in ()))
      {
        throw ::CORBA::INTERNAL ();
      }
  }

  void
  Receiver_exec_i::configuration_complete (void)
  {
    /* Your code here. */
  }

  void
  Receiver_exec_i::ccm_activate (void)
  {
    WU_LateBinding_Receiver_impl::start(
      this->ciao_context_.in ());
  }

  void
  Receiver_exec_i::ccm_passivate (void)
  {
    /* Your code here. */
  }

  void
  Receiver_exec_i::ccm_remove (void)
  {
    /* Your code here. */
  }

  extern "C" RECEIVER_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_WU_LateBinding_Receiver_Impl (void)
  {
    ::Components::EnterpriseComponent_ptr retval =
      ::Components::EnterpriseComponent::_nil ();

    ACE_NEW_NORETURN (
      retval,
      Receiver_exec_i);

    return retval;
  }
}
