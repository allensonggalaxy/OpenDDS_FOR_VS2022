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
#ifndef CIAO_COHERENTWRITE_TEST_SENDER_EXEC_MVBFHL_H_
#define CIAO_COHERENTWRITE_TEST_SENDER_EXEC_MVBFHL_H_

#include /**/ "ace/pre.h"

#include "CoherentWrite_Test_SenderEC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include /**/ "Sender_exec_export.h"
#include "tao/LocalObject.h"

namespace CIAO_CoherentWrite_Test_Sender_Impl
{

  class Sender_exec_i;

  /**
   * WriteHandler
   */

  class WriteHandler :
    public ACE_Event_Handler
  {
  public:
    WriteHandler (Sender_exec_i &callback);
    virtual int handle_exception (ACE_HANDLE fc = ACE_INVALID_HANDLE);
  private:
    Sender_exec_i &callback_;
  };

  /**
   * Provider Executor Implementation Class: restart_writer_exec_i
   */

  class restart_writer_exec_i
    : public virtual ::CCM_CoherentWriteRestarter,
      public virtual ::CORBA::LocalObject
  {
  public:
    restart_writer_exec_i (
      ::CoherentWrite_Test::CCM_Sender_Context_ptr ctx,
      Sender_exec_i &callback);
    virtual ~restart_writer_exec_i (void);

    //@{
    /** Operations and attributes from CoherentWriteRestarter. */

    virtual
    void restart_write (void);
    //@}

  private:
    ::CoherentWrite_Test::CCM_Sender_Context_var ciao_context_;
    Sender_exec_i &callback_;
  };

  /**
   * Component Executor Implementation Class: Sender_exec_i
   */

  class Sender_exec_i
    : public virtual Sender_Exec,
      public virtual ::CORBA::LocalObject
  {
  public:
    Sender_exec_i (void);
    virtual ~Sender_exec_i (void);

    //@{
    /** Supported operations and attributes. */

    //@}

    //@{
    /** Component attributes and port operations. */

    virtual ::CCM_CoherentWriteRestarter_ptr
    get_restart_writer (void);

    virtual ::CORBA::UShort iterations (void);

    virtual void iterations (::CORBA::UShort iterations);
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
    void start (void);
    void restart (void);

    //@}

  private:
    ::CoherentWrite_Test::CCM_Sender_Context_var ciao_context_;

    //@{
    /** Component attributes. */
    ::CCM_CoherentWriteRestarter_var ciao_restart_writer_;

    ::CORBA::UShort iterations_;
    //@}

    //@{
    /** User defined members. */
    CORBA::UShort run_;
    CORBA::ULong total_iter;

    WriteHandler *wh_;

    //@}

    //@{
    /** User defined private operations. */

    //@}

    /// Get the ACE_Reactor
    ACE_Reactor* reactor (void);
  };

  extern "C" SENDER_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_CoherentWrite_Test_Sender_Impl (void);
}

#include /**/ "ace/post.h"

#endif /* ifndef */
