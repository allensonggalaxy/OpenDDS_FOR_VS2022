// $Id$

#include "ace/Assert.h"
#include "ace/Log_Category.h"

ACE_BEGIN_VERSIONED_NAMESPACE_DECL

// The following ASSERT macro is courtesy of Alexandre Karev
// <akg@na47sun05.cern.ch>.
void
__ace_assert(const char *file, int line, const ACE_TCHAR *expression)
{
  int error = ACE_Log_Msg::last_error_adapter ();
  ACE_Log_Msg *log = ACE_Log_Msg::instance ();

  log->set (file, line, -1, error, log->restart (),
            log->msg_ostream (), log->msg_callback ());

#ifdef ACE_LACKS_VA_FUNCTIONS
#define LOG_ARGS
#else
#define LOG_ARGS(X) X
#endif
  log->log LOG_ARGS ((LM_ERROR, ACE_TEXT ("ACE_ASSERT: file %N, line %l assertion failed for '%s'.%a\n"), expression, -1));
}

ACE_END_VERSIONED_NAMESPACE_DECL
