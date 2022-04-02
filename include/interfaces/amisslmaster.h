#ifndef AMISSLMASTER_INTERFACE_DEF_H
#define AMISSLMASTER_INTERFACE_DEF_H

/*
** This file was machine generated by idltool 53.33.
** Do not edit
*/ 

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef EXEC_EXEC_H
#include <exec/exec.h>
#endif
#ifndef EXEC_INTERFACES_H
#include <exec/interfaces.h>
#endif


#ifdef __cplusplus
#ifdef __USE_AMIGAOS_NAMESPACE__
namespace AmigaOS {
#endif
extern "C" {
#endif

struct AmiSSLMasterIFace
{
	struct InterfaceData Data;

	APICALL uint32 (*Obtain)(struct AmiSSLMasterIFace *Self);
	APICALL uint32 (*Release)(struct AmiSSLMasterIFace *Self);
	APTR Expunge_UNIMPLEMENTED;
	APTR Clone_UNIMPLEMENTED;
	APICALL LONG (*InitAmiSSLMaster)(struct AmiSSLMasterIFace *Self, LONG APIVersion, LONG UsesOpenSSLStructs);
	APICALL struct Library * (*OpenAmiSSL)(struct AmiSSLMasterIFace *Self);
	APICALL void (*CloseAmiSSL)(struct AmiSSLMasterIFace *Self);
	APICALL struct Library * (*OpenAmiSSLCipher)(struct AmiSSLMasterIFace *Self, LONG Cipher);
	APICALL void (*CloseAmiSSLCipher)(struct AmiSSLMasterIFace *Self, struct Library * CipherBase);
	APICALL LONG (*OpenAmiSSLTagList)(struct AmiSSLMasterIFace *Self, LONG APIVersion, struct TagItem * tagList);
	APICALL LONG (*OpenAmiSSLTags)(struct AmiSSLMasterIFace *Self, LONG APIVersion, ...);
};

#ifdef __cplusplus
}
#ifdef __USE_AMIGAOS_NAMESPACE__
}
#endif
#endif

#endif /* AMISSLMASTER_INTERFACE_DEF_H */
