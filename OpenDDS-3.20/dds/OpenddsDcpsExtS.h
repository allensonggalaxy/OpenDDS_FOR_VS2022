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
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_codegen.cpp:455

#ifndef _TAO_IDL_OPENDDSDCPSEXTS_2FCXL6_H_
#define _TAO_IDL_OPENDDSDCPSEXTS_2FCXL6_H_

#include /**/ "ace/pre.h"

#include "OpenddsDcpsExtC.h"
#include "dds/DdsDcpsCoreS.h"
#include "dds/DdsDcpsGuidS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/UB_String_SArguments.h"

// Skeleton file generation suppressed with command line option -SS

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_arg_traits.cpp:66




OPENDDS_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_arg_traits.cpp:934

  

  template<>
  class SArg_Traits< ::OpenDDS::DCPS::ParticipantLocationBuiltinTopicData>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::DCPS::ParticipantLocationBuiltinTopicData,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_arg_traits.cpp:934

  

  template<>
  class SArg_Traits< ::OpenDDS::DCPS::ConnectionRecord>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::DCPS::ConnectionRecord,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_arg_traits.cpp:934

  

  template<>
  class SArg_Traits< ::OpenDDS::DCPS::InternalThreadBuiltinTopicData>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::DCPS::InternalThreadBuiltinTopicData,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_arg_traits.cpp:934

  

  template<>
  class SArg_Traits< ::OpenDDS::DCPS::Locator_t>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OpenDDS::DCPS::Locator_t,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_arg_traits.cpp:674

  

  template<>
  class SArg_Traits< ::OpenDDS::DCPS::LocatorSeq>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::DCPS::LocatorSeq,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_arg_traits.cpp:934

  

  template<>
  class SArg_Traits< ::OpenDDS::DCPS::MessageCount>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OpenDDS::DCPS::MessageCount,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_arg_traits.cpp:934

  

  template<>
  class SArg_Traits< ::OpenDDS::DCPS::GuidCount>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OpenDDS::DCPS::GuidCount,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_arg_traits.cpp:674

  

  template<>
  class SArg_Traits< ::OpenDDS::DCPS::MessageCountSequence>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::DCPS::MessageCountSequence,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_arg_traits.cpp:674

  

  template<>
  class SArg_Traits< ::OpenDDS::DCPS::GuidCountSequence>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::DCPS::GuidCountSequence,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_arg_traits.cpp:934

  

  template<>
  class SArg_Traits< ::OpenDDS::DCPS::TransportStatistics>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::DCPS::TransportStatistics,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_arg_traits.cpp:674

  

  template<>
  class SArg_Traits< ::OpenDDS::DCPS::TransportStatisticsSequence>
    : public
        Var_Size_SArg_Traits_T<
            ::OpenDDS::DCPS::TransportStatisticsSequence,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL


OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL




OPENDDS_END_VERSIONED_NAMESPACE_DECL



#include /**/ "ace/post.h"

#endif /* ifndef */

