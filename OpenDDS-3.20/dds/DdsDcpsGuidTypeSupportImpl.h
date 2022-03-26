/* -*- C++ -*- */
/* Generated by ..\bin\opendds_idl version 3.20.0 (ACE version 6.2a_p23) running on input file DdsDcpsGuid.idl */
#ifndef OPENDDS_IDL_GENERATED_DDSDCPSGUIDTYPESUPPORTIMPL_H_7NSHFA
#define OPENDDS_IDL_GENERATED_DDSDCPSGUIDTYPESUPPORTIMPL_H_7NSHFA

#include <dds/Version.h>
#if !OPENDDS_VERSION_EXACTLY(3, 20, 0)
#  error "This file should be regenerated with opendds_idl"
#endif
#include <dds/DCPS/Definitions.h>

#include <dds/DdsDcpsC.h>

#include "DdsDcpsGuidC.h"
#include "dds/DCPS/Serializer.h"
#include "dds/DCPS/Service_Participant.h"
#include "dds/DCPS/Util.h"
#include "dds/DCPS/ValueReader.h"
#include "dds/DCPS/ValueWriter.h"
#include "dds/DCPS/XTypes/TypeObject.h"
#include "dds/DCPS/dcps_export.h"


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: OpenDDS */


/* End MODULE: OpenDDS */


/* Begin MODULE: OpenDDS */



/* Begin MODULE: DCPS */



/* Begin TYPEDEF: GuidVendorId_t */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

struct OpenDDS_DCPS_GuidVendorId_t_xtag {};
template<> OpenDDS_Dcps_Export
const XTypes::TypeIdentifier& getMinimalTypeIdentifier<OpenDDS_DCPS_GuidVendorId_t_xtag>();

template<> OpenDDS_Dcps_Export
const XTypes::TypeMap& getMinimalTypeMap<OpenDDS_DCPS_GuidVendorId_t_xtag>();

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<> OpenDDS_Dcps_Export
void set_default( ::OpenDDS::DCPS::GuidVendorId_t_forany& arr);

OpenDDS_Dcps_Export
void serialized_size(const Encoding& encoding, size_t& size, const  ::OpenDDS::DCPS::GuidVendorId_t_forany& arr);

OpenDDS_Dcps_Export
bool operator<<(Serializer& strm, const  ::OpenDDS::DCPS::GuidVendorId_t_forany& arr);

OpenDDS_Dcps_Export
bool operator>>(Serializer& strm,  ::OpenDDS::DCPS::GuidVendorId_t_forany& arr);

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

OpenDDS_Dcps_Export
bool gen_skip_over(Serializer& ser,  ::OpenDDS::DCPS::GuidVendorId_t_forany*);

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: GuidVendorId_t */


/* Begin TYPEDEF: GuidPrefix_t */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

struct OpenDDS_DCPS_GuidPrefix_t_xtag {};
template<> OpenDDS_Dcps_Export
const XTypes::TypeIdentifier& getMinimalTypeIdentifier<OpenDDS_DCPS_GuidPrefix_t_xtag>();

template<> OpenDDS_Dcps_Export
const XTypes::TypeMap& getMinimalTypeMap<OpenDDS_DCPS_GuidPrefix_t_xtag>();

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<> OpenDDS_Dcps_Export
void set_default( ::OpenDDS::DCPS::GuidPrefix_t_forany& arr);

OpenDDS_Dcps_Export
void serialized_size(const Encoding& encoding, size_t& size, const  ::OpenDDS::DCPS::GuidPrefix_t_forany& arr);

OpenDDS_Dcps_Export
bool operator<<(Serializer& strm, const  ::OpenDDS::DCPS::GuidPrefix_t_forany& arr);

OpenDDS_Dcps_Export
bool operator>>(Serializer& strm,  ::OpenDDS::DCPS::GuidPrefix_t_forany& arr);

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

OpenDDS_Dcps_Export
bool gen_skip_over(Serializer& ser,  ::OpenDDS::DCPS::GuidPrefix_t_forany*);

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: GuidPrefix_t */


/* Begin TYPEDEF: EntityKey_t */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

struct OpenDDS_DCPS_EntityKey_t_xtag {};
template<> OpenDDS_Dcps_Export
const XTypes::TypeIdentifier& getMinimalTypeIdentifier<OpenDDS_DCPS_EntityKey_t_xtag>();

template<> OpenDDS_Dcps_Export
const XTypes::TypeMap& getMinimalTypeMap<OpenDDS_DCPS_EntityKey_t_xtag>();

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<> OpenDDS_Dcps_Export
void set_default( ::OpenDDS::DCPS::EntityKey_t_forany& arr);

OpenDDS_Dcps_Export
void serialized_size(const Encoding& encoding, size_t& size, const  ::OpenDDS::DCPS::EntityKey_t_forany& arr);

