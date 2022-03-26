/* Generated by ..\bin\opendds_idl version 3.20.0 (ACE version 6.2a_p23) running on input file CorbaSeq\WStringSeq.idl */
#include "DCPS/DdsDcps_pch.h"
#include "WStringSeqTypeSupportImpl.h"



/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: OpenDDS */


/* End MODULE: OpenDDS */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: WStringSeq */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<> const XTypes::TypeIdentifier& getMinimalTypeIdentifier<CORBA_WStringSeq_xtag>()
{
  static XTypes::TypeIdentifier ti;
  ACE_GUARD_RETURN(ACE_Thread_Mutex, guard, TheServiceParticipant->get_static_xtypes_lock(), ti);
  if (ti.kind() == XTypes::TK_NONE) {
    ti = XTypes::TypeIdentifier(XTypes::EK_MINIMAL, XTypes::EquivalenceHashWrapper(35, 44, 1, 252, 233, 242, 60, 71, 91, 143, 74, 253, 177, 34));
  }
  return ti;
}

static const XTypes::TypeMap& get_minimal_type_map();
template<> const XTypes::TypeMap& getMinimalTypeMap<CORBA_WStringSeq_xtag>()
{
  return get_minimal_type_map();
}

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void serialized_size(const Encoding& encoding, size_t& size, const  ::CORBA::WStringSeq& seq)
{
  ACE_UNUSED_ARG(encoding);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(seq);
  if (encoding.xcdr_version() == Encoding::XCDR_VERSION_2) {
    serialized_size_delimiter(encoding, size);
  }
  primitive_serialized_size_ulong(encoding, size);
  if (seq.length() == 0) {
    return;
  }
  for (CORBA::ULong i = 0; i < seq.length(); ++i) {
    primitive_serialized_size_ulong(encoding, size);
    if (seq[i]) {
      size += ACE_OS::strlen(seq[i]) * char16_cdr_size;
    }
  }
}

bool operator<<(Serializer& strm, const  ::CORBA::WStringSeq& seq)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(seq);
  const Encoding& encoding = strm.encoding();
  ACE_UNUSED_ARG(encoding);
  size_t total_size = 0;
  if (encoding.xcdr_version() == Encoding::XCDR_VERSION_2) {
    serialized_size(encoding, total_size, seq);
    if (!strm.write_delimiter(total_size)) {
      return false;
    }
  }
  const CORBA::ULong length = seq.length();
  if (!(strm << length)) {
    return false;
  }
  if (length == 0) {
    return true;
  }
  for (CORBA::ULong i = 0; i < length; ++i) {
    if (!(strm << seq[i])) {
      return false;
    }
  }
  return true;
}

bool operator>>(Serializer& strm,  ::CORBA::WStringSeq& seq)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(seq);
  const Encoding& encoding = strm.encoding();
  ACE_UNUSED_ARG(encoding);
  size_t total_size = 0;
  if (encoding.xcdr_version() == Encoding::XCDR_VERSION_2) {
    if (!strm.read_delimiter(total_size)) {
      return false;
    }
  }
  const size_t end_of_seq = strm.rpos() + total_size;
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
  for (CORBA::ULong i = 0; i < new_length; ++i) {
     if (!(strm >> seq.get_buffer()[i])) {
      strm.set_construction_status(Serializer::ElementConstructionFailure);
      if (encoding.xcdr_version() == Encoding::XCDR_VERSION_2) {
        strm.skip(end_of_seq - strm.rpos());
      } else {
         ::CORBA::WStringSeq tempvar;
        tempvar.length(1);
        for (CORBA::ULong j = i + 1; j < length; ++j) {
          strm >> tempvar.get_buffer()[0];
;
        }
      }
      return false;
    }
  }
  if (new_length != length) {
    if (encoding.xcdr_version() == Encoding::XCDR_VERSION_2) {
      strm.skip(end_of_seq - strm.rpos());
    } else {
       ::CORBA::WStringSeq tempvar;
      tempvar.length(1);
      for (CORBA::ULong j = new_length + 1; j < length; ++j) {
        strm >> tempvar.get_buffer()[0];
;
      }
    }
    strm.set_construction_status(Serializer::BoundConstructionFailure);
    return false;
  }
  return true;
}

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

bool gen_skip_over(Serializer& ser,  ::CORBA::WStringSeq*)
{
  ACE_UNUSED_ARG(ser);
  const Encoding& encoding = ser.encoding();
  ACE_UNUSED_ARG(encoding);
  size_t total_size = 0;
  if (encoding.xcdr_version() == Encoding::XCDR_VERSION_2) {
    if (!ser.read_delimiter(total_size)) {
      return false;
    }
  }
  ACE_CDR::ULong length;
  if (!(ser >> length)) return false;
  for (ACE_CDR::ULong i = 0; i < length; ++i) {
    ACE_CDR::ULong strlength;
    if (!(ser >> strlength)) return false;
    if (!ser.skip(strlength)) return false;
  }
  return true;
}

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: WStringSeq */

/* End MODULE: CORBA */
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

namespace {
XTypes::TypeObject minimal_to0()
{
  return XTypes::TypeObject(XTypes::MinimalTypeObject(XTypes::MinimalAliasType(0, XTypes::MinimalAliasHeader(), XTypes::MinimalAliasBody(XTypes::CommonAliasBody(0, XTypes::TypeIdentifier(XTypes::TI_PLAIN_SEQUENCE_SMALL, XTypes::PlainSequenceSElemDefn(XTypes::PlainCollectionHeader(XTypes::EK_BOTH, XTypes::TRY_CONSTRUCT1), 0, XTypes::TypeIdentifier(XTypes::TI_STRING16_SMALL, XTypes::StringSTypeDefn(0)))))))));
}

XTypes::TypeMap get_minimal_type_map_private()
{
  XTypes::TypeMap tm;
  tm[XTypes::TypeIdentifier(XTypes::EK_MINIMAL, XTypes::EquivalenceHashWrapper(35, 44, 1, 252, 233, 242, 60, 71, 91, 143, 74, 253, 177, 34))] = minimal_to0();
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

