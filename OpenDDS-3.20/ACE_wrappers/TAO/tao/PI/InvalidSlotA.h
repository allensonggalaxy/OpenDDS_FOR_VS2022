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
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_codegen.cpp:775

#ifndef _TAO_IDL_INVALIDSLOTA_7JRUHI_H_
#define _TAO_IDL_INVALIDSLOTA_7JRUHI_H_

#include /**/ "ace/pre.h"

#include /**/ "tao/PI/pi_export.h"
#include "tao/AnyTypeCode/Any.h"

#include "tao/PI/PI.h"


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_module\module_ch.cpp:46

namespace PortableInterceptor
{
  // TAO_IDL - Generated from
  // C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_typecode\typecode_decl.cpp:36

  extern TAO_PI_Export ::CORBA::TypeCode_ptr const _tc_InvalidSlot;


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_module\module_ch.cpp:73


} // module PortableInterceptor

// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_exception\any_op_ch.cpp:40



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace PortableInterceptor
{
  

  TAO_PI_Export void operator<<= (::CORBA::Any &, const ::PortableInterceptor::InvalidSlot &); // copying version
  TAO_PI_Export void operator<<= (::CORBA::Any &, ::PortableInterceptor::InvalidSlot*); // noncopying version
  TAO_PI_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::PortableInterceptor::InvalidSlot *&); // deprecated
TAO_PI_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::PortableInterceptor::InvalidSlot *&);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_PI_Export void operator<<= (::CORBA::Any &, const PortableInterceptor::InvalidSlot &); // copying version
TAO_PI_Export void operator<<= (::CORBA::Any &, PortableInterceptor::InvalidSlot*); // noncopying version
TAO_PI_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, PortableInterceptor::InvalidSlot *&); // deprecated
TAO_PI_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const PortableInterceptor::InvalidSlot *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

TAO_END_VERSIONED_NAMESPACE_DECL



#include /**/ "ace/post.h"

#endif /* ifndef */
