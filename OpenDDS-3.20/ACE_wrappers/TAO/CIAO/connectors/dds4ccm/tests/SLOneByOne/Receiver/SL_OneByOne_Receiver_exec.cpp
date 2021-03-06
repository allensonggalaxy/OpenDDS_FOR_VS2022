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

#include "SL_OneByOne_Receiver_exec.h"

#include "dds4ccm/impl/dds4ccm_conf.h"

#define ON_CREATION_EXPECTED 4
#define ON_ONE_UPDATE_EXPECTED 4
#define ON_DELETION_EXPECTED 4

namespace CIAO_SL_OneByOne_Receiver_Impl
{

  /**
   * Facet Executor Implementation Class: info_out_data_listener_exec_i
   */

  info_out_data_listener_exec_i::info_out_data_listener_exec_i (
        ::SL_OneByOne::CCM_Receiver_Context_ptr ctx,
        Atomic_Long &on_many_updates,
        Atomic_Long &on_creation,
        Atomic_Long &on_one_update,
        Atomic_Long &on_deletion,
        ACE_Thread_ID &thread_id)
    : ciao_context_ (
        ::SL_OneByOne::CCM_Receiver_Context::_duplicate (ctx))
      , on_many_updates_ (on_many_updates)
      , on_creation_ (on_creation)
      , on_one_update_ (on_one_update)
      , on_deletion_ (on_deletion)
      , thread_id_  (thread_id)
  {
  }

  info_out_data_listener_exec_i::~info_out_data_listener_exec_i (void)
  {
  }

  // Operations from ::SL_OneByOne::SL_OneByOneConnector::StateListener

  void
  info_out_data_listener_exec_i::on_creation (const ::TestTopic & datum,
  const ::CCM_DDS::ReadInfo & info)
  {
    ACE_Thread_ID t_id;
    this->thread_id_ = t_id;
    if (!datum.key.in() == 0 &&
        info.instance_status == CCM_DDS::INSTANCE_CREATED)
      {
        ++this->on_creation_;
      }
    ACE_DEBUG ((LM_DEBUG, ACE_TEXT ("StateListener_exec_i::on_creation - ")
                          ACE_TEXT ("Received sample: key <%C> - iteration <%d>\n"),
                          datum.key.in (),
                          datum.x));
  }

  void
  info_out_data_listener_exec_i::on_one_update (const ::TestTopic & datum,
  const ::CCM_DDS::ReadInfo & info)
  {
    if (info.instance_status != CCM_DDS::INSTANCE_UPDATED)
      {
        ACE_ERROR ((LM_ERROR,
                    ACE_TEXT ("ERROR: did not receive the expected info.status ")
                    ACE_TEXT ("'CCM_DDS::INSTANCE_UPDATED' ")
                    ACE_TEXT ("with operation 'on_one_update' ")
                    ACE_TEXT ("from StateListener in Receiver\n")));

      }

    ACE_DEBUG ((LM_DEBUG, ACE_TEXT ("StateListener_exec_i::on_one_update - ")
                          ACE_TEXT ("Received sample: key <%C> - iteration <%d>\n"),
                          datum.key.in (),
                          datum.x));

    if (!datum.key.in() == 0 &&
        info.instance_status == CCM_DDS::INSTANCE_UPDATED)
      {
        ++this->on_one_update_;
      }
  }

  void
  info_out_data_listener_exec_i::on_many_updates (const ::TestTopicSeq & /* data */,
  const ::CCM_DDS::ReadInfoSeq & infos)
  {
    this->on_many_updates_ += infos.length ();
  }

  void
  info_out_data_listener_exec_i::on_deletion (const ::TestTopic & datum,
  const ::CCM_DDS::ReadInfo & info)
  {
    if (info.instance_status != CCM_DDS::INSTANCE_DELETED)
      {
        ACE_ERROR ((LM_ERROR,
                    ACE_TEXT ("ERROR: did not receive the expected info.status ")
                    ACE_TEXT ("'CCM_DDS::INSTANCE_DELETED' ")
                    ACE_TEXT ("with operation 'on_deletion' ")
                    ACE_TEXT ("from StateListener in Receiver\n")));

      }
    else
      {
        // Because of the settings <serialize_key_with_dispose> and
        // <propagate_dispose_of_unregistered_instances> in the QoS , we expect
        // an existing datum.key
        // Since these are RTI DDS specific QOS settings, we only need to test
        // this in case RTI DDS
#if (CIAO_DDS4CCM_NDDS==1)
        if ((ACE_OS::strncmp (datum.key.in(), "KEY", 3) == 0  ) ||
            (ACE_OS::strncmp (datum.key.in(), "many", 4) == 0  ))
          {
            ACE_DEBUG ((LM_DEBUG, ACE_TEXT ("Statelistener:on_deletion : ")
                        ACE_TEXT ("Received datum for <%C> \n"),
                        datum.key.in ()));
            ++this->on_deletion_;
           }
        else
          {
            ACE_ERROR ((LM_ERROR,
                        ACE_TEXT ("ERROR Statelistener:on_deletion : did not ")
                        ACE_TEXT ("receive the expected datum, received <%C>")
                        ACE_TEXT (", expected <KEY_.> or <many_.>\n"),
                        datum.key.in ()));
          }
#else
        ACE_UNUSED_ARG (datum);
        ACE_DEBUG ((LM_DEBUG, ACE_TEXT ("Statelistener:on_deletion : ")
                    ACE_TEXT ("Received on_deletion event\n")));
        ++this->on_deletion_;
#endif
      }
  }

