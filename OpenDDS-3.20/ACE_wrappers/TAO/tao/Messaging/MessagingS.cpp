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
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_codegen.cpp:639

#ifndef _TAO_IDL_MESSAGINGS_TCS8ZE_CPP_
#define _TAO_IDL_MESSAGINGS_TCS8ZE_CPP_


#include "MessagingS.h"
#include "tao/PortableServer/Operation_Table_Perfect_Hash.h"
#include "tao/PortableServer/Direct_Collocation_Upcall_Wrapper.h"
#include "tao/PortableServer/Upcall_Command.h"
#include "tao/PortableServer/Upcall_Wrapper.h"
#include "tao/TAO_Server_Request.h"
#include "tao/ORB_Core.h"
#include "tao/Profile.h"
#include "tao/Stub.h"
#include "tao/IFR_Client_Adapter.h"
#include "tao/Object_T.h"
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/DynamicC.h"
#include "tao/CDR.h"
#include "tao/operation_details.h"
#include "tao/PortableInterceptor.h"
#include "ace/Dynamic_Service.h"
#include "ace/Malloc_Allocator.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_interface.cpp:1866

class TAO_Messaging_ReplyHandler_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_Messaging_ReplyHandler_Perfect_Hash_OpTable -N lookup */

unsigned int
TAO_Messaging_ReplyHandler_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16,  0, 16,  0, 16, 16,
      0,  5, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16,  0, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16,
    };
  return len + asso_values[(int) str[len - 1]] + asso_values[(int) str[0]];
}

const TAO_operation_db_entry *
TAO_Messaging_ReplyHandler_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 5,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 15,
      HASH_VALUE_RANGE = 11,
      DUPLICATES = 0,
      WORDLIST_SIZE = 10
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_is_a", &TAO_ServantBase::_is_a_thru_poa_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_component", &TAO_ServantBase::_component_thru_poa_skel, 0},
      {"",0,0},{"",0,0},
      {"_non_existent", &TAO_ServantBase::_non_existent_thru_poa_skel, 0},
      {"_repository_id", &TAO_ServantBase::_repository_id_thru_poa_skel, 0},
      {"_interface", &TAO_ServantBase::_interface_skel, 0},
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          const char *s = wordlist[key].opname;

          if (*str == *s && !ACE_OS::strncmp (str + 1, s + 1, len - 1))
            return &wordlist[key];
        }
    }
  return 0;
}

static TAO_Messaging_ReplyHandler_Perfect_Hash_OpTable tao_Messaging_ReplyHandler_optable;

///////////////////////////////////////////////////////////////////////
//                 Direct Proxy  Implementation
//

POA_Messaging::_TAO_ReplyHandler_Direct_Proxy_Impl::~_TAO_ReplyHandler_Direct_Proxy_Impl (void)
{
}



//
//           End Direct Proxy Implementation
///////////////////////////////////////////////////////////////////////


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_ss.cpp:92



POA_Messaging::ReplyHandler::ReplyHandler (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_Messaging_ReplyHandler_optable;
}

POA_Messaging::ReplyHandler::ReplyHandler (const ReplyHandler& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}

POA_Messaging::ReplyHandler::~ReplyHandler (void)
{
}



// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_ss.cpp:164





::CORBA::Boolean POA_Messaging::ReplyHandler::_is_a (const char* value)
{
  return
    (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/Messaging/ReplyHandler:1.0"
        ) == 0 ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_Messaging::ReplyHandler::_interface_repository_id (void) const
{
  return "IDL:omg.org/Messaging/ReplyHandler:1.0";
}


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_ss.cpp:422



void POA_Messaging::ReplyHandler::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}


// TAO_IDL - Generated from
// C:\Users\Admin\Downloads\OpenDDS-3.20\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_ss.cpp:370



Messaging::ReplyHandler *
POA_Messaging::ReplyHandler::_this (void)
{
  TAO_Stub *stub = this->_create_stub ();

  TAO_Stub_Auto_Ptr safe_stub (stub);
  ::CORBA::Object_ptr tmp = CORBA::Object_ptr ();

  ::CORBA::Boolean const _tao_opt_colloc =
    stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  
  ACE_NEW_RETURN (
      tmp,
      ::CORBA::Object (stub, _tao_opt_colloc, this),
      0);
  
  ::CORBA::Object_var obj = tmp;
  (void) safe_stub.release ();

  typedef ::Messaging::ReplyHandler STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in ());
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* ifndef */