OpenDDS_Dcps_Export
bool operator<<(Serializer& strm, const  ::OpenDDS::DCPS::EntityKey_t_forany& arr);

OpenDDS_Dcps_Export
bool operator>>(Serializer& strm,  ::OpenDDS::DCPS::EntityKey_t_forany& arr);

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

OpenDDS_Dcps_Export
bool gen_skip_over(Serializer& ser,  ::OpenDDS::DCPS::EntityKey_t_forany*);

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: EntityKey_t */


/* Begin STRUCT: EntityId_t */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

struct OpenDDS_DCPS_EntityId_t_xtag {};
template<> OpenDDS_Dcps_Export
const XTypes::TypeIdentifier& getMinimalTypeIdentifier<OpenDDS_DCPS_EntityId_t_xtag>();

template<> OpenDDS_Dcps_Export
const XTypes::TypeMap& getMinimalTypeMap<OpenDDS_DCPS_EntityId_t_xtag>();

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

OpenDDS_Dcps_Export
bool vread(OpenDDS::DCPS::ValueReader& value_reader,  ::OpenDDS::DCPS::EntityId_t& value);

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

OpenDDS_Dcps_Export
void vwrite(OpenDDS::DCPS::ValueWriter& value_writer, const  ::OpenDDS::DCPS::EntityId_t& value);

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<> OpenDDS_Dcps_Export
void set_default( ::OpenDDS::DCPS::EntityId_t& stru);

OpenDDS_Dcps_Export
void serialized_size(const Encoding& encoding, size_t& size, const  ::OpenDDS::DCPS::EntityId_t& stru);

OpenDDS_Dcps_Export
bool operator<<(Serializer& strm, const  ::OpenDDS::DCPS::EntityId_t& stru);

OpenDDS_Dcps_Export
bool operator>>(Serializer& strm,  ::OpenDDS::DCPS::EntityId_t& stru);

OpenDDS_Dcps_Export
void serialized_size(const Encoding& encoding, size_t& size, const NestedKeyOnly<const  ::OpenDDS::DCPS::EntityId_t>& stru);

OpenDDS_Dcps_Export
bool operator<<(Serializer& strm, const NestedKeyOnly<const  ::OpenDDS::DCPS::EntityId_t>& stru);

OpenDDS_Dcps_Export
bool operator>>(Serializer& strm, const NestedKeyOnly< ::OpenDDS::DCPS::EntityId_t>& stru);

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

class MetaStruct;

template<typename T>
const MetaStruct& getMetaStruct();

template<>
OpenDDS_Dcps_Export
const MetaStruct& getMetaStruct< ::OpenDDS::DCPS::EntityId_t>();
OpenDDS_Dcps_Export
bool gen_skip_over(Serializer& ser,  ::OpenDDS::DCPS::EntityId_t*);

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: EntityId_t */


/* Begin CONST: ENTITYKIND_BUILTIN_UNKNOWN */


/* End CONST: ENTITYKIND_BUILTIN_UNKNOWN */


/* Begin CONST: ENTITYKIND_BUILTIN_PARTICIPANT */


/* End CONST: ENTITYKIND_BUILTIN_PARTICIPANT */


/* Begin CONST: ENTITYKIND_BUILTIN_WRITER_WITH_KEY */


/* End CONST: ENTITYKIND_BUILTIN_WRITER_WITH_KEY */


/* Begin CONST: ENTITYKIND_BUILTIN_WRITER_NO_KEY */


/* End CONST: ENTITYKIND_BUILTIN_WRITER_NO_KEY */


/* Begin CONST: ENTITYKIND_BUILTIN_READER_NO_KEY */


/* End CONST: ENTITYKIND_BUILTIN_READER_NO_KEY */


/* Begin CONST: ENTITYKIND_BUILTIN_READER_WITH_KEY */


/* End CONST: ENTITYKIND_BUILTIN_READER_WITH_KEY */


/* Begin CONST: ENTITYKIND_BUILTIN_TOPIC */


/* End CONST: ENTITYKIND_BUILTIN_TOPIC */


/* Begin CONST: ENTITYKIND_USER_UNKNOWN */


/* End CONST: ENTITYKIND_USER_UNKNOWN */


/* Begin CONST: ENTITYKIND_USER_WRITER_WITH_KEY */


/* End CONST: ENTITYKIND_USER_WRITER_WITH_KEY */


/* Begin CONST: ENTITYKIND_USER_WRITER_NO_KEY */


/* End CONST: ENTITYKIND_USER_WRITER_NO_KEY */


/* Begin CONST: ENTITYKIND_USER_READER_NO_KEY */


/* End CONST: ENTITYKIND_USER_READER_NO_KEY */


/* Begin CONST: ENTITYKIND_USER_READER_WITH_KEY */


/* End CONST: ENTITYKIND_USER_READER_WITH_KEY */


