#include "m5stack_core2.h"
#include "m5stack_shared.h"

extern const SdCard m5stack_core2_sdcard;

const HardwareConfig m5stack_core2 = {
    .bootstrap = &m5stack_bootstrap,
    .display = {
        .set_backlight_duty = NULL
    },
    .init_graphics = &m5stack_lvgl_init,
    .sdcard = &m5stack_core2_sdcard,
    .power = &m5stack_power
};
