// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v1.8.3
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
#ifndef CIAO_LNE_TEST_RECEIVER_EXEC_KLQOYU_H_
#define CIAO_LNE_TEST_RECEIVER_EXEC_KLQOYU_H_

#include /**/ "ace/pre.h"

#include "LNE_Test_ReceiverEC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include /**/ "Receiver_exec_export.h"
#include "tao/LocalObject.h"

namespace CIAO_LNE_Test_Receiver_Impl
{
  typedef ACE_Atomic_Op <TAO_SYNCH_MUTEX, CORBA::ULong> Atomic_ULong;

  /**
   * Provider Executor Implementation Class: info_listen_data_listener_exec_i
   */

  class info_listen_data_listener_exec_i
    : public virtual ::LNE_Test::ListenNotEnabledTestConnector::CCM_Listener,
      public virtual ::CORBA::LocalObject
  {
  public:
    info_listen_data_listener_exec_i (
      ::LNE_Test::CCM_Receiver_Context_ptr ctx,
      Atomic_ULong &received_one_by_one,
      Atomic_ULong &received_many_by_many);
    virtual ~info_listen_data_listener_exec_i (void);

    //@{
    /** Operations and attributes from LNE_Test::ListenNotEnabledTestConnector::Listener. */

    virtual
    void on_one_data (const ::ListenNotEnabledTest & datum,
    const ::CCM_DDS::ReadInfo & info);

    virtual
    void on_many_data (const ::ListenNotEnabledTestSeq & data,
    const ::CCM_DDS::ReadInfoSeq & infos);
    //@}

  private:
    ::LNE_Test::CCM_Receiver_Context_var ciao_context_;
    Atomic_ULong &received_one_by_one_;
    Atomic_ULong &received_many_by_many_;
  };

  /**
   * Provider Executor Implementation Class: info_listen_status_exec_i
   */

  class info_listen_status_exec_i
    : public virtual ::CCM_DDS::CCM_PortStatusListener,
      public virtual ::CORBA::LocalObject
  {
  public:
    info_listen_status_exec_i (
      ::LNE_Test::CCM_Receiver_Context_ptr ctx);
    virtual ~info_listen_status_exec_i (void);

    //@{
    /** Operations and attributes from CCM_DDS::PortStatusListener. */

    virtual
    void on_requested_deadline_missed (::DDS::DataReader_ptr the_reader,
    const ::DDS::RequestedDeadlineMissedStatus & status);

    virtual
    void on_sample_lost (::DDS::DataReader_ptr the_reader,
    const ::DDS::SampleLostStatus & status);
    //@}

  private:
    ::LNE_Test::CCM_Receiver_Context_var ciao_context_;
  };

  /**
   * Component Executor Implementation Class: Receiver_exec_i
   */

  class Receiver_exec_i
    : public virtual Receiver_Exec,
      public virtual ::CORBA::LocalObject
  {
  public:
    Receiver_exec_i (void);
    virtual ~Receiver_exec_i (void);

    //@{
    /** Supported operations and attributes. */

    //@}

    //@{
    /** Component attributes and port operations. */

    virtual ::LNE_Test::ListenNotEnabledTestConnector::CCM_Listener_ptr
    get_info_listen_data_listener (void);

    virtual ::CCM_DDS::CCM_PortStatusListener_ptr
    get_info_listen_status (void);
    //@}

    //@{
    /** Operations from Components::SessionComponent. */
    virtual void set_session_context (::Components::SessionContext_ptr ctx);
    virtual void configuration_complete (void);
    virtual void ccm_activate (void);
    virtual void ccm_passivate (void);
    virtual void ccm_remove (void);
    //@}

    //@{
    /** User defined public operations. */

    //@}

  private:
    ::LNE_Test::CCM_Receiver_Context_var ciao_context_;

    //@{
    /** Component attributes. */
    ::LNE_Test::ListenNotEnabledTestConnector::CCM_Listener_var ciao_info_listen_data_listener_;
    ::CCM_DDS::CCM_PortStatusListener_var ciao_info_listen_status_;
    //@}

    //@{
    /** User defined members. */
    Atomic_ULong received_one_by_one_;
    Atomic_ULong received_many_by_many_;

    //@}

    //@{
    /** User defined private operations. */

    //@}
  };

  extern "C" RECEIVER_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_LNE_Test_Receiver_Impl (void);
}

#include /**/ "ace/post.h"

#endif /* ifndef */