  /**
   * Facet Executor Implementation Class: info_out_status_exec_i
   */

  info_out_status_exec_i::info_out_status_exec_i (
        ::SL_OneByOne::CCM_Receiver_Context_ptr ctx)
    : ciao_context_ (
        ::SL_OneByOne::CCM_Receiver_Context::_duplicate (ctx))
  {
  }

  info_out_status_exec_i::~info_out_status_exec_i (void)
  {
  }

  // Operations from ::CCM_DDS::PortStatusListener

  void
  info_out_status_exec_i::on_requested_deadline_missed (::DDS::DataReader_ptr /* the_reader */,
  const ::DDS::RequestedDeadlineMissedStatus & /* status */)
  {
    /* Your code here. */
  }

  void
  info_out_status_exec_i::on_sample_lost (::DDS::DataReader_ptr /* the_reader */,
  const ::DDS::SampleLostStatus & /* status */)
  {
    /* Your code here. */
  }

  /**
   * Component Executor Implementation Class: Receiver_exec_i
   */

  Receiver_exec_i::Receiver_exec_i (void)
    : on_many_updates_ (0),
      updater_data_ (0),
      on_creation_ (0),
      on_one_update_ (0),
      on_deletion_ (0),
      thread_id_listener_ (0, 0)
  {
  }

  Receiver_exec_i::~Receiver_exec_i (void)
  {
  }

  // Supported operations and attributes.

  // Component attributes and port operations.

  ::SL_OneByOne::SL_OneByOneConnector::CCM_StateListener_ptr
  Receiver_exec_i::get_info_out_data_listener (void)
  {
    if ( ::CORBA::is_nil (this->ciao_info_out_data_listener_.in ()))
      {
        info_out_data_listener_exec_i *tmp = 0;
        ACE_NEW_RETURN (
          tmp,
          info_out_data_listener_exec_i (
            this->ciao_context_.in (),
            this->on_many_updates_,
            this->on_creation_,
            this->on_one_update_,
            this->on_deletion_,
            this->thread_id_listener_),
          ::SL_OneByOne::SL_OneByOneConnector::CCM_StateListener::_nil ());

          this->ciao_info_out_data_listener_ = tmp;
      }

    return
      ::SL_OneByOne::SL_OneByOneConnector::CCM_StateListener::_duplicate (
        this->ciao_info_out_data_listener_.in ());
  }

  ::CCM_DDS::CCM_PortStatusListener_ptr
  Receiver_exec_i::get_info_out_status (void)
  {
    if ( ::CORBA::is_nil (this->ciao_info_out_status_.in ()))
      {
        info_out_status_exec_i *tmp = 0;
        ACE_NEW_RETURN (
          tmp,
          info_out_status_exec_i (
            this->ciao_context_.in ()),
            ::CCM_DDS::CCM_PortStatusListener::_nil ());

          this->ciao_info_out_status_ = tmp;
      }

    return
      ::CCM_DDS::CCM_PortStatusListener::_duplicate (
        this->ciao_info_out_status_.in ());
  }

  // Operations from Components::SessionComponent.

  void
  Receiver_exec_i::set_session_context (
    ::Components::SessionContext_ptr ctx)
  {
    this->ciao_context_ =
      ::SL_OneByOne::CCM_Receiver_Context::_narrow (ctx);

    if ( ::CORBA::is_nil (this->ciao_context_.in ()))
      {
        throw ::CORBA::INTERNAL ();
      }
  }

  void
  Receiver_exec_i::configuration_complete (void)
  {
    /* Your code here. */
  }

  void
  Receiver_exec_i::ccm_activate (void)
  {
    ::CCM_DDS::StateListenerControl_var lc =
    this->ciao_context_->get_connection_info_out_data_control ();

    if (::CORBA::is_nil (lc.in ()))
      {
         ACE_ERROR ((LM_ERROR, ACE_TEXT ("Error:  Listener control receptacle is null!\n")));
        throw ::CORBA::INTERNAL ();
      }
    lc->mode (::CCM_DDS::ONE_BY_ONE);
  }

  void
  Receiver_exec_i::ccm_passivate (void)
  {
    /* Your code here. */
  }

