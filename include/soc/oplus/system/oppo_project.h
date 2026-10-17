/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPPO_PROJECT_H_
#define _OPPO_PROJECT_H_

#include <linux/types.h>

/* Bảng Project ID khớp 100% với DTB Overlay của CPH2339 */
#define PROJECT_21102           21102
#define PROJECT_21625           21625
#define PROJECT_20609           20609
#define PROJECT_21041           21041
#define PROJECT_21037           21037
#define PROJECT_210A0           210A0
#define PROJECT_20796           20796

#define get_project()                   (21102)
#define is_project(p)                   ((p) == 21102)
#define is_oplus_project(p)             ((p) == 21102)
#define is_eng_project()                (0)
#define is_confidential_project()       (0)
#define is_ocp_project(p)               (0)

/* Hàm định danh phiên bản bo mạch cho Camera Imgsensor */
static inline int get_PCB_Version(void)              { return 0; }

/* Các định danh dự án phụ trợ */
static inline const char *get_project_name(void)     { return "21102"; }
static inline const char *get_ocp_project_name(void) { return "21102"; }
static inline const char *get_project_prjname(void)  { return "21102"; }
static inline int get_eng_version(void)              { return 0; }
static inline int get_project_eng_version(void)      { return 0; }

#endif /* _OPPO_PROJECT_H_ */