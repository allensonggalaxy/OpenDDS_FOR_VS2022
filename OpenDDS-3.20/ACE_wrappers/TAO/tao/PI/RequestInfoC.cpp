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


#include "tao/PI/PI.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_cs.cpp:50



// Traits specializations for PortableInterceptor::RequestInfo.

PortableInterceptor::RequestInfo_ptr
TAO::Objref_Traits<PortableInterceptor::RequestInfo>::duplicate (
    PortableInterceptor::RequestInfo_ptr p)
{
  return PortableInterceptor::RequestInfo::_duplicate (p);
}

void
TAO::Objref_Traits<PortableInterceptor::RequestInfo>::release (
    PortableInterceptor::RequestInfo_ptr p)
{
  ::CORBA::release (p);
}

PortableInterceptor::RequestInfo_ptr
TAO::Objref_Traits<PortableInterceptor::RequestInfo>::nil (void)
{
  return PortableInterceptor::RequestInfo::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<PortableInterceptor::RequestInfo>::marshal (
    const PortableInterceptor::RequestInfo_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

PortableInterceptor::RequestInfo::RequestInfo (void)
{}

PortableInterceptor::RequestInfo::~RequestInfo (void)
{
}

PortableInterceptor::RequestInfo_ptr
PortableInterceptor::RequestInfo::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return RequestInfo::_duplicate (
      dynamic_cast<RequestInfo_ptr> (_tao_objref)
    );
}

PortableInterceptor::RequestInfo_ptr
PortableInterceptor::RequestInfo::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return RequestInfo::_duplicate (
      dynamic_cast<RequestInfo_ptr> (_tao_objref)
    );
}

PortableInterceptor::RequestInfo_ptr
PortableInterceptor::RequestInfo::_nil (void)
{
  return 0;
}

PortableInterceptor::RequestInfo_ptr
PortableInterceptor::RequestInfo::_duplicate (RequestInfo_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
PortableInterceptor::RequestInfo::_tao_release (RequestInfo_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
PortableInterceptor::RequestInfo::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/PortableInterceptor/RequestInfo:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* PortableInterceptor::RequestInfo::_interface_repository_id (void) const
{
  return "IDL:omg.org/PortableInterceptor/RequestInfo:1.0";
}

::CORBA::Boolean
PortableInterceptor::RequestInfo::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}


TAO_END_VERSIONED_NAMESPACE_DECL


