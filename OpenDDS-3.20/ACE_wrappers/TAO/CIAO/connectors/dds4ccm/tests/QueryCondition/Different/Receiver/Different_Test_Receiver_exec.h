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
#ifndef CIAO_DIFFERENT_TEST_RECEIVER_EXEC_IK2VYJ_H_
#define CIAO_DIFFERENT_TEST_RECEIVER_EXEC_IK2VYJ_H_

#include /**/ "ace/pre.h"

#include "Different_Test_ReceiverEC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include /**/ "Receiver_exec_export.h"
#include "tao/LocalObject.h"

namespace CIAO_Different_Test_Receiver_Impl
{
  class Receiver_exec_i;

  /**
   * Read action generator
   */

  class read_action_Generator
    : public ACE_Event_Handler
  {
  public:
    read_action_Generator (Receiver_exec_i &callback);

    ~read_action_Generator ();

    virtual int handle_timeout (const ACE_Time_Value &tv,
                                const void *arg);
  private:
    Receiver_exec_i &callback_;
  };

  /**
   * Provider Executor Implementation Class: get_port_status_exec_i
   */

  class get_port_status_exec_i
    : public virtual ::CCM_DDS::CCM_PortStatusListener,
      public virtual ::CORBA::LocalObject
  {
  public:
    get_port_status_exec_i (
      ::Different_Test::CCM_Receiver_Context_ptr ctx);
    virtual ~get_port_status_exec_i (void);

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
    ::Different_Test::CCM_Receiver_Context_var ciao_context_;
  };

  /**
   * Provider Executor Implementation Class: read_port_status_exec_i
   */

  class read_port_status_exec_i
    : public virtual ::CCM_DDS::CCM_PortStatusListener,
      public virtual ::CORBA::LocalObject
  {
  public:
    read_port_status_exec_i (
      ::Different_Test::CCM_Receiver_Context_ptr ctx);
    virtual ~read_port_status_exec_i (void);

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
    ::Different_Test::CCM_Receiver_Context_var ciao_context_;
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

    virtual ::CCM_DDS::CCM_PortStatusListener_ptr
    get_get_port_status (void);

    virtual ::CCM_DDS::CCM_PortStatusListener_ptr
    get_read_port_status (void);
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
    bool check_last (void);
    void start_read (void);
    void run (void);

    void iterations (::CORBA::UShort iterations);
    void keys (::CORBA::UShort keys);

    //@}

  private:
    ::Different_Test::CCM_Receiver_Context_var ciao_context_;

    //@{
    /** Component attributes. */
    ::CCM_DDS::CCM_PortStatusListener_var ciao_get_port_status_;
    ::CCM_DDS::CCM_PortStatusListener_var ciao_read_port_status_;
    //@}

    //@{
    /** User defined members. */
    CORBA::UShort   iterations_;
    CORBA::UShort   keys_;

    read_action_Generator *ticker_;

    //@}

    //@{
    /** User defined private operations. */
    void test_all (void);
    void read_all (void);
    void get_all (void);

    void check_iter_reader (const QueryConditionTest & sample);
    bool check_iter_getter (const QueryConditionTest & sample);

    void check_filters (void);
    void check_filter (
      ::Different_Test::QueryConditionTestConnector::Reader_ptr reader,
      bool check_getter);

    void set_filters (void);

    //@}

    /// Get the ACE_Reactor
    ACE_Reactor* reactor (void);
  };

  extern "C" RECEIVER_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_Different_Test_Receiver_Impl (void);
}

#include /**/ "ace/post.h"

#endif /* ifndef */
