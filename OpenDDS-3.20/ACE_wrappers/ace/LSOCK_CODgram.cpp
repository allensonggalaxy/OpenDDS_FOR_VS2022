// $Id$

#include "ace/LSOCK_CODgram.h"
#if !defined (ACE_LACKS_UNIX_DOMAIN_SOCKETS)

#include "ace/Log_Category.h"
#if defined (ACE_HAS_ALLOC_HOOKS)
# include "ace/Malloc_Base.h"
#endif /* ACE_HAS_ALLOC_HOOKS */



#if !defined (__ACE_INLINE__)
#include "ace/LSOCK_CODgram.inl"
#endif /* __ACE_INLINE__ */

ACE_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_ALLOC_HOOK_DEFINE(ACE_LSOCK_CODgram)

void
ACE_LSOCK_CODgram::dump (void) const
{
#if defined (ACE_HAS_DUMP)
  ACE_TRACE ("ACE_LSOCK_CODgram::dump");

  ACELIB_DEBUG ((LM_DEBUG, ACE_BEGIN_DUMP, this));
  ACE_SOCK_CODgram::dump ();
  ACE_LSOCK::dump ();
  ACELIB_DEBUG ((LM_DEBUG, ACE_END_DUMP));
#endif /* ACE_HAS_DUMP */
}

/* Here's the general-purpose open routine. */

int
ACE_LSOCK_CODgram::open (const ACE_Addr &remote,
                         const ACE_Addr &local,
                         int protocol_family,
                         int protocol)
{
  ACE_TRACE ("ACE_LSOCK_CODgram::open");
  if (ACE_SOCK_CODgram::open (remote, local, protocol_family,
                              protocol) == -1)
    return -1;
  ACE_LSOCK::set_handle (this->get_handle ());
  return 0;
}

/* Create a local ACE_SOCK datagram. */

ACE_LSOCK_CODgram::ACE_LSOCK_CODgram (const ACE_Addr &remote,
                                      const ACE_Addr &local,
                                      int protocol_family,
                                      int protocol)
{
  ACE_TRACE ("ACE_LSOCK_CODgram::ACE_LSOCK_CODgram");
  if (this->open (remote, local, protocol_family,
                  protocol) == -1)
    ACELIB_ERROR ((LM_ERROR,  ACE_TEXT ("%p\n"),  ACE_TEXT ("ACE_LSOCK_CODgram")));
}

ACE_END_VERSIONED_NAMESPACE_DECL

#endif /* ACE_LACKS_UNIX_DOMAIN_SOCKETS */