  void
  Receiver_exec_i::ccm_remove (void)
  {
    if (this->on_many_updates_.value () != 0)
      {
         ACE_ERROR ((LM_ERROR,
                     ACE_TEXT ("ERROR: Received an unexpected ")
                     ACE_TEXT ("number of samples on 'on_many_updates' ")
                     ACE_TEXT ("expected <0> - received <%d>\n"),
                     this->on_many_updates_.value ()));
      }
    else
      {
        ACE_DEBUG ((LM_DEBUG,
                    ACE_TEXT ("OK: Received the expected ")
                    ACE_TEXT ("number of samples on 'on_many_updates' ")
                    ACE_TEXT ("expected <0> - received <%d>\n"),
                    this->on_many_updates_.value ()));
      }
    if (this->on_creation_.value () != ON_CREATION_EXPECTED)
      {
         ACE_ERROR ((LM_ERROR,
                     ACE_TEXT ("ERROR: didn't receive the expected ")
                     ACE_TEXT (" number of samples on 'on_creation' ")
                     ACE_TEXT ("expected <%d> - received <%d>\n"),
                     ON_CREATION_EXPECTED,
                     this->on_creation_.value ()));
      }
    else
      {
        ACE_DEBUG ((LM_DEBUG,
                    ACE_TEXT ("OK: Received the expected ")
                    ACE_TEXT ("number of samples on 'on_creation' ")
                     ACE_TEXT ("expected <%d> - received <%d>\n"),
                     ON_CREATION_EXPECTED,
                     this->on_creation_.value ()));
      }

    if (this->on_one_update_.value () != ON_ONE_UPDATE_EXPECTED)
      {
         ACE_ERROR ((LM_ERROR,
                     ACE_TEXT ("ERROR: didn't receive the expected ")
                     ACE_TEXT (" number of samples on 'on_one_update' ")
                     ACE_TEXT ("expected <%d> - received <%d>\n"),
                     ON_ONE_UPDATE_EXPECTED,
                     this->on_one_update_.value ()));
      }
    else
      {
        ACE_DEBUG ((LM_DEBUG,
                    ACE_TEXT ("OK: Received the expected ")
                    ACE_TEXT ("number of samples on 'on_one_update' ")
                    ACE_TEXT ("expected <%d> - received <%d>\n"),
                    ON_ONE_UPDATE_EXPECTED,
                    this->on_one_update_.value ()));
      }

    if (this->on_deletion_.value () != ON_DELETION_EXPECTED)
      {
         ACE_ERROR ((LM_ERROR,
                     ACE_TEXT ("ERROR: didn't receive the expected ")
                     ACE_TEXT ("number of samples on 'on_deletion' ")
                     ACE_TEXT ("expected <%d> - received <%d>\n"),
                     ON_DELETION_EXPECTED,
                     this->on_deletion_.value ()));
      }
    else
      {
        ACE_DEBUG ((LM_DEBUG,
                    ACE_TEXT ("OK: Received the expected ")
                    ACE_TEXT ("number of samples on 'on_deletion' ")
                    ACE_TEXT ("expected <%d> - received <%d>\n"),
                    ON_DELETION_EXPECTED,
                    this->on_deletion_.value ()));
      }

    char ccm_buf [65];
    ACE_Thread_ID ccm_thread_id;
    ccm_thread_id.to_string (ccm_buf);

    char list_buf [65];
    this->thread_id_listener_.to_string (list_buf);


    if (this->thread_id_listener_.id () == 0)
      {
        ACE_ERROR ((LM_ERROR, "ERROR: "
                              "Thread ID for StatusListener not set!\n"));
      }
    #if (CIAO_DDS4CCM_CONTEXT_SWITCH == 1)
    else if (this->thread_id_listener_ == ccm_thread_id)
      {
        ACE_DEBUG ((LM_DEBUG, "OK: "
                              "Thread switch for StatusListener seems OK. "
                              "(DDS uses the CCM thread for its callback) "
                               "listener <%C> - component <%C>\n",
                              list_buf,
                              ccm_buf));
     }
    else
      {
        ACE_ERROR ((LM_ERROR, "ERROR: "
                              "Thread switch for StatusListener "
                              "doesn't seem to work! "
                              "listener <%C> - component <%C>\n",
                              list_buf,
                              ccm_buf));
      }
    #else
    else if (this->thread_id_listener_ == ccm_thread_id)
      {
        ACE_ERROR ((LM_ERROR, "ERROR: StatusListener: "
                              "DDS seems to use a CCM thread for its callback: "
                              "listener <%C> - component <%C>\n",
                              list_buf,
                              ccm_buf));
      }
    else
      {
        ACE_DEBUG ((LM_DEBUG, "OK: StatusListener: "
                              "DDS seems to use its own thread for its callback: "
                               "listener <%C> - component <%C>\n",
                              list_buf,
                              ccm_buf));
     }
    #endif
  }

  extern "C" RECEIVER_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_SL_OneByOne_Receiver_Impl (void)
  {
    ::Components::EnterpriseComponent_ptr retval =
      ::Components::EnterpriseComponent::_nil ();

    ACE_NEW_NORETURN (
      retval,
      Receiver_exec_i);

    return retval;
  }
}
