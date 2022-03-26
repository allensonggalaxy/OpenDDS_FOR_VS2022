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

#ifndef _TAO_PIDL_CSD_FRAMEWORKC_WT72XJ_H_
#define _TAO_PIDL_CSD_FRAMEWORKC_WT72XJ_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/CSD_Framework/CSD_FW_Export.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
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

#include "tao/PortableServer/PortableServer_includeC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 2 || TAO_BETA_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_CSD_FW_Export

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_module\module_ch.cpp:37

namespace CSD_Framework
{
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_interface.cpp:750

  

#if !defined (_CSD_FRAMEWORK_STRATEGY__VAR_OUT_CH_)
#define _CSD_FRAMEWORK_STRATEGY__VAR_OUT_CH_

  class Strategy;
  typedef Strategy *Strategy_ptr;

  typedef
    TAO_Objref_Var_T<
        Strategy
      >
    Strategy_var;
  
  typedef
    TAO_Objref_Out_T<
        Strategy
      >
    Strategy_out;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_ch.cpp:42

  

  class TAO_CSD_FW_Export Strategy
    : public virtual ::CORBA::Object
  {
  public:
    // TAO_IDL - Generated from
    // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_type.cpp:304

    typedef Strategy_ptr _ptr_type;
    typedef Strategy_var _var_type;
    typedef Strategy_out _out_type;

    // The static operations.
    static Strategy_ptr _duplicate (Strategy_ptr obj);

    static void _tao_release (Strategy_ptr obj);

    static Strategy_ptr _narrow (::CORBA::Object_ptr obj);
    static Strategy_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Strategy_ptr _nil (void);

    virtual ::CORBA::Boolean apply_to (
      ::PortableServer::POA_ptr p) = 0;

    
    // TAO_IDL - Generated from
    // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_ch.cpp:138

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    Strategy (void);

    

    virtual ~Strategy (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    ACE_UNIMPLEMENTED_FUNC (Strategy (const Strategy &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (Strategy (Strategy &&))
#endif /* ACE_HAS_CPP11 */
    ACE_UNIMPLEMENTED_FUNC (Strategy &operator= (const Strategy &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (Strategy &operator= (Strategy &&))
#endif /* ACE_HAS_CPP11 */
  };
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_interface.cpp:750

  

#if !defined (_CSD_FRAMEWORK_POA__VAR_OUT_CH_)
#define _CSD_FRAMEWORK_POA__VAR_OUT_CH_

  class POA;
  typedef POA *POA_ptr;

  typedef
    TAO_Objref_Var_T<
        POA
      >
    POA_var;
  
  typedef
    TAO_Objref_Out_T<
        POA
      >
    POA_out;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_ch.cpp:42

  

  class TAO_CSD_FW_Export POA
    : public virtual ::PortableServer::POA
  
  {
  public:
    // TAO_IDL - Generated from
    // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_type.cpp:304

    typedef POA_ptr _ptr_type;
    typedef POA_var _var_type;
    typedef POA_out _out_type;

    // The static operations.
    static POA_ptr _duplicate (POA_ptr obj);

    static void _tao_release (POA_ptr obj);

    static POA_ptr _narrow (::CORBA::Object_ptr obj);
    static POA_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static POA_ptr _nil (void);

    virtual void set_csd_strategy (
      ::CSD_Framework::Strategy_ptr s) = 0;

    
    // TAO_IDL - Generated from
    // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_ch.cpp:138

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    POA (void);

    

    virtual ~POA (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    ACE_UNIMPLEMENTED_FUNC (POA (const POA &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (POA (POA &&))
#endif /* ACE_HAS_CPP11 */
    ACE_UNIMPLEMENTED_FUNC (POA &operator= (const POA &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (POA &operator= (POA &&))
#endif /* ACE_HAS_CPP11 */
  };


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_module\module_ch.cpp:65


} // module CSD_Framework
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

#if !defined (_CSD_FRAMEWORK_STRATEGY__TRAITS_)
#define _CSD_FRAMEWORK_STRATEGY__TRAITS_

  template<>
  struct TAO_CSD_FW_Export Objref_Traits< ::CSD_Framework::Strategy>
  {
    static ::CSD_Framework::Strategy_ptr duplicate (
        ::CSD_Framework::Strategy_ptr p);
    static void release (
        ::CSD_Framework::Strategy_ptr p);
    static ::CSD_Framework::Strategy_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::CSD_Framework::Strategy_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_CSD_FRAMEWORK_POA__TRAITS_)
#define _CSD_FRAMEWORK_POA__TRAITS_

  template<>
  struct TAO_CSD_FW_Export Objref_Traits< ::CSD_Framework::POA>
  {
    static ::CSD_Framework::POA_ptr duplicate (
        ::CSD_Framework::POA_ptr p);
    static void release (
        ::CSD_Framework::POA_ptr p);
    static ::CSD_Framework::POA_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::CSD_Framework::POA_ptr p,
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

