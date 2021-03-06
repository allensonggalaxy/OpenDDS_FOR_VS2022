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
#ifndef CIAO_GETTER_TEST_RECEIVER_EXEC_5BQU2A_H_
#define CIAO_GETTER_TEST_RECEIVER_EXEC_5BQU2A_H_

#include /**/ "ace/pre.h"

#include "Getter_Test_ReceiverEC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include /**/ "Receiver_exec_export.h"
#include "tao/LocalObject.h"

namespace CIAO_Getter_Test_Receiver_Impl
{
  class Receiver_exec_i;

  /**
   * GetOneHandler
   */
  class GetOneHandler
    : public ACE_Event_Handler
  {
  public:
    GetOneHandler (Receiver_exec_i &,
                   const char * key,
                   CORBA::Long fixed_key,
                   CORBA::Long iteration);
    virtual ~GetOneHandler ();

    virtual int handle_exception (ACE_HANDLE fc = ACE_INVALID_HANDLE);

  private:
    Receiver_exec_i &callback_;
    CORBA::String_var key_;
    CORBA::Long fixed_key_;
    CORBA::Long iteration_;
  };

  /**
   * GetManyHandler
   */
  class GetManyHandler
    : public ACE_Event_Handler
  {
  public:
    GetManyHandler (Receiver_exec_i &,
                   CORBA::UShort keys,
                   CORBA::Long iterations);
    virtual ~GetManyHandler ();

    virtual int handle_exception (ACE_HANDLE fc = ACE_INVALID_HANDLE);

  private:
    Receiver_exec_i &callback_;
    CORBA::UShort keys_;
    CORBA::Long   iterations_;
  };

  /**
   * Provider Executor Implementation Class: info_get_status_exec_i
   */

  class info_get_status_exec_i
    : public virtual ::CCM_DDS::CCM_PortStatusListener,
      public virtual ::CORBA::LocalObject
  {
  public:
    info_get_status_exec_i (
      ::Getter_Test::CCM_Receiver_Context_ptr ctx);
    virtual ~info_get_status_exec_i (void);

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
    ::Getter_Test::CCM_Receiver_Context_var ciao_context_;
  };

  /**
   * Provider Executor Implementation Class: info_fixed_status_exec_i
   */

  class info_fixed_status_exec_i
    : public virtual ::CCM_DDS::CCM_PortStatusListener,
      public virtual ::CORBA::LocalObject
  {
  public:
    info_fixed_status_exec_i (
      ::Getter_Test::CCM_Receiver_Context_ptr ctx);
    virtual ~info_fixed_status_exec_i (void);

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
    ::Getter_Test::CCM_Receiver_Context_var ciao_context_;
  };

  /**
   * Provider Executor Implementation Class: getter_invoke_exec_i
   */

  class getter_invoke_exec_i
    : public virtual ::CCM_GetInvoker,
      public virtual ::CORBA::LocalObject
  {
  public:
    getter_invoke_exec_i (
      ::Getter_Test::CCM_Receiver_Context_ptr ctx,
      Receiver_exec_i & callback);
    virtual ~getter_invoke_exec_i (void);

    //@{
    /** Operations and attributes from GetInvoker. */

    virtual
    void start_timeout_get_one (void);

    virtual
    void start_timeout_get_many (void);

    virtual
    void start_get_one (const char * key,
    ::CORBA::Long fixed_key,
    ::CORBA::Long iteration);

    virtual
    void start_get_many (::CORBA::Short keys,
    ::CORBA::Long iterations);
    //@}

  private:
    ::Getter_Test::CCM_Receiver_Context_var ciao_context_;
    Receiver_exec_i &callback_;
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
    get_info_get_status (void);

    virtual ::CCM_DDS::CCM_PortStatusListener_ptr
    get_info_fixed_status (void);

    virtual ::CCM_GetInvoker_ptr
    get_getter_invoke (void);
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
    void start_get_one (const char * key,
                        CORBA::Long fixed_key,
                        CORBA::Long iteration);
    void timeout_get_one (void);
    void timeout_get_many (void);
    void get_one (const char * key,
                  CORBA::Long fixed_key,
                  CORBA::Long iteration);

    void start_get_many (CORBA::Short keys, CORBA::Long iterations);

    void get_many (CORBA::Short keys, CORBA::Long iterations);

    //@}

  private:
    ::Getter_Test::CCM_Receiver_Context_var ciao_context_;

    //@{
    /** Component attributes. */
    ::CCM_DDS::CCM_PortStatusListener_var ciao_info_get_status_;
    ::CCM_DDS::CCM_PortStatusListener_var ciao_info_fixed_status_;
    ::CCM_GetInvoker_var ciao_getter_invoke_;
    //@}

    //@{
    /** User defined members. */
    DDS::InstanceHandle_t fixed_handle_;
    DDS::InstanceHandle_t variable_handle_;

    //@}

    //@{
    /** User defined private operations. */
    void timeout_get_one_fixed (void);
    void timeout_get_one_variable (void);

    void get_one_fixed (CORBA::Long fixed_key, CORBA::Long iteration);
    void get_one_variable (const char * key, CORBA::Long iteration);

    void read_many (CORBA::Short keys ,
                    CORBA::Long iterations,
                    const GetterTestSeq& gettertest_seq);
    //@}

    /// Get the ACE_Reactor
    ACE_Reactor* reactor (void);
  };

  extern "C" RECEIVER_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_Getter_Test_Receiver_Impl (void);
}

#include /**/ "ace/post.h"

#endif /* ifndef */
