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

#include "DCPS/DdsDcps_pch.h"
#include "DdsDcpsInfoUtilsC.h"
#include "tao/CDR.h"

#if !defined (__ACE_INLINE__)
#include "DdsDcpsInfoUtilsC.inl"
#endif /* !defined INLINE */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_sequence\sequence_cs.cpp:107



#if !defined (_OPENDDS_DCPS_TRANSPORTLOCATORSEQ_CS_)
#define _OPENDDS_DCPS_TRANSPORTLOCATORSEQ_CS_

OpenDDS::DCPS::TransportLocatorSeq::TransportLocatorSeq (void)
{}

OpenDDS::DCPS::TransportLocatorSeq::TransportLocatorSeq (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence< TransportLocator> (max)
{}

OpenDDS::DCPS::TransportLocatorSeq::TransportLocatorSeq (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    OpenDDS::DCPS::TransportLocator * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_value_sequence< TransportLocator>
    (max, length, buffer, release)
{}

OpenDDS::DCPS::TransportLocatorSeq::~TransportLocatorSeq (void)
{}

#endif /* end #if !defined */


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_sequence\sequence_cs.cpp:107



#if !defined (_OPENDDS_DCPS_WRITERIDSEQ_CS_)
#define _OPENDDS_DCPS_WRITERIDSEQ_CS_

OpenDDS::DCPS::WriterIdSeq::WriterIdSeq (void)
{}

OpenDDS::DCPS::WriterIdSeq::WriterIdSeq (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence< RepoId> (max)
{}

OpenDDS::DCPS::WriterIdSeq::WriterIdSeq (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    OpenDDS::DCPS::RepoId * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_value_sequence< RepoId>
    (max, length, buffer, release)
{}

OpenDDS::DCPS::WriterIdSeq::~WriterIdSeq (void)
{}

#endif /* end #if !defined */


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_sequence\sequence_cs.cpp:107



#if !defined (_OPENDDS_DCPS_READERIDSEQ_CS_)
#define _OPENDDS_DCPS_READERIDSEQ_CS_

OpenDDS::DCPS::ReaderIdSeq::ReaderIdSeq (void)
{}

OpenDDS::DCPS::ReaderIdSeq::ReaderIdSeq (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence< RepoId> (max)
{}

OpenDDS::DCPS::ReaderIdSeq::ReaderIdSeq (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    OpenDDS::DCPS::RepoId * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_value_sequence< RepoId>
    (max, length, buffer, release)
{}

OpenDDS::DCPS::ReaderIdSeq::~ReaderIdSeq (void)
{}

#endif /* end #if !defined */
// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_structure\cdr_op_cs.cpp:51



OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OpenDDS::DCPS::MonotonicTime_t &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.sec) &&
    (strm << _tao_aggregate.nanosec);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OpenDDS::DCPS::MonotonicTime_t &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.sec) &&
    (strm >> _tao_aggregate.nanosec);
}

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_structure\cdr_op_cs.cpp:51



OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OpenDDS::DCPS::TransportLocator &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.transport_type.in ()) &&
    (strm << _tao_aggregate.data);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OpenDDS::DCPS::TransportLocator &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.transport_type.out ()) &&
    (strm >> _tao_aggregate.data);
}

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_sequence\cdr_op_cs.cpp:95

#if !defined _TAO_CDR_OP_OpenDDS_DCPS_TransportLocatorSeq_CPP_
#define _TAO_CDR_OP_OpenDDS_DCPS_TransportLocatorSeq_CPP_


OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OpenDDS::DCPS::TransportLocatorSeq &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OpenDDS::DCPS::TransportLocatorSeq &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_CDR_OP_OpenDDS_DCPS_TransportLocatorSeq_CPP_ */
// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_structure\cdr_op_cs.cpp:51



OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OpenDDS::DCPS::IncompatibleQosStatus &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.total_count) &&
    (strm << _tao_aggregate.count_since_last_send) &&
    (strm << _tao_aggregate.last_policy_id) &&
    (strm << _tao_aggregate.policies);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OpenDDS::DCPS::IncompatibleQosStatus &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.total_count) &&
    (strm >> _tao_aggregate.count_since_last_send) &&
    (strm >> _tao_aggregate.last_policy_id) &&
    (strm >> _tao_aggregate.policies);
}

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_structure\cdr_op_cs.cpp:51



OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OpenDDS::DCPS::AddDomainStatus &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.id) &&
    (strm << ::ACE_OutputCDR::from_boolean (_tao_aggregate.federated));
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OpenDDS::DCPS::AddDomainStatus &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.id) &&
    (strm >> ::ACE_InputCDR::to_boolean (_tao_aggregate.federated));
}

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_enum\cdr_op_cs.cpp:36



OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (TAO_OutputCDR &strm, OpenDDS::DCPS::TopicStatus _tao_enumerator)
{
  return strm << static_cast< ::CORBA::ULong> (_tao_enumerator);
}

::CORBA::Boolean operator>> (TAO_InputCDR &strm, OpenDDS::DCPS::TopicStatus & _tao_enumerator)
{
  ::CORBA::ULong _tao_temp = 0;
  ::CORBA::Boolean const _tao_success = strm >> _tao_temp;
  
  if (_tao_success)
    {
      _tao_enumerator = static_cast<OpenDDS::DCPS::TopicStatus> (_tao_temp);
    }
  
  return _tao_success;
}

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_structure\cdr_op_cs.cpp:51



OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OpenDDS::DCPS::WriterAssociation &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.writerTransInfo) &&
    (strm << _tao_aggregate.writerDiscInfo) &&
    (strm << _tao_aggregate.transportContext) &&
    (strm << _tao_aggregate.writerId) &&
    (strm << _tao_aggregate.pubQos) &&
    (strm << _tao_aggregate.writerQos) &&
    (strm << _tao_aggregate.serializedTypeInfo) &&
    (strm << _tao_aggregate.participantDiscoveredAt);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OpenDDS::DCPS::WriterAssociation &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.writerTransInfo) &&
    (strm >> _tao_aggregate.writerDiscInfo) &&
    (strm >> _tao_aggregate.transportContext) &&
    (strm >> _tao_aggregate.writerId) &&
    (strm >> _tao_aggregate.pubQos) &&
    (strm >> _tao_aggregate.writerQos) &&
    (strm >> _tao_aggregate.serializedTypeInfo) &&
    (strm >> _tao_aggregate.participantDiscoveredAt);
}

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_structure\cdr_op_cs.cpp:51



OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OpenDDS::DCPS::ReaderAssociation &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.readerTransInfo) &&
    (strm << _tao_aggregate.readerDiscInfo) &&
    (strm << _tao_aggregate.transportContext) &&
    (strm << _tao_aggregate.readerId) &&
    (strm << _tao_aggregate.subQos) &&
    (strm << _tao_aggregate.readerQos) &&
    (strm << _tao_aggregate.filterClassName.in ()) &&
    (strm << _tao_aggregate.filterExpression.in ()) &&
    (strm << _tao_aggregate.exprParams) &&
    (strm << _tao_aggregate.serializedTypeInfo) &&
    (strm << _tao_aggregate.participantDiscoveredAt);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OpenDDS::DCPS::ReaderAssociation &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.readerTransInfo) &&
    (strm >> _tao_aggregate.readerDiscInfo) &&
    (strm >> _tao_aggregate.transportContext) &&
    (strm >> _tao_aggregate.readerId) &&
    (strm >> _tao_aggregate.subQos) &&
    (strm >> _tao_aggregate.readerQos) &&
    (strm >> _tao_aggregate.filterClassName.out ()) &&
    (strm >> _tao_aggregate.filterExpression.out ()) &&
    (strm >> _tao_aggregate.exprParams) &&
    (strm >> _tao_aggregate.serializedTypeInfo) &&
    (strm >> _tao_aggregate.participantDiscoveredAt);
}

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_sequence\cdr_op_cs.cpp:95

