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

#include "ExceptionHolderA.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/AnyTypeCode/Value_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Value_Field.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_typecode\value_typecode.cpp:65


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_typecode\typecode_defn.cpp:460

static TAO::TypeCode::Value_Field<char const *, ::CORBA::TypeCode_ptr const *> const _tao_fields_Messaging_ExceptionHolder[] =
  {
    { "is_system_exception", &CORBA::_tc_boolean, ::CORBA::PRIVATE_MEMBER },
    { "byte_order", &CORBA::_tc_boolean, ::CORBA::PRIVATE_MEMBER },
    { "marshaled_exception", &CORBA::_tc_OctetSeq, ::CORBA::PRIVATE_MEMBER }
    
  };
static TAO::TypeCode::Value<char const *,
                     ::CORBA::TypeCode_ptr const *,
                     TAO::TypeCode::Value_Field<char const *, ::CORBA::TypeCode_ptr const *> const *,
                     TAO::Null_RefCount_Policy>
  _tao_tc_Messaging_ExceptionHolder (
    ::CORBA::tk_value,
    "IDL:omg.org/Messaging/ExceptionHolder:1.0",
    "ExceptionHolder",
    ::CORBA::VM_NONE,
    &::CORBA::_tc_null,
    _tao_fields_Messaging_ExceptionHolder,
    3);
  

namespace Messaging
{
  ::CORBA::TypeCode_ptr const _tc_ExceptionHolder =
    &_tao_tc_Messaging_ExceptionHolder;
}// TAO extension - the virtual _type method.
::CORBA::TypeCode_ptr Messaging::ExceptionHolder::_tao_type (void) const
{
  return ::Messaging::_tc_ExceptionHolder;
}


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_valuetype\any_op_cs.cpp:47



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<Messaging::ExceptionHolder>::to_value (
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

namespace Messaging
{
  // Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      ExceptionHolder *_tao_elem
    )
  {
    #ifdef TAO_VALUETYPE_COPYING_ANY_INSERTION_USES_COPY_VALUE
      ExceptionHolder *_tao_copy =
        _tao_elem ?
          ExceptionHolder::_downcast (_tao_elem->_copy_value ())
          : 0;
      _tao_any <<= &_tao_copy;
    #else
      ::CORBA::add_ref (_tao_elem);
      _tao_any <<= &_tao_elem;
    #endif
  }

  // Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      ExceptionHolder **_tao_elem
    )
  {
    TAO::Any_Impl_T<ExceptionHolder>::insert (
        _tao_any,
        ExceptionHolder::_tao_any_destructor,
        _tc_ExceptionHolder,
        *_tao_elem
      );
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      ExceptionHolder *&_tao_elem
    )
  {
    return
      TAO::Any_Impl_T<ExceptionHolder>::extract (
          _tao_any,
          ExceptionHolder::_tao_any_destructor,
          _tc_ExceptionHolder,
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
    Messaging::ExceptionHolder *_tao_elem
  )
{
  #ifdef TAO_VALUETYPE_COPYING_ANY_INSERTION_USES_COPY_VALUE
    Messaging::ExceptionHolder *_tao_copy =
      _tao_elem ?
        Messaging::ExceptionHolder::_downcast (_tao_elem->_copy_value ())
        : 0;
    _tao_any <<= &_tao_copy;
  #else
    ::CORBA::add_ref (_tao_elem);
    _tao_any <<= &_tao_elem;
  #endif
}

// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Messaging::ExceptionHolder **_tao_elem
  )
{
  TAO::Any_Impl_T<Messaging::ExceptionHolder>::insert (
      _tao_any,
      Messaging::ExceptionHolder::_tao_any_destructor,
      Messaging::_tc_ExceptionHolder,
      *_tao_elem
    );
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    Messaging::ExceptionHolder *&_tao_elem
  )
{
  return
    TAO::Any_Impl_T<Messaging::ExceptionHolder>::extract (
        _tao_any,
        Messaging::ExceptionHolder::_tao_any_destructor,
        Messaging::_tc_ExceptionHolder,
        _tao_elem
      );
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

TAO_END_VERSIONED_NAMESPACE_DECL


