// $Id$

#include "orbsvcs/SSLIOP/SSLIOP_Accept_Strategy.h"
#include "orbsvcs/Log_Macros.h"
#include "tao/debug.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO::SSLIOP::Accept_Strategy::Accept_Strategy (TAO_ORB_Core * orb_core,
                                               const ACE_Time_Value & timeout,
                                               bool check_host)
  : TAO_Accept_Strategy<TAO::SSLIOP::Connection_Handler,
                        ACE_SSL_SOCK_Acceptor> (orb_core),
  timeout_ (timeout),
  check_host_ (check_host)
{
}

int
TAO::SSLIOP::Accept_Strategy::accept_svc_handler (handler_type * svc_handler)
{
  ACE_TRACE ("TAO::SSLIOP::Accept_Strategy::accept_svc_handler");

  // The following code is basically the same code found in
  // ACE_Accept_Strategy::accept_svc_handler().  The only difference
  // is that a timeout value is passed to the peer acceptor's accept()
  // method.  A timeout is necessary to prevent malicious or
  // misbehaved clients from only completing the TCP handshake and not
  // the SSL handshake.  Without the timeout, a denial-of-service
  // vulnerability would exist where multiple incomplete SSL passive
  // connections (i.e. where only the TCP handshake is completed)
  // could result in the server process running out of file
  // descriptors.  That would be due to the SSL handshaking process
  // blocking/waiting for the handshake to complete.

  // The timeout value will be modified.  Make a copy.
  ACE_Time_Value timeout (this->timeout_);

  // Try to find out if the implementation of the reactor that we are
  // using requires us to reset the event association for the newly
  // created handle. This is because the newly created handle will
  // inherit the properties of the listen handle, including its event
  // associations.
  int const reset_new_handle = this->reactor_->uses_event_associations ();

  if (this->peer_acceptor_.accept (svc_handler->peer (), // stream
                                   0,                // remote address
                                   &timeout,         // timeout
                                   1,                // restart
                                   reset_new_handle  // reset new handler
                                   ) == -1)
    {
      // Ensure that errno is preserved in case the svc_handler
      // close() method resets it.
      ACE_Errno_Guard error (errno);

      // It doesn't make sense to close the handler since it didn't open.
      svc_handler->transport ()->remove_reference ();

      // #REFCOUNT# is zero at this point.
      return -1;
    }

  // If required, verify the host in the endpoint match the cert
  if (this->check_host_ && !svc_handler->check_host ())
    {
      // Close the handler.
      svc_handler->close ();

      if (TAO_debug_level > 0)
        {
          ORBSVCS_ERROR ((LM_ERROR,
                          "TAO (%P|%t) - SLIIOP_Accept_Strategy::accept, "
                          "hostname verification failed\n"));
        }

      return -1;
    }

  return 0;
}

TAO_END_VERSIONED_NAMESPACE_DECL
