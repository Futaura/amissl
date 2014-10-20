#ifndef BASE_H
#define BASE_H 1

#ifndef EXEC_LIBRARIES_H
#include <exec/libraries.h>
#endif

#ifndef EXEC_SEMAPHORES_H
#include <exec/semaphores.h>
#endif

#ifndef DOS_DOS_H
#include <dos/dos.h>
#endif

/***************************************************************************/

struct LibraryHeader
{
  struct Library          libBase;
  UWORD                   pad;
  BPTR                    segList;
  struct SignalSemaphore  libSem;
  APTR                    dataSeg;
  #if defined(MULTIBASE)
  ULONG                   dataSize;
  struct LibraryHeader    *parent;
  #endif
  #if defined(BASEREL)
  #if defined(__amigaos3__)
  APTR                    a4;
  #endif
  #endif
};

#define __NOLIBBASE__
#include <proto/amisslmaster.h>

/***************************************************************************/

extern struct LibraryHeader *AmiSSLMasterBase;

#if defined(__amigaos4__)
#define __BASE_OR_IFACE_TYPE	struct AmiSSLMasterIFace *
#define __BASE_OR_IFACE_VAR		IAmiSSLMaster
#else
#define __BASE_OR_IFACE_TYPE	struct LibraryHeader *
#define __BASE_OR_IFACE_VAR		AmiSSLMasterBase
#endif
#define __BASE_OR_IFACE			__BASE_OR_IFACE_TYPE __BASE_OR_IFACE_VAR

/***************************************************************************/

#endif /* BASE_H */
