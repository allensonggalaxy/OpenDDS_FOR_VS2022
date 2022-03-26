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
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_codegen.cpp:151

#ifndef _TAO_PIDL_MESSAGING_SYNCSCOPE_POLICYC_GFUEPT_H_
#define _TAO_PIDL_MESSAGING_SYNCSCOPE_POLICYC_GFUEPT_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/Messaging/messaging_export.h"
#include "tao/Basic_Types.h"
#include "tao/Object.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "tao/PolicyC.h"
#include "tao/Messaging_SyncScopeC.h"
#include "tao/Messaging/Messaging_TypesC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 2 || TAO_BETA_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_Messaging_Export

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_module\module_ch.cpp:37

namespace Messaging
{
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_interface.cpp:750

  

#if !defined (_MESSAGING_SYNCSCOPEPOLICY__VAR_OUT_CH_)
#define _MESSAGING_SYNCSCOPEPOLICY__VAR_OUT_CH_

  class SyncScopePolicy;
  typedef SyncScopePolicy *SyncScopePolicy_ptr;

  typedef
    TAO_Objref_Var_T<
        SyncScopePolicy
      >
    SyncScopePolicy_var;
  
  typedef
    TAO_Objref_Out_T<
        SyncScopePolicy
      >
    SyncScopePolicy_out;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_ch.cpp:42

  

  class TAO_Messaging_Export SyncScopePolicy
    : public virtual ::CORBA::Policy
  
  {
  public:
    // TAO_IDL - Generated from
    // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_type.cpp:304

    typedef SyncScopePolicy_ptr _ptr_type;
    typedef SyncScopePolicy_var _var_type;
    typedef SyncScopePolicy_out _out_type;

    // The static operations.
    static SyncScopePolicy_ptr _duplicate (SyncScopePolicy_ptr obj);

    static void _tao_release (SyncScopePolicy_ptr obj);

    static SyncScopePolicy_ptr _narrow (::CORBA::Object_ptr obj);
    static SyncScopePolicy_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static SyncScopePolicy_ptr _nil (void);

    virtual ::Messaging::SyncScope synchronization (
      void) = 0;

    virtual ::CORBA::Policy_ptr copy (
      void) = 0;

    virtual void destroy (
      void) = 0;

    
    // TAO_IDL - Generated from
    // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_ch.cpp:138

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    SyncScopePolicy (void);

    

    virtual ~SyncScopePolicy (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    ACE_UNIMPLEMENTED_FUNC (SyncScopePolicy (const SyncScopePolicy &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (SyncScopePolicy (SyncScopePolicy &&))
#endif /* ACE_HAS_CPP11 */
    ACE_UNIMPLEMENTED_FUNC (SyncScopePolicy &operator= (const SyncScopePolicy &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (SyncScopePolicy &operator= (SyncScopePolicy &&))
#endif /* ACE_HAS_CPP11 */
  };


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_module\module_ch.cpp:65


} // module Messaging
// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_arg_traits.cpp:66




TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_traits.cpp:60




TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_MESSAGING_SYNCSCOPEPOLICY__TRAITS_)
#define _MESSAGING_SYNCSCOPEPOLICY__TRAITS_

  template<>
  struct TAO_Messaging_Export Objref_Traits< ::Messaging::SyncScopePolicy>
  {
    static ::Messaging::SyncScopePolicy_ptr duplicate (
        ::Messaging::SyncScopePolicy_ptr p);
    static void release (
        ::Messaging::SyncScopePolicy_ptr p);
    static ::Messaging::SyncScopePolicy_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Messaging::SyncScopePolicy_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_codegen.cpp:1657



TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif /* ifndef */
