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

#include "MessagingA.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_typecode\objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Messaging_ReplyHandler (
    ::CORBA::tk_objref,
    "IDL:omg.org/Messaging/ReplyHandler:1.0",
    "ReplyHandler");
  

namespace Messaging
{
  ::CORBA::TypeCode_ptr const _tc_ReplyHandler =
    &_tao_tc_Messaging_ReplyHandler;
}
// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\any_op_cs.cpp:40



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<Messaging::ReplyHandler>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Messaging
{
  

  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      ReplyHandler_ptr _tao_elem)
  {
    ReplyHandler_ptr _tao_objptr =
      ReplyHandler::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      ReplyHandler_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<ReplyHandler>::insert (
        _tao_any,
        ReplyHandler::_tao_any_destructor,
        _tc_ReplyHandler,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      ReplyHandler_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<ReplyHandler>::extract (
          _tao_any,
          ReplyHandler::_tao_any_destructor,
          _tc_ReplyHandler,
          _tao_elem);
  }
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Messaging::ReplyHandler_ptr _tao_elem)
{
  Messaging::ReplyHandler_ptr _tao_objptr =
    Messaging::ReplyHandler::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Messaging::ReplyHandler_ptr *_tao_elem)
{
  TAO::Any_Impl_T<Messaging::ReplyHandler>::insert (
      _tao_any,
      Messaging::ReplyHandler::_tao_any_destructor,
      Messaging::_tc_ReplyHandler,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    Messaging::ReplyHandler_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<Messaging::ReplyHandler>::extract (
        _tao_any,
        Messaging::ReplyHandler::_tao_any_destructor,
        Messaging::_tc_ReplyHandler,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

TAO_END_VERSIONED_NAMESPACE_DECL

