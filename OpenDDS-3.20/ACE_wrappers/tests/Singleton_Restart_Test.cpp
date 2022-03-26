#define ACE_DOESNT_DEFINE_MAIN

#include "test_config.h"

#include "ace/Init_ACE.h"
#include "ace/Singleton.h"

typedef ACE_Singleton<int, ACE_SYNCH_RECURSIVE_MUTEX> Singleton;

int main ()
{
  ACE::init ();
  ACE_START_TEST (ACE_TEXT ("Singleton_Restart_Test"));

  *Singleton::instance () = 23;

  ACE::fini ();
  ACE::init ();
  if (ACE_LOG_MSG->open (program, ACE_Log_Msg::OSTREAM |
                         ACE_Log_Msg::VERBOSE_LITE) != 0)
    ACE_ERROR_RETURN ((LM_ERROR, ACE_TEXT ("%p\n"),
                       ACE_TEXT ("open log_msg failed")), -1);
  if (ace_file_stream::instance()->set_output (program, 1) != 0)
    ACE_ERROR_RETURN ((LM_ERROR, ACE_TEXT ("%p\n"),
                       ACE_TEXT ("set_output failed")), -1);

  *Singleton::instance () = 32;

  ACE_END_TEST;
  ACE::fini ();

  return 0;
}
