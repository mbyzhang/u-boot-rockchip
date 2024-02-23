/* SPDX-License-Identifier: GPL-2.0+ */

#ifndef __EASYEAI_NANO_H
#define __EASYEAI_NANO_H

#define ROCKCHIP_DEVICE_SETTINGS \
		"stdout=serial,vidconsole\0" \
		"stderr=serial,vidconsole\0"

#include <configs/rv1126_common.h>

#undef BOOT_TARGET_DEVICES

#define BOOT_TARGET_DEVICES(func) \
	func(MMC, mmc, 0) \
	func(MMC, mmc, 1)

#endif /* __EASYEAI_NANO_H */
