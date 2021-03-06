// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be\be_codegen.cpp:277


#include "tao/PI/PolicyFactoryC.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

// TAO_IDL - Generated from
// be\be_visitor_arg_traits.cpp:70

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Arg traits specializations.
namespace TAO
{
}


// TAO_IDL - Generated from
// be\be_visitor_interface/interface_cs.cpp:60

// Traits specializations for PortableInterceptor::PolicyFactory.

PortableInterceptor::PolicyFactory_ptr
TAO::Objref_Traits<PortableInterceptor::PolicyFactory>::duplicate (
    PortableInterceptor::PolicyFactory_ptr p
  )
{
  return PortableInterceptor::PolicyFactory::_duplicate (p);
}

void
TAO::Objref_Traits<PortableInterceptor::PolicyFactory>::release (
    PortableInterceptor::PolicyFactory_ptr p
  )
{
  ::CORBA::release (p);
}

PortableInterceptor::PolicyFactory_ptr
TAO::Objref_Traits<PortableInterceptor::PolicyFactory>::nil (void)
{
  return PortableInterceptor::PolicyFactory::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<PortableInterceptor::PolicyFactory>::marshal (
    PortableInterceptor::PolicyFactory_ptr p,
    TAO_OutputCDR & cdr
  )
{
  return ::CORBA::Object::marshal (p, cdr);
}

PortableInterceptor::PolicyFactory::PolicyFactory (void)
{}

PortableInterceptor::PolicyFactory::~PolicyFactory (void)
{}

PortableInterceptor::PolicyFactory_ptr
PortableInterceptor::PolicyFactory::_narrow (
    ::CORBA::Object_ptr _tao_objref
  )
{
  return PolicyFactory::_duplicate (
      dynamic_cast<PolicyFactory_ptr> (_tao_objref)
    );
}

PortableInterceptor::PolicyFactory_ptr
PortableInterceptor::PolicyFactory::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref
  )
{
  return PolicyFactory::_duplicate (
      dynamic_cast<PolicyFactory_ptr> (_tao_objref)
    );
}

PortableInterceptor::PolicyFactory_ptr
PortableInterceptor::PolicyFactory::_duplicate (PolicyFactory_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }

  return obj;
}

void
PortableInterceptor::PolicyFactory::_tao_release (PolicyFactory_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
PortableInterceptor::PolicyFactory::_is_a (const char *value)
{
  if (
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/PortableInterceptor/PolicyFactory:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* PortableInterceptor::PolicyFactory::_interface_repository_id (void) const
{
  return "IDL:omg.org/PortableInterceptor/PolicyFactory:1.0";
}

::CORBA::Boolean
PortableInterceptor::PolicyFactory::marshal (TAO_OutputCDR &)
{
  return false;
}

// Hand-crafted.
::CORBA::Policy_ptr
PortableInterceptor::PolicyFactory::_create_policy (CORBA::PolicyType)
{
  throw ::CORBA::PolicyError (CORBA::BAD_POLICY_TYPE);
}


TAO_END_VERSIONED_NAMESPACE_DECL
