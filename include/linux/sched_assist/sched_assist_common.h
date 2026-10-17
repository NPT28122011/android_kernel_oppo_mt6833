/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _SCHED_ASSIST_COMMON_H_
#define _SCHED_ASSIST_COMMON_H_

#include <linux/types.h>
#include <linux/sched.h>

#define SA_SLIDE        0
#define SA_INPUT        1
#define SA_LAUNCHER_SI  2
#define SA_ANIM         3

__attribute__((weak)) int sysctl_sched_assist_enabled = 0;

#ifndef test_task_ux
static inline bool test_task_ux(struct task_struct *task) { return false; }
#endif

#ifndef is_sf
static inline bool is_sf(struct task_struct *task) { return false; }
#endif

static inline int sched_assist_scene(int scene) { return 0; }

#endif /* _SCHED_ASSIST_COMMON_H_ */
