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


#include "LongLongSeqC.h"
#include "tao/CDR.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_sequence\sequence_cs.cpp:107



#if !defined (_CORBA_LONGLONGSEQ_CS_)
#define _CORBA_LONGLONGSEQ_CS_

CORBA::LongLongSeq::LongLongSeq (void)
{}

CORBA::LongLongSeq::LongLongSeq (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence< ::CORBA::LongLong> (max)
{}

CORBA::LongLongSeq::LongLongSeq (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    ::CORBA::LongLong * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_value_sequence< ::CORBA::LongLong>
    (max, length, buffer, release)
{}

CORBA::LongLongSeq::~LongLongSeq (void)
{}

void CORBA::LongLongSeq::_tao_any_destructor (
    void * _tao_void_pointer)
{
  LongLongSeq * _tao_tmp_pointer =
    static_cast<LongLongSeq *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */
// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_sequence\cdr_op_cs.cpp:95

#if !defined _TAO_CDR_OP_CORBA_LongLongSeq_CPP_
#define _TAO_CDR_OP_CORBA_LongLongSeq_CPP_


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CORBA::LongLongSeq &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CORBA::LongLongSeq &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_CDR_OP_CORBA_LongLongSeq_CPP_ */


TAO_END_VERSIONED_NAMESPACE_DECL


