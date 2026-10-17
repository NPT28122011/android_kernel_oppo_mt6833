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

/* Bảng hằng số bo mạch PCB khớp chính xác dòng 5360 của mtk_battery.c */
#define PCB_VERSION_PRE_EVB     0
#define PCB_VERSION_EVB         1
#define PCB_VERSION_EVT         2
#define PCB_VERSION_EVT1        2
#define PCB_VERSION_EVT2        3
#define PCB_VERSION_DVT         4
#define PCB_VERSION_DVT1        4
#define PCB_VERSION_DVT2        5
#define PCB_VERSION_PVT         6
#define PCB_VERSION_MP          7

#define get_project()                   (21102)
#define is_project(p)                   ((p) == 21102)
#define is_oplus_project(p)             ((p) == 21102)
#define is_eng_project()                (0)
#define is_confidential_project()       (0)
#define is_ocp_project(p)               (0)

/* Trả về PCB_VERSION_MP (máy thương mại xuất xưởng) chuẩn xác */
static inline int get_PCB_Version(void)              { return PCB_VERSION_MP; }

static inline const char *get_project_name(void)     { return "21102"; }
static inline const char *get_ocp_project_name(void) { return "21102"; }
static inline const char *get_project_prjname(void)  { return "21102"; }
static inline int get_eng_version(void)              { return 0; }
static inline int get_project_eng_version(void)      { return 0; }

#endif /* _OPPO_PROJECT_H_ */