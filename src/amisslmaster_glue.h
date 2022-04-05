
/* This file was generated by idltool 53.34. Do not edit */


/***************************************************************************/

#ifndef GLUE_AMISSLMASTER_H
#define GLUE_AMISSLMASTER_H 1

#define PROTO_AMISSLMASTER_H // Don't include protos
#ifndef EXEC_LIBRARIES_H
#include <exec/libraries.h>
#endif
#
#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

#if defined(__amigaos4__)
struct AmiSSLMasterIFace;
#define __IFACE_OR_BASE struct AmiSSLMasterIFace *Self
#else
#define __IFACE_OR_BASE struct Library *Self
#endif

LONG SAVEDS ASM LIB_InitAmiSSLMaster(REG(a6, __IFACE_OR_BASE), REG(d0, LONG APIVersion), REG(d1, LONG UsesOpenSSLStructs));
struct Library * SAVEDS ASM LIB_OpenAmiSSL(REG(a6, __IFACE_OR_BASE));
void SAVEDS ASM LIB_CloseAmiSSL(REG(a6, __IFACE_OR_BASE));
struct Library * SAVEDS ASM LIB_OpenAmiSSLCipher(REG(a6, __IFACE_OR_BASE), REG(d0, LONG Cipher));
void SAVEDS ASM LIB_CloseAmiSSLCipher(REG(a6, __IFACE_OR_BASE), REG(a0, struct Library * CipherBase));
LONG SAVEDS ASM LIB_OpenAmiSSLTagList(REG(a6, __IFACE_OR_BASE), REG(d0, LONG APIVersion), REG(a0, struct TagItem * tagList));
LONG SAVEDS ASM LIB_OpenAmiSSLTags(REG(a6, __IFACE_OR_BASE), REG(d0, LONG APIVersion), ...);

#if defined(SDI_LIB_H)
  #define SDI_LIBVECTOR \
    LFUNC_FAS(InitAmiSSLMaster) \
    LFUNC_FA_(OpenAmiSSL) \
    LFUNC_FA_(CloseAmiSSL) \
    LFUNC_FA_(OpenAmiSSLCipher) \
    LFUNC_FA_(CloseAmiSSLCipher) \
    LFUNC_FA_(OpenAmiSSLTagList) \
    LFUNC_VA_(OpenAmiSSLTags)
#endif /* SDI_LIB_H */

#endif /* GLUE_AMISSLMASTER_H */
