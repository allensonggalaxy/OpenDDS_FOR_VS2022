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

#include "WCharSeqA.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Sequence_TypeCode_Static.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_typecode\alias_typecode.cpp:49


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_typecode\typecode_defn.cpp:460


#ifndef _TAO_TYPECODE_CORBA_WCharSeq_GUARD
#define _TAO_TYPECODE_CORBA_WCharSeq_GUARD


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace TypeCode
  {
    namespace
    {
      TAO::TypeCode::Sequence< ::CORBA::TypeCode_ptr const *,
                              TAO::Null_RefCount_Policy>
        CORBA_WCharSeq_0 (
          ::CORBA::tk_sequence,
          &CORBA::_tc_wchar,
          0U);
        
      ::CORBA::TypeCode_ptr const tc_CORBA_WCharSeq_0 =
        &CORBA_WCharSeq_0;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_TYPECODE_CORBA_WCharSeq_GUARD */

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_CORBA_WCharSeq (
    ::CORBA::tk_alias,
    "IDL:omg.org/CORBA/WCharSeq:1.0",
    "WCharSeq",
    &TAO::TypeCode::tc_CORBA_WCharSeq_0);
  

namespace CORBA
{
  ::CORBA::TypeCode_ptr const _tc_WCharSeq =
    &_tao_tc_CORBA_WCharSeq;
}
// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_sequence\any_op_cs.cpp:46



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace CORBA
{
  
  // Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::CORBA::WCharSeq &_tao_elem
    )
  {
    TAO::Any_Dual_Impl_T< ::CORBA::WCharSeq>::insert_copy (
        _tao_any,
        ::CORBA::WCharSeq::_tao_any_destructor,
        ::CORBA::_tc_WCharSeq,
        _tao_elem
      );
}

// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    ::CORBA::WCharSeq *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::CORBA::WCharSeq>::insert (
      _tao_any,
      ::CORBA::WCharSeq::_tao_any_destructor,
      ::CORBA::_tc_WCharSeq,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    ::CORBA::WCharSeq *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const ::CORBA::WCharSeq *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::CORBA::WCharSeq *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::CORBA::WCharSeq>::extract (
        _tao_any,
        ::CORBA::WCharSeq::_tao_any_destructor,
        ::CORBA::_tc_WCharSeq,
        _tao_elem
      );
}
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    const CORBA::WCharSeq &_tao_elem)
{
  TAO::Any_Dual_Impl_T<CORBA::WCharSeq>::insert_copy (
      _tao_any,
      CORBA::WCharSeq::_tao_any_destructor,
      CORBA::_tc_WCharSeq,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    CORBA::WCharSeq *_tao_elem)
{
  TAO::Any_Dual_Impl_T<CORBA::WCharSeq>::insert (
      _tao_any,
      CORBA::WCharSeq::_tao_any_destructor,
      CORBA::_tc_WCharSeq,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    CORBA::WCharSeq *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const CORBA::WCharSeq *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const CORBA::WCharSeq *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<CORBA::WCharSeq>::extract (
        _tao_any,
        CORBA::WCharSeq::_tao_any_destructor,
        CORBA::_tc_WCharSeq,
        _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

TAO_END_VERSIONED_NAMESPACE_DECL


