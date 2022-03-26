/* Generated by ..\bin\opendds_idl version 3.20.0 (ACE version 6.2a_p23) running on input file CorbaSeq\UInt8Seq.idl */
#include "DCPS/DdsDcps_pch.h"
#include "UInt8SeqTypeSupportImpl.h"

#ifndef OPENDDS_SAFETY_PROFILE
  #include "dds/CorbaSeq/UInt8SeqTypeSupportImpl.h"
#endif


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: OpenDDS */


/* End MODULE: OpenDDS */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: UInt8Seq */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<> const XTypes::TypeIdentifier& getMinimalTypeIdentifier<CORBA_UInt8Seq_xtag>()
{
  static XTypes::TypeIdentifier ti;
  ACE_GUARD_RETURN(ACE_Thread_Mutex, guard, TheServiceParticipant->get_static_xtypes_lock(), ti);
  if (ti.kind() == XTypes::TK_NONE) {
    ti = XTypes::TypeIdentifier(XTypes::EK_MINIMAL, XTypes::EquivalenceHashWrapper(173, 85, 24, 159, 225, 165, 15, 96, 106, 66, 9, 196, 102, 219));
  }
  return ti;
}

static const XTypes::TypeMap& get_minimal_type_map();
template<> const XTypes::TypeMap& getMinimalTypeMap<CORBA_UInt8Seq_xtag>()
{
  return get_minimal_type_map();
}

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void serialized_size(const Encoding& encoding, size_t& size, const  ::CORBA::UInt8Seq& seq)
{
  ACE_UNUSED_ARG(encoding);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(seq);
  primitive_serialized_size_ulong(encoding, size);
  if (seq.length() == 0) {
    return;
  }
  primitive_serialized_size_uint8(encoding, size, seq.length());
}

bool operator<<(Serializer& strm, const  ::CORBA::UInt8Seq& seq)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(seq);
  const Encoding& encoding = strm.encoding();
  ACE_UNUSED_ARG(encoding);
  const CORBA::ULong length = seq.length();
  if (!(strm << length)) {
    return false;
  }
  if (length == 0) {
    return true;
  }
  return strm.write_uint8_array(seq.get_buffer(), length);
}

bool operator>>(Serializer& strm,  ::CORBA::UInt8Seq& seq)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(seq);
  const Encoding& encoding = strm.encoding();
  ACE_UNUSED_ARG(encoding);
  CORBA::ULong length;
  if (!(strm >> length)) {
    return false;
  }
  if (length > strm.length()) {
    if (DCPS_debug_level >= 8) {
      ACE_DEBUG((LM_DEBUG, ACE_TEXT("(%P|%t) Invalid sequence length (%u)\n"), length));
    }
    return false;
  }
  CORBA::ULong new_length = length;
  seq.length(new_length);
  if (length == 0) {
    return true;
  }
  return strm.read_uint8_array(seq.get_buffer(), length);
  return true;
}

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

bool gen_skip_over(Serializer& ser,  ::CORBA::UInt8Seq*)
{
  ACE_UNUSED_ARG(ser);
  const Encoding& encoding = ser.encoding();
  ACE_UNUSED_ARG(encoding);
  ACE_CDR::ULong length;
  if (!(ser >> length)) return false;
  return ser.skip(length, 1);
}

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: UInt8Seq */

/* End MODULE: CORBA */
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

namespace {
XTypes::TypeObject minimal_to0()
{
  return XTypes::TypeObject(XTypes::MinimalTypeObject(XTypes::MinimalAliasType(0, XTypes::MinimalAliasHeader(), XTypes::MinimalAliasBody(XTypes::CommonAliasBody(0, XTypes::TypeIdentifier(XTypes::TI_PLAIN_SEQUENCE_SMALL, XTypes::PlainSequenceSElemDefn(XTypes::PlainCollectionHeader(XTypes::EK_BOTH, XTypes::TRY_CONSTRUCT1), 0, XTypes::TypeIdentifier(XTypes::TK_UINT8))))))));
}

XTypes::TypeMap get_minimal_type_map_private()
{
  XTypes::TypeMap tm;
  tm[XTypes::TypeIdentifier(XTypes::EK_MINIMAL, XTypes::EquivalenceHashWrapper(173, 85, 24, 159, 225, 165, 15, 96, 106, 66, 9, 196, 102, 219))] = minimal_to0();
  return tm;
}

}

const XTypes::TypeMap& get_minimal_type_map()
{
  static XTypes::TypeMap tm;
  ACE_GUARD_RETURN(ACE_Thread_Mutex, guard, TheServiceParticipant->get_static_xtypes_lock(), tm);
  if (tm.empty()) {
    tm = get_minimal_type_map_private();
  }
  return tm;
}

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

