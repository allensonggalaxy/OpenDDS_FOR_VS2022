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


#include "Int8SeqC.h"
#include "tao/CDR.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_sequence\sequence_cs.cpp:107



#if !defined (_CORBA_INT8SEQ_CS_)
#define _CORBA_INT8SEQ_CS_

CORBA::Int8Seq::Int8Seq (void)
{}

CORBA::Int8Seq::Int8Seq (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence< ::CORBA::Int8, CORBA::IDLv4::Int8_tag> (max)
{}

CORBA::Int8Seq::Int8Seq (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    ::CORBA::Int8 * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_value_sequence< ::CORBA::Int8, CORBA::IDLv4::Int8_tag>
    (max, length, buffer, release)
{}

CORBA::Int8Seq::~Int8Seq (void)
{}

void CORBA::Int8Seq::_tao_any_destructor (
    void * _tao_void_pointer)
{
  Int8Seq * _tao_tmp_pointer =
    static_cast<Int8Seq *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */
// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_sequence\cdr_op_cs.cpp:95

#if !defined _TAO_CDR_OP_CORBA_Int8Seq_CPP_
#define _TAO_CDR_OP_CORBA_Int8Seq_CPP_


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CORBA::Int8Seq &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CORBA::Int8Seq &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_CDR_OP_CORBA_Int8Seq_CPP_ */


TAO_END_VERSIONED_NAMESPACE_DECL


