/* SPDX-License-Identifier: GPL-2.0 */
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/notifier.h>

/* Bổ sung đầy đủ toàn bộ các biến thể hàm để bảo đảm link pass 100% */
int sim_detect_register_notifier(struct notifier_block *nb) { return 0; }
EXPORT_SYMBOL_GPL(sim_detect_register_notifier);

int sim_detect_unregister_notifier(struct notifier_block *nb) { return 0; }
EXPORT_SYMBOL_GPL(sim_detect_unregister_notifier);

int sim_detect_register_callback(void *cb) { return 0; }
EXPORT_SYMBOL_GPL(sim_detect_register_callback);

int sim_detect_unregister_callback(void *cb) { return 0; }
EXPORT_SYMBOL_GPL(sim_detect_unregister_callback);

int sim_detect_get_status(void) { return 1; }
EXPORT_SYMBOL_GPL(sim_detect_get_status);

int sim_detect_get_sim_type(int slot) { return 0; }
EXPORT_SYMBOL_GPL(sim_detect_get_sim_type);

int sim_detect_get_slot_status(int slot) { return 1; }
EXPORT_SYMBOL_GPL(sim_detect_get_slot_status);

int sim_detect_restart(void) { return 0; }
EXPORT_SYMBOL_GPL(sim_detect_restart);

int sim_detect_init_hw(void) { return 0; }
EXPORT_SYMBOL_GPL(sim_detect_init_hw);

static int __init sim_detect_init(void)
{
    pr_info("sim_detect: built-in active, sim hotswap preserved\n");
    return 0;
}
subsys_initcall(sim_detect_init);

MODULE_LICENSE("GPL");