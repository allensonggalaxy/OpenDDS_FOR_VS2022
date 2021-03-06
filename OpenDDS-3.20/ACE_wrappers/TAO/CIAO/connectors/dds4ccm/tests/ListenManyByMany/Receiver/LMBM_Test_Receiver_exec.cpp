// -*- C++ -*-
// $Id$

#include "LMBM_Test_Receiver_exec.h"
#include "ace/Log_Msg.h"
#include "dds4ccm/impl/dds4ccm_conf.h"

namespace CIAO_LMBM_Test_Receiver_Impl
{
  //============================================================
  // ListenManyByManyTest_Listener_exec_i
  //============================================================
  ListenManyByManyTest_Listener_exec_i::ListenManyByManyTest_Listener_exec_i (
                                              Atomic_ULong &received_one_by_one,
                                              Atomic_ULong &received_many_by_many)
    : received_one_by_one_ (received_one_by_one),
      received_many_by_many_ (received_many_by_many)
  {
  }

  ListenManyByManyTest_Listener_exec_i::~ListenManyByManyTest_Listener_exec_i (void)
  {
  }

  void
  ListenManyByManyTest_Listener_exec_i::on_one_data (
                                  const ListenManyByManyTest & /*an_instance*/,
                                  const ::CCM_DDS::ReadInfo & /*info*/)
  {
    // Just count; this value is checked on ccm_remove.
    ++this->received_one_by_one_;
  }

  void
  ListenManyByManyTest_Listener_exec_i::on_many_data (
                                  const ListenManyByManyTestSeq & an_instance,
                                  const ::CCM_DDS::ReadInfoSeq & info)
  {
    if (an_instance.length () == 0)
      {
        ACE_ERROR ((LM_ERROR, "ERROR: ListenManyByManyTest_Listener_exec_i::on_many_data:"
                               "instance sequence length is nil\n"));
        return;
      }
    for (CORBA::ULong i = 0 ; i < info.length(); ++i)
      {
        ACE_DEBUG ((LM_DEBUG, "ListenManyByManyTest_Listener_exec_i::on_many_data:"
                               "key <%C> - iteration <%d>\n",
                               an_instance[i].key.in (),
                               an_instance[i].iteration));
        if (info[i].instance_handle == ::DDS::HANDLE_NIL)
          {
            ACE_ERROR ((LM_ERROR, "ERROR: ListenManyByManyTest_Listener_exec_i::on_many_data:"
                                "instance handle %d seems to be nil"
                                "key <%C> - iteration <%d>\n",
                                 i,
                                 an_instance[i].key.in (),
                                 an_instance[i].iteration));
          }
        if (info[i].source_timestamp.sec == 0 &&
            info[i].source_timestamp.nanosec == 0)
          {
            ACE_ERROR ((LM_ERROR, "ERROR: ListenManyByManyTest_Listener_exec_i::on_one_data: "
                                "source timestamp seems to be invalid (nil) "
                                "key <%C> - iteration <%d>\n",
                                an_instance[i].key.in (),
                                an_instance[i].iteration));
          }
      }
    this->received_many_by_many_ += an_instance.length ();
  }

  //============================================================
  // Receiver_exec_i
  //============================================================
  Receiver_exec_i::Receiver_exec_i (void)
    : received_one_by_one_ (0),
      received_many_by_many_ (0),
      iterations_ (10),
      keys_ (5)
  {
  }

  Receiver_exec_i::~Receiver_exec_i (void)
  {
  }

  void
  Receiver_exec_i::start ()
  {
    ::CCM_DDS::DataListenerControl_var dlc =
        this->context_->get_connection_info_listen_data_control ();
    dlc->mode (::CCM_DDS::MANY_BY_MANY);
  }

  ::LMBM_Test::ListenManyByManyTestConnector::CCM_Listener_ptr
  Receiver_exec_i::get_info_listen_data_listener (void)
  {
    return new ListenManyByManyTest_Listener_exec_i (
                this->received_one_by_one_,
                this->received_many_by_many_);
  }

  ::CCM_DDS::CCM_PortStatusListener_ptr
  Receiver_exec_i::get_info_listen_status (void)
  {
    return ::CCM_DDS::CCM_PortStatusListener::_nil ();
  }

  ::CCM_DDS::CCM_ConnectorStatusListener_ptr
  Receiver_exec_i::get_info_listen_connector_status (void)
  {
    return::CCM_DDS::CCM_ConnectorStatusListener::_nil ();
  }

  ::CORBA::UShort
  Receiver_exec_i::iterations (void)
  {
    return this->iterations_;
  }

  void
  Receiver_exec_i::iterations (::CORBA::UShort iterations)
  {
    this->iterations_ = iterations;
  }

  ::CORBA::UShort
  Receiver_exec_i::keys (void)
  {
    return this->keys_;
  }

  void
  Receiver_exec_i::keys (::CORBA::UShort keys)
  {
    this->keys_ = keys;
  }

  void
  Receiver_exec_i::set_session_context (
    ::Components::SessionContext_ptr ctx)
  {
    this->context_ =
      ::LMBM_Test::CCM_Receiver_Context::_narrow (ctx);
    if ( ::CORBA::is_nil (this->context_.in ()))
      {
        throw ::CORBA::INTERNAL ();
      }
  }

  void
  Receiver_exec_i::configuration_complete (void)
  {
  }

  void
  Receiver_exec_i::ccm_activate (void)
  {
    start ();
  }

  void
  Receiver_exec_i::ccm_passivate (void)
  {
  }

  void
  Receiver_exec_i::ccm_remove (void)
  {
    CORBA::ULong const expected = this->keys_ * this->iterations_;
    if (this->received_many_by_many_.value () == 0)
      {
        ACE_ERROR ((LM_ERROR, "ERROR: MANY_BY_MANY: "
                               "Didn't receive samples on many_by_many "
                               "callback while mode is MANY_BY_MANY "
                               "expected <%u> - received <%u>\n",
                               expected,
                               this->received_many_by_many_.value ()));
      }
    else if (expected != this->received_many_by_many_.value ())
      {
        ACE_ERROR ((LM_ERROR, "ERROR: MANY_BY_MANY: "
                               "Didn't receive the expected "
                               "number of samples on many_by_many "
                               "callback while mode is MANY_BY_MANY "
                               "expected <%u> - received <%u>\n",
                               expected,
                               this->received_many_by_many_.value ()));
      }
    if (this->received_one_by_one_.value () > 0)
      {
        ACE_ERROR ((LM_ERROR, "ERROR: MANY_BY_MANY: "
                               "Received samples on one_by_one "
                               "callback while mode is MANY_BY_MANY "
                               "expected <0> - received <%u>\n",
                               this->received_one_by_one_.value ()));
      }
    if (this->received_one_by_one_.value () == 0   &&
        this->received_many_by_many_.value () > 0)
      {
        ACE_DEBUG ((LM_DEBUG, "MANY_BY_MANY: "
                                "Received only data on "
                                "many_by_many callback. "
                                "Test passed!\n"));
      }
  }

  extern "C" RECEIVER_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_LMBM_Test_Receiver_Impl (void)
  {
    ::Components::EnterpriseComponent_ptr retval =
      ::Components::EnterpriseComponent::_nil ();

    ACE_NEW_NORETURN (
      retval,
      Receiver_exec_i);

    return retval;
  }
}
