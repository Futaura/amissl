#ifndef INLINE4_AMISSLMASTER_H
#define INLINE4_AMISSLMASTER_H

/*
** This file was auto generated by idltool 53.34.
**
** It provides compatibility to OS3 style library
** calls by substituting functions.
**
** Do not edit manually.
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

#include <interfaces/amisslmaster.h>

/* Inline macros for Interface "main" */
#define InitAmiSSLMaster(APIVersion, UsesOpenSSLStructs) IAmiSSLMaster->InitAmiSSLMaster((APIVersion), (UsesOpenSSLStructs))
#define OpenAmiSSL() IAmiSSLMaster->OpenAmiSSL()
#define CloseAmiSSL() IAmiSSLMaster->CloseAmiSSL()
#define OpenAmiSSLCipher(Cipher) IAmiSSLMaster->OpenAmiSSLCipher((Cipher))
#define CloseAmiSSLCipher(CipherBase) IAmiSSLMaster->CloseAmiSSLCipher((CipherBase))
#define OpenAmiSSLTagList(APIVersion, tagList) IAmiSSLMaster->OpenAmiSSLTagList((APIVersion), (tagList))
#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (__GNUC__ >= 3)
#define OpenAmiSSLTags(...) IAmiSSLMaster->OpenAmiSSLTags(__VA_ARGS__)
#elif (__GNUC__ == 2 && __GNUC_MINOR__ >= 95)
#define OpenAmiSSLTags(vargs...) IAmiSSLMaster->OpenAmiSSLTags(vargs)
#endif

#endif /* INLINE4_AMISSLMASTER_H */
