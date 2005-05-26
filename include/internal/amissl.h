#ifndef INTERNAL_AMISSL_H
#define INTERNAL_AMISSL_H

#include <exec/types.h>
#include <dos.h>
#include <time.h>
#include <internal/amissl_compiler.h>

typedef struct {
	struct Library *AmiSSLBase;
#ifdef __amigaos4__
	struct AmiSSLIFace *IAmiSSL;
#endif
	unsigned long pid;
	int errno;
	int *errno_ptr;		// If the app supplied an errno ptr
	int socket_errno_initialized;
	char *getenv_var;
	APTR stack;
	struct tm localtime_var;
	struct Library *SocketBase;
	LONG TCPIPStackType;
	struct MLinkLock *MLinkLock; // This is really ancient, but ib still supports it so...
#ifdef __amigaos4__
	struct SocketIFace *ISocket;
	struct SocketIFace **ISocketPtr;
#endif
} AMISSL_STATE;

STDARGS AMISSL_STATE *GetAmiSSLState(void);
STDARGS void SetAmiSSLerrno(int errno);
STDARGS int GetAmiSSLerrno(void);

#define SETUPSTATE() AMISSL_STATE *state = GetAmiSSLState()

#endif /* !INTERNAL_AMISSL_H */
