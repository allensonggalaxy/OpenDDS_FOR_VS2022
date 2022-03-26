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
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_codegen.cpp:151

#ifndef _TAO_IDL_DDSDCPSDOMAINC_FFPBY3_H_
#define _TAO_IDL_DDSDCPSDOMAINC_FFPBY3_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "dds/DCPS/dcps_export.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types_IDLv4.h"
TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace CORBA
{
  using namespace IDLv4;
}

TAO_END_VERSIONED_NAMESPACE_DECL

#include "tao/ORB_Constants.h"
#include "dds/DCPS/ZeroCopyInfoSeq_T.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/UB_String_Arguments.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"
#include /**/ "dds/Versioned_Namespace.h"

#include "dds/DdsDcpsInfrastructureC.h"
#include "dds/DdsDcpsTopicC.h"
#include "dds/DdsDcpsPublicationC.h"
#include "dds/DdsDcpsSubscriptionC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 2 || TAO_BETA_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO OpenDDS_Dcps_Export

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_module\module_ch.cpp:37

namespace DDS
{
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_interface.cpp:750

  

#if !defined (_DDS_DOMAINPARTICIPANTLISTENER__VAR_OUT_CH_)
#define _DDS_DOMAINPARTICIPANTLISTENER__VAR_OUT_CH_

  class DomainParticipantListener;
  typedef DomainParticipantListener *DomainParticipantListener_ptr;

  typedef
    TAO_Objref_Var_T<
        DomainParticipantListener
      >
    DomainParticipantListener_var;
  
  typedef
    TAO_Objref_Out_T<
        DomainParticipantListener
      >
    DomainParticipantListener_out;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_ch.cpp:42

  

  class OpenDDS_Dcps_Export DomainParticipantListener
    : public virtual ::DDS::TopicListener,
      public virtual ::DDS::PublisherListener,
      public virtual ::DDS::SubscriberListener
  
