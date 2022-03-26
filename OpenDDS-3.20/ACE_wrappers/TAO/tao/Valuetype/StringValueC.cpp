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
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_codegen.cpp:373


#include "StringValueC.h"
#include "tao/CDR.h"
#include "tao/Valuetype/ValueFactory.h"

#if !defined (__ACE_INLINE__)
#include "StringValueC.inl"
#endif /* !defined INLINE */

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_valuebox\valuebox_cs.cpp:54



void
TAO::Value_Traits<CORBA::StringValue>::add_ref (
    CORBA::StringValue * p
  )
{
  ::CORBA::add_ref (p);
}

void
TAO::Value_Traits<CORBA::StringValue>::remove_ref (
    CORBA::StringValue * p
  )
{
  ::CORBA::remove_ref (p);
}

void
TAO::Value_Traits<CORBA::StringValue>::release (
    CORBA::StringValue * p
  )
{
  ::CORBA::remove_ref (p);
}

CORBA::StringValue *
CORBA::StringValue::_downcast ( ::CORBA::ValueBase *v)
{
  return dynamic_cast< ::CORBA::StringValue * > (v);
}

::CORBA::ValueBase *
CORBA::StringValue::_copy_value (void)
{
  ::CORBA::ValueBase *result = 0;
  ACE_NEW_RETURN (
    result,
    StringValue (*this),
    0);
    
  return result;
}

const char *
CORBA::StringValue::_tao_obv_repository_id (void) const
{
  return this->_tao_obv_static_repository_id ();
}

void
CORBA::StringValue::_tao_obv_truncatable_repo_ids (Repository_Id_List& ids) const
{
  ids.push_back (this->_tao_obv_static_repository_id ());
}

::CORBA::Boolean
CORBA::StringValue::_tao_match_formal_type (ptrdiff_t ) const
{
  return true;
}

void
CORBA::StringValue::_tao_any_destructor (void *_tao_void_pointer)
{
  StringValue *_tao_tmp_pointer =
    static_cast<StringValue *> (_tao_void_pointer);
  ::CORBA::remove_ref (_tao_tmp_pointer);
}

::CORBA::Boolean
CORBA::StringValue::_tao_unmarshal (
    TAO_InputCDR &strm,
    StringValue *&vb_object
  )
{
  ::CORBA::Boolean is_null_object = false;
  ::CORBA::Boolean is_indirected = false;
  TAO_InputCDR indrected_strm ((size_t) 0);
  if ( ::CORBA::ValueBase::_tao_validate_box_type (
        strm, indrected_strm,
        StringValue::_tao_obv_static_repository_id (),
        is_null_object, is_indirected
      ) == false)
    {
      return false;
    }
  
  vb_object = 0;
  if (is_null_object)
    {
      return true;
    }
  
  if (is_indirected)
    {
      return CORBA::StringValue::_tao_unmarshal (
             indrected_strm, vb_object);
    }
  
  ACE_NEW_RETURN (
    vb_object,
    StringValue,
    false);
  
  return (strm >> vb_object->_pd_value);
}

::CORBA::Boolean
CORBA::StringValue::_tao_unmarshal_v (TAO_InputCDR &)
{
  return true;
}


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_valuebox\valuebox_cs.cpp:638

CORBA::StringValue::~StringValue (void)
{
}

::CORBA::Boolean
CORBA::StringValue::_tao_marshal_v (TAO_OutputCDR & strm) const
{
  return (strm << this->_pd_value);
}


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_valuebox\valuebox_cs.cpp:54



void
TAO::Value_Traits<CORBA::WStringValue>::add_ref (
    CORBA::WStringValue * p
  )
{
  ::CORBA::add_ref (p);
}

void
TAO::Value_Traits<CORBA::WStringValue>::remove_ref (
    CORBA::WStringValue * p
  )
{
  ::CORBA::remove_ref (p);
}

void
TAO::Value_Traits<CORBA::WStringValue>::release (
    CORBA::WStringValue * p
  )
{
  ::CORBA::remove_ref (p);
}

CORBA::WStringValue *
CORBA::WStringValue::_downcast ( ::CORBA::ValueBase *v)
{
  return dynamic_cast< ::CORBA::WStringValue * > (v);
}

::CORBA::ValueBase *
CORBA::WStringValue::_copy_value (void)
{
  ::CORBA::ValueBase *result = 0;
  ACE_NEW_RETURN (
    result,
    WStringValue (*this),
    0);
    
  return result;
}

const char *
CORBA::WStringValue::_tao_obv_repository_id (void) const
{
  return this->_tao_obv_static_repository_id ();
}

void
CORBA::WStringValue::_tao_obv_truncatable_repo_ids (Repository_Id_List& ids) const
{
  ids.push_back (this->_tao_obv_static_repository_id ());
}

::CORBA::Boolean
CORBA::WStringValue::_tao_match_formal_type (ptrdiff_t ) const
{
  return true;
}

void
CORBA::WStringValue::_tao_any_destructor (void *_tao_void_pointer)
{
  WStringValue *_tao_tmp_pointer =
    static_cast<WStringValue *> (_tao_void_pointer);
  ::CORBA::remove_ref (_tao_tmp_pointer);
}

::CORBA::Boolean
CORBA::WStringValue::_tao_unmarshal (
    TAO_InputCDR &strm,
    WStringValue *&vb_object
  )
{
  ::CORBA::Boolean is_null_object = false;
  ::CORBA::Boolean is_indirected = false;
  TAO_InputCDR indrected_strm ((size_t) 0);
  if ( ::CORBA::ValueBase::_tao_validate_box_type (
        strm, indrected_strm,
        WStringValue::_tao_obv_static_repository_id (),
        is_null_object, is_indirected
      ) == false)
    {
      return false;
    }
  
  vb_object = 0;
  if (is_null_object)
    {
      return true;
    }
  
  if (is_indirected)
    {
      return CORBA::WStringValue::_tao_unmarshal (
             indrected_strm, vb_object);
    }
  
  ACE_NEW_RETURN (
    vb_object,
    WStringValue,
    false);
  
  return (strm >> vb_object->_pd_value);
}

::CORBA::Boolean
CORBA::WStringValue::_tao_unmarshal_v (TAO_InputCDR &)
{
  return true;
}


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_valuebox\valuebox_cs.cpp:638

CORBA::WStringValue::~WStringValue (void)
{
}

::CORBA::Boolean
CORBA::WStringValue::_tao_marshal_v (TAO_OutputCDR & strm) const
{
  return (strm << this->_pd_value);
}


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_valuebox\cdr_op_cs.cpp:43



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean
operator<< (
    TAO_OutputCDR &strm,
    const CORBA::StringValue *_tao_valuebox
  )
{
  return
    ::CORBA::ValueBase::_tao_marshal (
        strm,
        _tao_valuebox,
        reinterpret_cast<ptrdiff_t> (&CORBA::StringValue::_downcast)
      );
}

::CORBA::Boolean
operator>> (
    TAO_InputCDR &strm,
    CORBA::StringValue *&_tao_valuebox
  )
{
  return CORBA::StringValue::_tao_unmarshal (strm, _tao_valuebox);
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_valuebox\cdr_op_cs.cpp:43



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean
operator<< (
    TAO_OutputCDR &strm,
    const CORBA::WStringValue *_tao_valuebox
  )
{
  return
    ::CORBA::ValueBase::_tao_marshal (
        strm,
        _tao_valuebox,
        reinterpret_cast<ptrdiff_t> (&CORBA::WStringValue::_downcast)
      );
}

::CORBA::Boolean
operator>> (
    TAO_InputCDR &strm,
    CORBA::WStringValue *&_tao_valuebox
  )
{
  return CORBA::WStringValue::_tao_unmarshal (strm, _tao_valuebox);
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL





TAO_END_VERSIONED_NAMESPACE_DECL


