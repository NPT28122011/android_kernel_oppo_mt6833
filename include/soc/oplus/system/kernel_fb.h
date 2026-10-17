/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _KERNEL_FB_H_
#define _KERNEL_FB_H_

#include <linux/types.h>

#ifndef FB_SENSOR
#define FB_SENSOR               0
#endif

#ifndef FB_SENSOR_ID_CRASH
#define FB_SENSOR_ID_CRASH      0
#endif

static inline int oplus_kevent_fb_str(int id, int event, const char *str) { return 0; }
static inline int oplus_kernel_fb(int tag, ...) { return 0; }
static inline int kernel_fb_report(int tag, ...) { return 0; }

#endif /* _KERNEL_FB_H_ */