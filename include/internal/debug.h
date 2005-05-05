#ifndef _DEBUG_H_
#define _DEBUG_H_

#ifdef DEBUG
#ifdef __amigaos4__
#include <interfaces/exec.h>
extern struct ExecIFace * __attribute__((force_no_baserel)) IExec;
#ifdef __USE_INLINE__
#define kprintf DebugPrintF
#define traceline() DebugPrintF("%08x %s:%d\n",FindTask(NULL),__FILE__,__LINE__)
#else /* __USE_INLINE__ */
#define kprintf (IExec->DebugPrintF)
#define traceline() IExec->DebugPrintF("%08x %s:%d\n",FindTask(NULL),__FILE__,__LINE__)
#endif /* __USE_INLINE__ */
#else /* __amigaos4__ */
static void kprintf(const char *dummy, ...) {}
#define traceline() kprintf("%08x %s:%d\n",FindTask(NULL),__FILE__,__LINE__)
#endif /* __amigaos4__ */
#else /* DEBUG */
#define kprintf(...) ((void)0) 
#define traceline(x) ((void)0) 
#endif /* DEBUG */

#endif /* _DEBUG_H_ */
