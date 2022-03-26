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

#include "ImplicitActivationPolicyA.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Enum_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "tao/AnyTypeCode/Any_Basic_Impl_T.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_typecode\enum_typecode.cpp:29

static char const * const _tao_enumerators_PortableServer_ImplicitActivationPolicyValue[] =
  {
    "IMPLICIT_ACTIVATION",
    "NO_IMPLICIT_ACTIVATION"
    
  };

static TAO::TypeCode::Enum<char const *,
                           char const * const *,
                           TAO::Null_RefCount_Policy>
  _tao_tc_PortableServer_ImplicitActivationPolicyValue (
    "IDL:omg.org/PortableServer/ImplicitActivationPolicyValue:2.3",
    "ImplicitActivationPolicyValue",
    _tao_enumerators_PortableServer_ImplicitActivationPolicyValue,
    2);
  

namespace PortableServer
{
  ::CORBA::TypeCode_ptr const _tc_ImplicitActivationPolicyValue =
    &_tao_tc_PortableServer_ImplicitActivationPolicyValue;
}
// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_typecode\objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_PortableServer_ImplicitActivationPolicy (
    ::CORBA::tk_local_interface,
    "IDL:omg.org/PortableServer/ImplicitActivationPolicy:2.3",
    "ImplicitActivationPolicy");
  

namespace PortableServer
{
  ::CORBA::TypeCode_ptr const _tc_ImplicitActivationPolicy =
    &_tao_tc_PortableServer_ImplicitActivationPolicy;
}
// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_enum\any_op_cs.cpp:37



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace PortableServer
{
  void operator<<= (
      ::CORBA::Any &_tao_any,
      ::PortableServer::ImplicitActivationPolicyValue _tao_elem
    )
  {
    TAO::Any_Basic_Impl_T< ::PortableServer::ImplicitActivationPolicyValue>::insert (
        _tao_any,
        ::PortableServer::_tc_ImplicitActivationPolicyValue,
        _tao_elem
      );
  }

  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      ::PortableServer::ImplicitActivationPolicyValue &_tao_elem
    )
  {
    return
      TAO::Any_Basic_Impl_T< ::PortableServer::ImplicitActivationPolicyValue>::extract (
          _tao_any,
          ::PortableServer::_tc_ImplicitActivationPolicyValue,
          _tao_elem 
        );
  }
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

void operator<<= (
    ::CORBA::Any &_tao_any,
    PortableServer::ImplicitActivationPolicyValue _tao_elem
  )
{
  TAO::Any_Basic_Impl_T<PortableServer::ImplicitActivationPolicyValue>::insert (
      _tao_any,
      PortableServer::_tc_ImplicitActivationPolicyValue,
      _tao_elem
    );
}

::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    PortableServer::ImplicitActivationPolicyValue &_tao_elem
  )
{
  return
    TAO::Any_Basic_Impl_T<PortableServer::ImplicitActivationPolicyValue>::extract (
        _tao_any,
        PortableServer::_tc_ImplicitActivationPolicyValue,
        _tao_elem 
      );
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

TAO_END_VERSIONED_NAMESPACE_DECL