#if !defined _TAO_CDR_OP_OpenDDS_DCPS_WriterIdSeq_CPP_
#define _TAO_CDR_OP_OpenDDS_DCPS_WriterIdSeq_CPP_


OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OpenDDS::DCPS::WriterIdSeq &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OpenDDS::DCPS::WriterIdSeq &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_CDR_OP_OpenDDS_DCPS_WriterIdSeq_CPP_ */
// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_sequence\cdr_op_cs.cpp:95

#if !defined _TAO_CDR_OP_OpenDDS_DCPS_ReaderIdSeq_CPP_
#define _TAO_CDR_OP_OpenDDS_DCPS_ReaderIdSeq_CPP_


OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OpenDDS::DCPS::ReaderIdSeq &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OpenDDS::DCPS::ReaderIdSeq &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_CDR_OP_OpenDDS_DCPS_ReaderIdSeq_CPP_ */
// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_structure\cdr_op_cs.cpp:51



OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OpenDDS::DCPS::ContentFilterProperty_t &_tao_aggregate)
{
  return
    (strm << ACE_OutputCDR::from_string (_tao_aggregate.contentFilteredTopicName.in (), 256)) &&
    (strm << ACE_OutputCDR::from_string (_tao_aggregate.relatedTopicName.in (), 256)) &&
    (strm << ACE_OutputCDR::from_string (_tao_aggregate.filterClassName.in (), 256)) &&
    (strm << _tao_aggregate.filterExpression.in ()) &&
    (strm << _tao_aggregate.expressionParameters);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OpenDDS::DCPS::ContentFilterProperty_t &_tao_aggregate)
{
  return
    (strm >> ACE_InputCDR::to_string (_tao_aggregate.contentFilteredTopicName.out (), 256)) &&
    (strm >> ACE_InputCDR::to_string (_tao_aggregate.relatedTopicName.out (), 256)) &&
    (strm >> ACE_InputCDR::to_string (_tao_aggregate.filterClassName.out (), 256)) &&
    (strm >> _tao_aggregate.filterExpression.out ()) &&
    (strm >> _tao_aggregate.expressionParameters);
}

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_structure\cdr_op_cs.cpp:51



OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OpenDDS::DCPS::ReaderProxy_t &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.remoteReaderGuid) &&
    (strm << ::ACE_OutputCDR::from_boolean (_tao_aggregate.expectsInlineQos)) &&
    (strm << _tao_aggregate.allLocators) &&
    (strm << _tao_aggregate.associatedWriters);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OpenDDS::DCPS::ReaderProxy_t &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.remoteReaderGuid) &&
    (strm >> ::ACE_InputCDR::to_boolean (_tao_aggregate.expectsInlineQos)) &&
    (strm >> _tao_aggregate.allLocators) &&
    (strm >> _tao_aggregate.associatedWriters);
}

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_structure\cdr_op_cs.cpp:51



OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OpenDDS::DCPS::DiscoveredReaderData &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.ddsSubscriptionData) &&
    (strm << _tao_aggregate.readerProxy) &&
    (strm << _tao_aggregate.contentFilterProperty);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OpenDDS::DCPS::DiscoveredReaderData &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.ddsSubscriptionData) &&
    (strm >> _tao_aggregate.readerProxy) &&
    (strm >> _tao_aggregate.contentFilterProperty);
}

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_structure\cdr_op_cs.cpp:51



OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OpenDDS::DCPS::WriterProxy_t &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.remoteWriterGuid) &&
    (strm << _tao_aggregate.allLocators);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OpenDDS::DCPS::WriterProxy_t &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.remoteWriterGuid) &&
    (strm >> _tao_aggregate.allLocators);
}

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_structure\cdr_op_cs.cpp:51



OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const OpenDDS::DCPS::DiscoveredWriterData &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.ddsPublicationData) &&
    (strm << _tao_aggregate.writerProxy);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    OpenDDS::DCPS::DiscoveredWriterData &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.ddsPublicationData) &&
    (strm >> _tao_aggregate.writerProxy);
}

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL





OPENDDS_END_VERSIONED_NAMESPACE_DECL