  {
  public:
    // TAO_IDL - Generated from
    // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_type.cpp:304

    typedef DomainParticipantListener_ptr _ptr_type;
    typedef DomainParticipantListener_var _var_type;
    typedef DomainParticipantListener_out _out_type;

    // The static operations.
    static DomainParticipantListener_ptr _duplicate (DomainParticipantListener_ptr obj);

    static void _tao_release (DomainParticipantListener_ptr obj);

    static DomainParticipantListener_ptr _narrow (::CORBA::Object_ptr obj);
    static DomainParticipantListener_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static DomainParticipantListener_ptr _nil (void);

    
    // TAO_IDL - Generated from
    // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_ch.cpp:138

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    DomainParticipantListener (void);

    

    virtual ~DomainParticipantListener (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    ACE_UNIMPLEMENTED_FUNC (DomainParticipantListener (const DomainParticipantListener &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (DomainParticipantListener (DomainParticipantListener &&))
#endif /* ACE_HAS_CPP11 */
    ACE_UNIMPLEMENTED_FUNC (DomainParticipantListener &operator= (const DomainParticipantListener &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (DomainParticipantListener &operator= (DomainParticipantListener &&))
#endif /* ACE_HAS_CPP11 */
  };
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_interface.cpp:750

  

#if !defined (_DDS_DOMAINPARTICIPANT__VAR_OUT_CH_)
#define _DDS_DOMAINPARTICIPANT__VAR_OUT_CH_

  class DomainParticipant;
  typedef DomainParticipant *DomainParticipant_ptr;

  typedef
    TAO_Objref_Var_T<
        DomainParticipant
      >
    DomainParticipant_var;
  
  typedef
    TAO_Objref_Out_T<
        DomainParticipant
      >
    DomainParticipant_out;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_ch.cpp:42

  

  class OpenDDS_Dcps_Export DomainParticipant
    : public virtual ::DDS::Entity
  
  {
  public:
    // TAO_IDL - Generated from
    // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_type.cpp:304

    typedef DomainParticipant_ptr _ptr_type;
    typedef DomainParticipant_var _var_type;
    typedef DomainParticipant_out _out_type;

    // The static operations.
    static DomainParticipant_ptr _duplicate (DomainParticipant_ptr obj);

    static void _tao_release (DomainParticipant_ptr obj);

    static DomainParticipant_ptr _narrow (::CORBA::Object_ptr obj);
    static DomainParticipant_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static DomainParticipant_ptr _nil (void);

    virtual ::DDS::Publisher_ptr create_publisher (
      const ::DDS::PublisherQos & qos,
      ::DDS::PublisherListener_ptr a_listener,
      ::DDS::StatusMask mask) = 0;

    virtual ::DDS::ReturnCode_t delete_publisher (
      ::DDS::Publisher_ptr p) = 0;

    virtual ::DDS::Subscriber_ptr create_subscriber (
      const ::DDS::SubscriberQos & qos,
      ::DDS::SubscriberListener_ptr a_listener,
      ::DDS::StatusMask mask) = 0;

    virtual ::DDS::ReturnCode_t delete_subscriber (
      ::DDS::Subscriber_ptr s) = 0;

    virtual ::DDS::Subscriber_ptr get_builtin_subscriber (
      void) = 0;

    virtual ::DDS::Topic_ptr create_topic (
      const char * topic_name,
      const char * type_name,
      const ::DDS::TopicQos & qos,
      ::DDS::TopicListener_ptr a_listener,
      ::DDS::StatusMask mask) = 0;

    virtual ::DDS::ReturnCode_t delete_topic (
      ::DDS::Topic_ptr a_topic) = 0;

    virtual ::DDS::Topic_ptr find_topic (
      const char * topic_name,
      const ::DDS::Duration_t & timeout) = 0;

    virtual ::DDS::TopicDescription_ptr lookup_topicdescription (
      const char * name) = 0;

    virtual ::DDS::ContentFilteredTopic_ptr create_contentfilteredtopic (
      const char * name,
      ::DDS::Topic_ptr related_topic,
      const char * filter_expression,
      const ::DDS::StringSeq & expression_parameters) = 0;

    virtual ::DDS::ReturnCode_t delete_contentfilteredtopic (
      ::DDS::ContentFilteredTopic_ptr a_contentfilteredtopic) = 0;

    virtual ::DDS::MultiTopic_ptr create_multitopic (
      const char * name,
      const char * type_name,
      const char * subscription_expression,
      const ::DDS::StringSeq & expression_parameters) = 0;

    virtual ::DDS::ReturnCode_t delete_multitopic (
      ::DDS::MultiTopic_ptr a_multitopic) = 0;

    virtual ::DDS::ReturnCode_t delete_contained_entities (
      void) = 0;

    virtual ::CORBA::Boolean contains_entity (
      ::DDS::InstanceHandle_t a_handle) = 0;

    virtual ::DDS::ReturnCode_t set_qos (
      const ::DDS::DomainParticipantQos & qos) = 0;

    virtual ::DDS::ReturnCode_t get_qos (
      ::DDS::DomainParticipantQos & qos) = 0;

    virtual ::DDS::ReturnCode_t set_listener (
      ::DDS::DomainParticipantListener_ptr a_listener,
      ::DDS::StatusMask mask) = 0;

    virtual ::DDS::DomainParticipantListener_ptr get_listener (
      void) = 0;

    virtual ::DDS::ReturnCode_t ignore_participant (
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::ReturnCode_t ignore_topic (
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::ReturnCode_t ignore_publication (
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::ReturnCode_t ignore_subscription (
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::DomainId_t get_domain_id (
      void) = 0;

    virtual ::DDS::ReturnCode_t assert_liveliness (
      void) = 0;

    virtual ::DDS::ReturnCode_t set_default_publisher_qos (
      const ::DDS::PublisherQos & qos) = 0;

    virtual ::DDS::ReturnCode_t get_default_publisher_qos (
      ::DDS::PublisherQos & qos) = 0;

    virtual ::DDS::ReturnCode_t set_default_subscriber_qos (
      const ::DDS::SubscriberQos & qos) = 0;

    virtual ::DDS::ReturnCode_t get_default_subscriber_qos (
      ::DDS::SubscriberQos & qos) = 0;

    virtual ::DDS::ReturnCode_t set_default_topic_qos (
      const ::DDS::TopicQos & qos) = 0;

    virtual ::DDS::ReturnCode_t get_default_topic_qos (
      ::DDS::TopicQos & qos) = 0;

    virtual ::DDS::ReturnCode_t get_current_time (
      ::DDS::Time_t & current_time) = 0;

    virtual ::DDS::ReturnCode_t get_discovered_participants (
      ::DDS::InstanceHandleSeq & participant_handles) = 0;

    virtual ::DDS::ReturnCode_t get_discovered_participant_data (
      ::DDS::ParticipantBuiltinTopicData & participant_data,
      ::DDS::InstanceHandle_t participant_handle) = 0;

    virtual ::DDS::ReturnCode_t get_discovered_topics (
      ::DDS::InstanceHandleSeq & topic_handles) = 0;

    virtual ::DDS::ReturnCode_t get_discovered_topic_data (
      ::DDS::TopicBuiltinTopicData & topic_data,
      ::DDS::InstanceHandle_t topic_handle) = 0;

    
    // TAO_IDL - Generated from
    // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_ch.cpp:138

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    DomainParticipant (void);

    

    virtual ~DomainParticipant (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    ACE_UNIMPLEMENTED_FUNC (DomainParticipant (const DomainParticipant &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (DomainParticipant (DomainParticipant &&))
#endif /* ACE_HAS_CPP11 */
    ACE_UNIMPLEMENTED_FUNC (DomainParticipant &operator= (const DomainParticipant &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (DomainParticipant &operator= (DomainParticipant &&))
#endif /* ACE_HAS_CPP11 */
  };
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_interface.cpp:750

  

#if !defined (_DDS_DOMAINPARTICIPANTFACTORY__VAR_OUT_CH_)
#define _DDS_DOMAINPARTICIPANTFACTORY__VAR_OUT_CH_

  class DomainParticipantFactory;
  typedef DomainParticipantFactory *DomainParticipantFactory_ptr;

  typedef
    TAO_Objref_Var_T<
        DomainParticipantFactory
      >
    DomainParticipantFactory_var;
  
  typedef
    TAO_Objref_Out_T<
        DomainParticipantFactory
      >
    DomainParticipantFactory_out;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_ch.cpp:42

  

  class OpenDDS_Dcps_Export DomainParticipantFactory
    : public virtual ::CORBA::Object
  {
  public:
    // TAO_IDL - Generated from
    // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_type.cpp:304

    typedef DomainParticipantFactory_ptr _ptr_type;
    typedef DomainParticipantFactory_var _var_type;
    typedef DomainParticipantFactory_out _out_type;

    // The static operations.
    static DomainParticipantFactory_ptr _duplicate (DomainParticipantFactory_ptr obj);

    static void _tao_release (DomainParticipantFactory_ptr obj);

    static DomainParticipantFactory_ptr _narrow (::CORBA::Object_ptr obj);
    static DomainParticipantFactory_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static DomainParticipantFactory_ptr _nil (void);

    virtual ::DDS::DomainParticipant_ptr create_participant (
      ::DDS::DomainId_t domainId,
      const ::DDS::DomainParticipantQos & qos,
      ::DDS::DomainParticipantListener_ptr a_listener,
      ::DDS::StatusMask mask) = 0;

    virtual ::DDS::ReturnCode_t delete_participant (
      ::DDS::DomainParticipant_ptr a_participant) = 0;

    virtual ::DDS::DomainParticipant_ptr lookup_participant (
      ::DDS::DomainId_t domainId) = 0;

    virtual ::DDS::ReturnCode_t set_default_participant_qos (
      const ::DDS::DomainParticipantQos & qos) = 0;

    virtual ::DDS::ReturnCode_t get_default_participant_qos (
      ::DDS::DomainParticipantQos & qos) = 0;

    virtual ::DDS::DomainParticipantFactory_ptr get_instance (
      void) = 0;

    virtual ::DDS::ReturnCode_t set_qos (
      const ::DDS::DomainParticipantFactoryQos & qos) = 0;

    virtual ::DDS::ReturnCode_t get_qos (
      ::DDS::DomainParticipantFactoryQos & qos) = 0;

    
    // TAO_IDL - Generated from
    // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_ch.cpp:138

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    DomainParticipantFactory (void);

    

    virtual ~DomainParticipantFactory (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    ACE_UNIMPLEMENTED_FUNC (DomainParticipantFactory (const DomainParticipantFactory &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (DomainParticipantFactory (DomainParticipantFactory &&))
#endif /* ACE_HAS_CPP11 */
    ACE_UNIMPLEMENTED_FUNC (DomainParticipantFactory &operator= (const DomainParticipantFactory &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (DomainParticipantFactory &operator= (DomainParticipantFactory &&))
#endif /* ACE_HAS_CPP11 */
  };


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_module\module_ch.cpp:65


} // module DDS
// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_arg_traits.cpp:66




OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
}

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_traits.cpp:60




OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_DDS_DOMAINPARTICIPANTLISTENER__TRAITS_)
#define _DDS_DOMAINPARTICIPANTLISTENER__TRAITS_

  template<>
  struct OpenDDS_Dcps_Export Objref_Traits< ::DDS::DomainParticipantListener>
  {
    static ::DDS::DomainParticipantListener_ptr duplicate (
        ::DDS::DomainParticipantListener_ptr p);
    static void release (
        ::DDS::DomainParticipantListener_ptr p);
    static ::DDS::DomainParticipantListener_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::DDS::DomainParticipantListener_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_DDS_DOMAINPARTICIPANT__TRAITS_)
#define _DDS_DOMAINPARTICIPANT__TRAITS_

  template<>
  struct OpenDDS_Dcps_Export Objref_Traits< ::DDS::DomainParticipant>
  {
    static ::DDS::DomainParticipant_ptr duplicate (
        ::DDS::DomainParticipant_ptr p);
    static void release (
        ::DDS::DomainParticipant_ptr p);
    static ::DDS::DomainParticipant_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::DDS::DomainParticipant_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_DDS_DOMAINPARTICIPANTFACTORY__TRAITS_)
#define _DDS_DOMAINPARTICIPANTFACTORY__TRAITS_

  template<>
  struct OpenDDS_Dcps_Export Objref_Traits< ::DDS::DomainParticipantFactory>
  {
    static ::DDS::DomainParticipantFactory_ptr duplicate (
        ::DDS::DomainParticipantFactory_ptr p);
    static void release (
        ::DDS::DomainParticipantFactory_ptr p);
    static ::DDS::DomainParticipantFactory_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::DDS::DomainParticipantFactory_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_codegen.cpp:1657



OPENDDS_END_VERSIONED_NAMESPACE_DECL

#if defined (__ACE_INLINE__)
#include "DdsDcpsDomainC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */
