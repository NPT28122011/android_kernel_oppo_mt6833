/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _SENSOR_DEVINFO_H_
#define _SENSOR_DEVINFO_H_

#include <linux/types.h>

/* Cấu trúc dữ liệu dự phòng cho cảm biến */
struct sensor_devinfo_data {
    int sensor_type;
    char name[32];
    char vendor[32];
};

/* Toàn bộ các hàm get/put/register/init trả về 0 an toàn cho Nanohub */
static inline int sensor_devinfo_init(void) { return 0; }
static inline int sensor_devinfo_get(int type, void *buf) { return 0; }
static inline int sensor_devinfo_put(int type, void *buf) { return 0; }
static inline int sensor_devinfo_register(void *dev) { return 0; }
static inline int sensor_devinfo_unregister(void *dev) { return 0; }
static inline int sensor_devinfo_get_data(void *data) { return 0; }
static inline int sensor_devinfo_set(int type, void *data) { return 0; }
static inline int sensor_devinfo_read(void *buf, size_t size) { return 0; }

#endif /* _SENSOR_DEVINFO_H_ */
