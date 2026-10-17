/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPLUS_GAUGE_H_
#define _OPLUS_GAUGE_H_

#include <linux/types.h>
#include <linux/device.h>

struct oplus_gauge_operations {
    int (*get_battery_mvolts)(void);
    int (*get_battery_temperature)(void);
    int (*get_batt_remaining_capacity)(void);
    int (*get_battery_soc)(void);
    int (*get_average_current)(void);
    int (*get_prev_batt_fcc)(void);
    int (*get_battery_fcc)(void);
    int (*get_battery_cc)(void);
    int (*get_battery_soh)(void);
    bool (*get_battery_authenticate)(void);
    void (*set_battery_full)(bool full);
    int (*get_prev_battery_mvolts)(void);
    int (*get_prev_battery_temperature)(void);
    int (*get_prev_battery_soc)(void);
    int (*get_prev_average_current)(void);
    int (*get_prev_batt_remaining_capacity)(void);
    int (*get_battery_mvolts_2cell_max)(void);
    int (*get_battery_mvolts_2cell_min)(void);
    int (*get_prev_battery_mvolts_2cell_max)(void);
    int (*get_prev_battery_mvolts_2cell_min)(void);
    int (*update_battery_dod0)(void);
    int (*update_soc_smooth_parameter)(void);
};

struct oplus_gauge_chip {
    struct oplus_gauge_operations *gauge_ops;
    struct device *dev;
};

static inline int oplus_gauge_init(struct oplus_gauge_chip *chip) { return 0; }

extern int force_get_tbat(bool update);
static inline int oplus_gauge_get_batt_temperature(void)
{
    return force_get_tbat(true) * 10;
}
static inline int oplus_gauge_get_batt_current(void)
{
    return 0;
}

#endif /* _OPLUS_GAUGE_H_ */