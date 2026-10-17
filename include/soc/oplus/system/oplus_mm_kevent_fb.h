/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPLUS_MM_KEVENT_FB_H_
#define _OPLUS_MM_KEVENT_FB_H_

#include <linux/types.h>

/* ==========================================================================
 * 1. BẢNG HẰNG SỐ RATE-LIMIT OPLUS TELEMETRY (Đầy đủ theo đề xuất DeepSeek)
 * ========================================================================== */
#define MM_FB_KEY_RATELIMIT_NONE    0
#define MM_FB_KEY_RATELIMIT_10SEC   1
#define MM_FB_KEY_RATELIMIT_1MIN    2
#define MM_FB_KEY_RATELIMIT_5MIN    3
#define MM_FB_KEY_RATELIMIT_10MIN   4
#define MM_FB_KEY_RATELIMIT_30MIN   5
#define MM_FB_KEY_RATELIMIT_1H      6
#define MM_FB_KEY_RATELIMIT_6H      7
#define MM_FB_KEY_RATELIMIT_1DAY    8

/* ==========================================================================
 * 2. CƠ CHẾ STUB RỖNG TOÀN DIỆN (Nuốt trọn mọi đối số, chống Type Mismatch)
 * ========================================================================== */
#define mm_fb_kevent(...)               (0)
#define mm_fb_display_kevent(...)       (0)
#define mm_fb_audio_kevent(...)         (0)
#define oplus_kevent_fb(...)            (0)
#define oplus_kevent_fb_str(...)        (0)
#define oplus_display_kevent(...)       (0)
#define oplus_is_critical_process(...)  (0)

/* Định nghĩa hàm phụ trợ nếu có chỗ gán con trỏ hàm (Function Pointer Callback) */
static inline int mm_fb_kevent_stub(int type, ...) { return 0; }
static inline int mm_fb_display_kevent_stub(const char *tag, int key, const char *fmt, ...) { return 0; }

#endif /* _OPLUS_MM_KEVENT_FB_H_ */