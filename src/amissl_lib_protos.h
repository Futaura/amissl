#ifndef _LIB_PROTOS_H
#define _LIB_PROTOS_H

#define __NOLIBBASE__
#define __NOGLOBALIFACE__
#include <proto/amissl.h>

#include <internal/amissl_compiler.h>

#if defined(__amigaos4__)
#define __BASE_OR_IFACE_TYPE	struct AmiSSLIFace *
#define __BASE_OR_IFACE_VAR		IAmiSSL
#else
#define __BASE_OR_IFACE_TYPE	struct Library *
#define __BASE_OR_IFACE_VAR		AmiSSLBase
#endif
#define __BASE_OR_IFACE			__BASE_OR_IFACE_TYPE __BASE_OR_IFACE_VAR

struct AmiSSLInitStruct;
struct TagItem;
LIBPROTO(InternalInitAmiSSL, void, REG(a6, UNUSED __BASE_OR_IFACE), REG(a0, struct AmiSSLInitStruct * amisslinit));
LIBPROTO(InitAmiSSLA, long, REG(a6, UNUSED __BASE_OR_IFACE), REG(a0, struct TagItem * tagList));
LIBPROTO(CleanupAmiSSLA, long, REG(a6, UNUSED __BASE_OR_IFACE), REG(a0, struct TagItem * tagList));

#ifdef __amigaos4__
LIBPROTOVA(InitAmiSSL, long, REG(a6, UNUSED __BASE_OR_IFACE), ...);
LIBPROTOVA(CleanupAmiSSL, long, REG(a6, UNUSED __BASE_OR_IFACE), ...);
#endif /* __amigaos4__ */

LIBPROTO(__UserLibInit, int, REG(a6, __BASE_OR_IFACE));
LIBPROTO(__UserLibExpunge, void, REG(a6, __BASE_OR_IFACE));
LIBPROTO(__UserLibCleanup, void, REG(a6, __BASE_OR_IFACE));

struct LibraryHeader;
ULONG freeBase(struct LibraryHeader *lib);
ULONG initBase(struct LibraryHeader *lib);
ULONG closeBase(struct LibraryHeader *lib);
ULONG openBase(struct LibraryHeader *lib);

#endif /* _LIB_PROTOS_H */