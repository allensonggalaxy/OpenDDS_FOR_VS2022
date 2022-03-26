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

#include "StringValueA.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/String_TypeCode_Static.h"
#include "tao/AnyTypeCode/Value_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Value_Field.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_typecode\alias_typecode.cpp:49

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_CORBA_StringValue (
    ::CORBA::tk_value_box,
    "IDL:omg.org/CORBA/StringValue:1.0",
    "StringValue",
    &CORBA::_tc_string);
  

namespace CORBA
{
  ::CORBA::TypeCode_ptr const _tc_StringValue =
    &_tao_tc_CORBA_StringValue;
}// TAO extension - the virtual _type method.
::CORBA::TypeCode_ptr CORBA::StringValue::_tao_type (void) const
{
  return ::CORBA::_tc_StringValue;
}


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_typecode\alias_typecode.cpp:49

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_CORBA_WStringValue (
    ::CORBA::tk_value_box,
    "IDL:omg.org/CORBA/WStringValue:1.0",
    "WStringValue",
    &CORBA::_tc_wstring);
  

namespace CORBA
{
  ::CORBA::TypeCode_ptr const _tc_WStringValue =
    &_tao_tc_CORBA_WStringValue;
}// TAO extension - the virtual _type method.
::CORBA::TypeCode_ptr CORBA::WStringValue::_tao_type (void) const
{
  return ::CORBA::_tc_WStringValue;
}


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_valuebox\any_op_cs.cpp:48



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<CORBA::StringValue>::to_value (
      ::CORBA::ValueBase *&_tao_elem
    ) const
  {
    ::CORBA::add_ref (this->value_);
    _tao_elem = this->value_;
    return true;
  }
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace CORBA
{
  // Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      StringValue *_tao_elem)
  {
    ::CORBA::add_ref (_tao_elem);
    _tao_any <<= &_tao_elem;
  }

  // Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      StringValue **_tao_elem)
  {
    TAO::Any_Impl_T<StringValue>::insert (
        _tao_any,
        StringValue::_tao_any_destructor,
        _tc_StringValue,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      StringValue *&_tao_elem
    )
  {
    return
      TAO::Any_Impl_T<StringValue>::extract (
          _tao_any,
          StringValue::_tao_any_destructor,
          _tc_StringValue,
          _tao_elem
        );
  }

  
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    CORBA::StringValue *_tao_elem
  )
{
  ::CORBA::add_ref (_tao_elem);
  _tao_any <<= &_tao_elem;
}

// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    CORBA::StringValue **_tao_elem
  )
{
  TAO::Any_Impl_T<CORBA::StringValue>::insert (
      _tao_any,
      CORBA::StringValue::_tao_any_destructor,
      CORBA::_tc_StringValue,
      *_tao_elem
    );
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    CORBA::StringValue *&_tao_elem
  )
{
  return
    TAO::Any_Impl_T<CORBA::StringValue>::extract (
        _tao_any,
        CORBA::StringValue::_tao_any_destructor,
        CORBA::_tc_StringValue,
        _tao_elem
      );
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif
// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_valuebox\any_op_cs.cpp:48



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<CORBA::WStringValue>::to_value (
      ::CORBA::ValueBase *&_tao_elem
    ) const
  {
    ::CORBA::add_ref (this->value_);
    _tao_elem = this->value_;
    return true;
  }
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace CORBA
{
  // Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      WStringValue *_tao_elem)
  {
    ::CORBA::add_ref (_tao_elem);
    _tao_any <<= &_tao_elem;
  }

  // Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      WStringValue **_tao_elem)
  {
    TAO::Any_Impl_T<WStringValue>::insert (
        _tao_any,
        WStringValue::_tao_any_destructor,
        _tc_WStringValue,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      WStringValue *&_tao_elem
    )
  {
    return
      TAO::Any_Impl_T<WStringValue>::extract (
          _tao_any,
          WStringValue::_tao_any_destructor,
          _tc_WStringValue,
          _tao_elem
        );
  }

  
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    CORBA::WStringValue *_tao_elem
  )
{
  ::CORBA::add_ref (_tao_elem);
  _tao_any <<= &_tao_elem;
}

// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    CORBA::WStringValue **_tao_elem
  )
{
  TAO::Any_Impl_T<CORBA::WStringValue>::insert (
      _tao_any,
      CORBA::WStringValue::_tao_any_destructor,
      CORBA::_tc_WStringValue,
      *_tao_elem
    );
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    CORBA::WStringValue *&_tao_elem
  )
{
  return
    TAO::Any_Impl_T<CORBA::WStringValue>::extract (
        _tao_any,
        CORBA::WStringValue::_tao_any_destructor,
        CORBA::_tc_WStringValue,
        _tao_elem
      );
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

TAO_END_VERSIONED_NAMESPACE_DECL


