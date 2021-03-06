// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v1.8.3
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

#include "QCTQ_Test_Sender_exec.h"
#include "tao/ORB_Core.h"
#include "ace/Reactor.h"

#define ITERATIONS 20

namespace CIAO_QCTQ_Test_Sender_Impl
{
  /**
   * ConnectorStatusListener_exec_i
   */
  ConnectorStatusListener_exec_i::ConnectorStatusListener_exec_i (
    Sender_exec_i &callback)
    : callback_ (callback)
    , started_ (false)
  {
  }

  ConnectorStatusListener_exec_i::~ConnectorStatusListener_exec_i (void)
  {
  }

  // Operations from ::CCM_DDS::ConnectorStatusListener
  void ConnectorStatusListener_exec_i::on_inconsistent_topic (
    ::DDS::Topic_ptr /*the_topic*/,
    const DDS::InconsistentTopicStatus & /*status*/)
  {
  }

  void ConnectorStatusListener_exec_i::on_requested_incompatible_qos (
    ::DDS::DataReader_ptr /*the_reader*/,
    const DDS::RequestedIncompatibleQosStatus & /*status*/)
  {
  }

  void ConnectorStatusListener_exec_i::on_sample_rejected (
    ::DDS::DataReader_ptr /*the_reader*/,
    const DDS::SampleRejectedStatus & /*status*/)
  {
  }

  void ConnectorStatusListener_exec_i::on_offered_deadline_missed(
    ::DDS::DataWriter_ptr /*the_writer*/,
    const DDS::OfferedDeadlineMissedStatus & /*status*/)
  {
  }

  void ConnectorStatusListener_exec_i::on_offered_incompatible_qos(
    ::DDS::DataWriter_ptr /*the_writer*/,
    const DDS::OfferedIncompatibleQosStatus & /*status*/)
  {
  }

  void ConnectorStatusListener_exec_i::on_unexpected_status(
    ::DDS::Entity_ptr /*the_entity*/,
    ::DDS::StatusKind status_kind)
  {
    if (!this->started_ && status_kind == ::DDS::PUBLICATION_MATCHED_STATUS)
      {
        this->started_ = true;
        ACE_DEBUG ((LM_DEBUG, "ConnectorStatusListener_exec_i::on_unexpected_status - "
          "Publication matched received: starting the test\n"));

        this->callback_.get_started ();
      }
  }

  /**
   * WriteHandler
   */

  WriteHandler::WriteHandler (Sender_exec_i &callback)
    : callback_ (callback)
  {
  }

  int
  WriteHandler::handle_exception (ACE_HANDLE)
  {
    this->callback_.start ();
    return 0;
  }

  /**
   * Facet Executor Implementation Class: restart_writer_exec_i
   */

  restart_writer_exec_i::restart_writer_exec_i (
        ::QCTQ_Test::CCM_Sender_Context_ptr ctx,
        Sender_exec_i & callback)
    : ciao_context_ (
        ::QCTQ_Test::CCM_Sender_Context::_duplicate (ctx))
      , callback_ (callback)
  {
  }

  restart_writer_exec_i::~restart_writer_exec_i (void)
  {
  }

  // Operations from ::TwoQueriesRestarter

  void
  restart_writer_exec_i::restart_write (void)
  {
    this->callback_.restart ();
  }

  /**
   * Component Executor Implementation Class: Sender_exec_i
   */

  Sender_exec_i::Sender_exec_i (void)
    : keys_ (0)
      , iterations_ (ITERATIONS)
      , run_ (1)
      , wh_ (0)

  {
  }

  Sender_exec_i::~Sender_exec_i (void)
  {
    if (this->wh_)
      {
        delete this->wh_;
      }
  }

  // Supported operations and attributes.
  ACE_Reactor*
  Sender_exec_i::reactor (void)
  {
    ACE_Reactor* reactor = 0;
    ::CORBA::Object_var ccm_object =
      this->ciao_context_->get_CCM_object();
    if (! ::CORBA::is_nil (ccm_object.in ()))
      {
        ::CORBA::ORB_var orb = ccm_object->_get_orb ();
        if (! ::CORBA::is_nil (orb.in ()))
          {
            reactor = orb->orb_core ()->reactor ();
          }
      }
    if (reactor == 0)
      {
        throw ::CORBA::INTERNAL ();
      }
    return reactor;
  }

  void
  Sender_exec_i::restart (void)
  {
    ++this->run_;
    if (this->wh_)
      {
        delete this->wh_;
        this->wh_ = 0;
      }
    ACE_NEW_THROW_EX (this->wh_,
                     WriteHandler (*this),
                     ::CORBA::NO_MEMORY ());
    this->reactor ()->notify (this->wh_);
  }


