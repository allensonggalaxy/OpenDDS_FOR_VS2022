// $Id$

// The following configuration file is designed to work for LynxOS 178,
// based on lynxos 2.3 originally with g++ 2.9

#ifndef ACE_CONFIG_LYNXOS_178_H
#define ACE_CONFIG_LYNXOS_178_H
#include /**/ "ace/pre.h"

#include "ace/config-lynxos.h"

#undef ACE_HAS_ALLOCA
#undef ACE_HAS_GETIFADDRS
#undef ACE_HAS_PTHREAD_GETCONCURRENCY
#undef ACE_HAS_PTHREAD_SETCONCURRENCY
#undef ACE_HAS_PTHREADS_UNIX98_EXT
#undef ACE_HAS_SOCKADDR_MSG_NAME
#undef ACE_HAS_SOCKLEN_T
#undef ACE_HAS_SYS_FILIO_H
#undef ACE_HAS_SYS_SOCKIO_H
#undef ACE_HAS_SYSCTL
#undef ACE_HAS_TERMIOS

#undef ACE_LACKS_PUTENV_PROTOTYPE

#define ACE_HAS_LYNXOS_178
#define ACE_HAS_NONCONST_GETBY
#define ACE_HAS_SIGNED_IOVLEN

#define ACE_LACKS_ADDRINFO
#define ACE_LACKS_CUSERID
#define ACE_LACKS_FILELOCKS
#define ACE_LACKS_FGETS
#define ACE_LACKS_GAI_STRERROR
#define ACE_LACKS_GETADDRINFO
#define ACE_LACKS_GETHOSTENT
#define ACE_LACKS_GETNAMEINFO
#define ACE_LACKS_IN_ADDR_T
#define ACE_LACKS_INET_ATON
#define ACE_LACKS_INET_PTON
#define ACE_LACKS_INET_NTOP
#define ACE_LACKS_LOG2
#define ACE_LACKS_PENTIUM_RDTSC
#define ACE_LACKS_PTHREAD_CLEANUP
#define ACE_LACKS_RAND_R
#define ACE_LACKS_REGEX_H
#define ACE_LACKS_RENAME
#define ACE_LACKS_SNPRINTF
#define ACE_LACKS_STATIC_DATA_MEMBER_TEMPLATES
#define ACE_LACKS_STRTOK_R
#define ACE_LACKS_SYS_SELECT_H
#define ACE_LACKS_TEMPNAM
#define ACE_LACKS_THREAD_PROCESS_SCOPING
#define ACE_LACKS_TMPNAM

#if ACE_MT_SAFE == 1
  // Platform supports threads.
# define ACE_HAS_NONCONST_PTHREAD_SIGMASK
# define ACE_HAS_PTHREAD_SIGMASK_PROTOTYPE
#endif /* ACE_MT_SAFE */

#include /**/ "ace/post.h"
#endif /* ACE_CONFIG_LYNXOS_178_H */
