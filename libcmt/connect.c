#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#ifdef __amigaos4__
#undef __USE_INLINE__
#include <proto/bsdsocket.h>
#include "libcmt.h"
#else
#define AMITCP_NEW_NAMES
#include <errno.h>
#include "multitcp.h"
#include <internal/amissl.h>
#endif

int
connect(
	int s,
	const struct sockaddr *name,
	int namelen)
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->connect(s,name,namelen);
  else return -1;
#else
  int r;

  r = MTCP_Connect((struct Socket *)s, (struct sockaddr *)name);
  if (r == -1) {
    SetAmiSSLerrno(MTCP_SockErrNo((struct Socket *)s));
  }
  return r;
#endif
}

