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

#ifndef _TAO_IDL_RTPSRPCS_QCEF2U_H_
#define _TAO_IDL_RTPSRPCS_QCEF2U_H_

#include /**/ "ace/pre.h"

#include "RtpsRpcC.h"
#include "RtpsCoreS.h"
#include "dds/DdsDcpsGuidS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/BD_String_SArgument_T.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"

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
  class SArg_Traits< ::DDS::SampleIdentity>
    : public
        Fixed_Size_SArg_Traits_T<
            ::DDS::SampleIdentity,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#if !defined (_INSTANCENAME255__SARG_TRAITS_)
#define _INSTANCENAME255__SARG_TRAITS_

  template<>
  class SArg_Traits<InstanceName_255>
    : public
        BD_String_SArg_Traits_T<
            CORBA::String_var,
            255,
            TAO::Any_Insert_Policy_Noop
        >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_arg_traits.cpp:892

  

  template<>
  class SArg_Traits< ::DDS::RPC::RemoteExceptionCode_t>
    : public
        Basic_SArg_Traits_T<
            ::DDS::RPC::RemoteExceptionCode_t,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_arg_traits.cpp:934

  

  template<>
  class SArg_Traits< ::DDS::RPC::RequestHeader>
    : public
        Var_Size_SArg_Traits_T<
            ::DDS::RPC::RequestHeader,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_arg_traits.cpp:934

  

  template<>
  class SArg_Traits< ::DDS::RPC::ReplyHeader>
    : public
        Fixed_Size_SArg_Traits_T<
            ::DDS::RPC::ReplyHeader,
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