/* Begin CONST: ENTITYKIND_OPENDDS_SUBSCRIBER */


/* End CONST: ENTITYKIND_OPENDDS_SUBSCRIBER */


/* Begin CONST: ENTITYKIND_OPENDDS_PUBLISHER */


/* End CONST: ENTITYKIND_OPENDDS_PUBLISHER */


/* Begin CONST: ENTITYKIND_OPENDDS_TOPIC */


/* End CONST: ENTITYKIND_OPENDDS_TOPIC */


/* Begin CONST: ENTITYKIND_OPENDDS_USER */


/* End CONST: ENTITYKIND_OPENDDS_USER */


/* Begin CONST: ENTITYKIND_OPENDDS_NIL_WRITER */


/* End CONST: ENTITYKIND_OPENDDS_NIL_WRITER */


/* Begin STRUCT: GUID_t */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

struct OpenDDS_DCPS_GUID_t_xtag {};
template<> OpenDDS_Dcps_Export
const XTypes::TypeIdentifier& getMinimalTypeIdentifier<OpenDDS_DCPS_GUID_t_xtag>();

template<> OpenDDS_Dcps_Export
const XTypes::TypeMap& getMinimalTypeMap<OpenDDS_DCPS_GUID_t_xtag>();

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

OpenDDS_Dcps_Export
bool vread(OpenDDS::DCPS::ValueReader& value_reader,  ::OpenDDS::DCPS::GUID_t& value);

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

OpenDDS_Dcps_Export
void vwrite(OpenDDS::DCPS::ValueWriter& value_writer, const  ::OpenDDS::DCPS::GUID_t& value);

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<> OpenDDS_Dcps_Export
void set_default( ::OpenDDS::DCPS::GUID_t& stru);

OpenDDS_Dcps_Export
void serialized_size(const Encoding& encoding, size_t& size, const  ::OpenDDS::DCPS::GUID_t& stru);

OpenDDS_Dcps_Export
bool operator<<(Serializer& strm, const  ::OpenDDS::DCPS::GUID_t& stru);

OpenDDS_Dcps_Export
bool operator>>(Serializer& strm,  ::OpenDDS::DCPS::GUID_t& stru);

OpenDDS_Dcps_Export
void serialized_size(const Encoding& encoding, size_t& size, const NestedKeyOnly<const  ::OpenDDS::DCPS::GUID_t>& stru);

OpenDDS_Dcps_Export
bool operator<<(Serializer& strm, const NestedKeyOnly<const  ::OpenDDS::DCPS::GUID_t>& stru);

OpenDDS_Dcps_Export
bool operator>>(Serializer& strm, const NestedKeyOnly< ::OpenDDS::DCPS::GUID_t>& stru);

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
OpenDDS_Dcps_Export
const MetaStruct& getMetaStruct< ::OpenDDS::DCPS::GUID_t>();
OpenDDS_Dcps_Export
bool gen_skip_over(Serializer& ser,  ::OpenDDS::DCPS::GUID_t*);

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: GUID_t */


/* Begin TYPEDEF: GUIDSeq */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

struct OpenDDS_DCPS_GUIDSeq_xtag {};
template<> OpenDDS_Dcps_Export
const XTypes::TypeIdentifier& getMinimalTypeIdentifier<OpenDDS_DCPS_GUIDSeq_xtag>();

template<> OpenDDS_Dcps_Export
const XTypes::TypeMap& getMinimalTypeMap<OpenDDS_DCPS_GUIDSeq_xtag>();

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

OpenDDS_Dcps_Export
void serialized_size(const Encoding& encoding, size_t& size, const  ::OpenDDS::DCPS::GUIDSeq& seq);

OpenDDS_Dcps_Export
bool operator<<(Serializer& strm, const  ::OpenDDS::DCPS::GUIDSeq& seq);

OpenDDS_Dcps_Export
bool operator>>(Serializer& strm,  ::OpenDDS::DCPS::GUIDSeq& seq);

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

OpenDDS_Dcps_Export
void serialized_size(const Encoding& encoding, size_t& size, const NestedKeyOnly<const  ::OpenDDS::DCPS::GUIDSeq>& seq);

OpenDDS_Dcps_Export
bool operator<<(Serializer& strm, const NestedKeyOnly<const  ::OpenDDS::DCPS::GUIDSeq>& seq);

OpenDDS_Dcps_Export
bool operator>>(Serializer& strm, NestedKeyOnly< ::OpenDDS::DCPS::GUIDSeq>& seq);

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

OpenDDS_Dcps_Export
bool gen_skip_over(Serializer& ser,  ::OpenDDS::DCPS::GUIDSeq*);

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: GUIDSeq */

/* End MODULE: DCPS */

/* End MODULE: OpenDDS */
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif /* OPENDDS_IDL_GENERATED_DDSDCPSGUIDTYPESUPPORTIMPL_H_7NSHFA */
