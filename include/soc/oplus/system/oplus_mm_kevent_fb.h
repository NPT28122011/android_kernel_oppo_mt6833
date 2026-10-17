/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPLUS_MM_KEVENT_FB_H_
#define _OPLUS_MM_KEVENT_FB_H_

#include <linux/types.h>

/* Stub functions an toàn tuyệt đối cho DRM Display */
static inline int mm_fb_kevent(const char *tag, ...)
{
    return 0;
}

static inline int oplus_kevent_fb_str(int id, const char *str)
{
    return 0;
}

static inline int oplus_is_critical_process(int pid)
{
    return 0;
}

#endif /* _OPLUS_MM_KEVENT_FB_H_ */
