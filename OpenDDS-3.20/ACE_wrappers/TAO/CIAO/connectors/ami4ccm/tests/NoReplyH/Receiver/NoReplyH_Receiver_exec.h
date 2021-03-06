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
#ifndef CIAO_NOREPLYH_RECEIVER_EXEC_G46GZJ_H_
#define CIAO_NOREPLYH_RECEIVER_EXEC_G46GZJ_H_

#include /**/ "ace/pre.h"

#include "NoReplyH_ReceiverEC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include /**/ "NoReplyH_Receiver_exec_export.h"
#include "tao/LocalObject.h"

namespace CIAO_NoReplyH_Receiver_Impl
{
  typedef ACE_Atomic_Op <TAO_SYNCH_MUTEX, CORBA::UShort > Atomic_UShort;

  /**
   * Provider Executor Implementation Class: do_my_foo_exec_i
   */

  class do_my_foo_exec_i
    : public virtual ::NoReplyH::CCM_MyFoo,
      public virtual ::CORBA::LocalObject
  {
  public:
    do_my_foo_exec_i (
      ::NoReplyH::CCM_Receiver_Context_ptr ctx, Atomic_UShort &);
    virtual ~do_my_foo_exec_i (void);

    //@{
    /** Operations and attributes from NoReplyH::MyFoo. */

    virtual
    ::CORBA::Long foo (const char * in_str,
    ::CORBA::String_out answer);

    virtual
    void hello (::CORBA::Long_out answer);

    virtual
    ::CORBA::Short rw_attrib (void);

    virtual
    void rw_attrib (::CORBA::Short rw_attrib);

    virtual
    ::CORBA::Short ro_attrib (void);
    //@}

  private:
    ::NoReplyH::CCM_Receiver_Context_var ciao_context_;
     CORBA::Long attrib_;
     Atomic_UShort &calls_;
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

    virtual ::NoReplyH::CCM_MyFoo_ptr
    get_do_my_foo (void);
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
    ::NoReplyH::CCM_Receiver_Context_var ciao_context_;

    //@{
    /** Component attributes. */
    ::NoReplyH::CCM_MyFoo_var ciao_do_my_foo_;
    //@}

    //@{
    /** User defined members. */
    Atomic_UShort calls_;
    //@}

    //@{
    /** User defined private operations. */
    //@}
  };

  extern "C" NOREPLYH_RECEIVER_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_NoReplyH_Receiver_Impl (void);
}

#include /**/ "ace/post.h"

#endif /* ifndef */