  void
  Sender_exec_i::get_started (void)
  {
    try
      {
        if (this->wh_)
          {
            delete this->wh_;
            this->wh_ = 0;
          }
        ACE_NEW_THROW_EX (this->wh_,
                          WriteHandler (*this),
                          ::CORBA::NO_MEMORY ());
        this->reactor ()->notify (this->wh_);
      }
    catch (const ::CORBA::Exception& ex)
      {
        ex._tao_print_exception ("Exception caught:");
        ACE_ERROR ((LM_ERROR,
          ACE_TEXT ("ERROR: get_started : Exception caught\n")));
      }
    catch (...)
      {
        ACE_ERROR ((LM_ERROR,
          ACE_TEXT ("ERROR: get_started : Unknown exception caught\n")));
      }
  }

  void
  Sender_exec_i::start (void)
  {
    ::QCTQ_Test::QueryConditionTestConnector::Writer_var writer =
      this->ciao_context_->get_connection_info_write_data ();
    TwoQueriesStarter_var starter =
      this->ciao_context_->get_connection_start_reader ();

    if (! ::CORBA::is_nil (starter.in ()))
      {
        starter->set_reader_properties (this->keys_, this->iterations_);
      }
    else
      {
        ACE_ERROR ((LM_ERROR, ACE_TEXT ("ERROR: Unable to start the reader\n")));
        return;
      }
    for (CORBA::UShort iter_key = 1; iter_key < this->keys_ + 1; ++iter_key)
      {
        char key[7];
        QueryConditionTest new_key;
        ACE_OS::sprintf (key, "KEY_%d", iter_key);
        new_key.symbol = CORBA::string_dup(key);
        CORBA::UShort iter = ((this->run_ - 1) * this->iterations_) + 1;
        while (iter < this->run_ * this->iterations_ + 1)
          {
            new_key.iteration = iter;
            writer->write_one (new_key, ::DDS::HANDLE_NIL);
            ACE_DEBUG ((LM_DEBUG, ACE_TEXT ("Written key <%C> with <%d>\n"),
                        key, iter));
            ++iter;
          }
      }
    ACE_OS::sleep (2);
    starter->start_read (this->run_);
  }

  // Component attributes and port operations.
  ::CCM_DDS::CCM_ConnectorStatusListener_ptr
  Sender_exec_i::get_connector_status (void)
  {
    return new ConnectorStatusListener_exec_i  (*this);
  }

  ::CCM_TwoQueriesRestarter_ptr
  Sender_exec_i::get_restart_writer (void)
  {
    if ( ::CORBA::is_nil (this->ciao_restart_writer_.in ()))
      {
        restart_writer_exec_i *tmp = 0;
        ACE_NEW_RETURN (
          tmp,
          restart_writer_exec_i (
            this->ciao_context_.in (),
            *this),
            ::CCM_TwoQueriesRestarter::_nil ());

          this->ciao_restart_writer_ = tmp;
      }

    return
      ::CCM_TwoQueriesRestarter::_duplicate (
        this->ciao_restart_writer_.in ());
  }

  ::CORBA::UShort
  Sender_exec_i::keys (void)
  {
    return this->keys_;
  }

  void
  Sender_exec_i::keys (
    const ::CORBA::UShort keys)
  {
    this->keys_ = keys;
  }

  // Operations from Components::SessionComponent.

  void
  Sender_exec_i::set_session_context (
    ::Components::SessionContext_ptr ctx)
  {
    this->ciao_context_ =
      ::QCTQ_Test::CCM_Sender_Context::_narrow (ctx);

    if ( ::CORBA::is_nil (this->ciao_context_.in ()))
      {
        throw ::CORBA::INTERNAL ();
      }
  }

  void
  Sender_exec_i::configuration_complete (void)
  {
    /* Your code here. */
  }

  void
  Sender_exec_i::ccm_activate (void)
  {
  }

  void
  Sender_exec_i::ccm_passivate (void)
  {
    /* Your code here. */
  }

  void
  Sender_exec_i::ccm_remove (void)
  {
    /* Your code here. */
  }

  extern "C" SENDER_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_QCTQ_Test_Sender_Impl (void)
  {
    ::Components::EnterpriseComponent_ptr retval =
      ::Components::EnterpriseComponent::_nil ();

    ACE_NEW_NORETURN (
      retval,
      Sender_exec_i);

    return retval;
  }
}
