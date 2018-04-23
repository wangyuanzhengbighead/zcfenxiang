/**
 * @file   branch.c
 * @author coppercu wangzuo
 * @date   Mon Dec 28 19:56:58 2015
 * 
 * @brief  
 * 
 * 
 */
#include <ladder.h>
#define CONFIG_LADDER	CONFIG_LADDER_BRANCH

#include <iconfig.h>
#include <iot.h>
#include <bridge.h>

#define	BRANCH_PROPERTY_KEY_ZTCSAUTO_MATRIX_KIND		(PROPERTY_KEY_BASE_BRANCH+0) /* 长沙众泰自适应矩阵类型 */
#define	BRANCH_PROPERTY_KEY_BCEC180_LEASE_MODE			(PROPERTY_KEY_BASE_BRANCH+1) /* 北汽EC180租赁模式 */
#define BRANCH_PROPERTY_KEY_BCEC180_LEASE_POWER			(PROPERTY_KEY_BASE_BRANCH+2) /* 北汽EC180动力控制 */
#define BRANCH_PROPERTY_KEY_BCEC180_LEASE_ACTIVE_MODE	(PROPERTY_KEY_BASE_BRANCH+3) /* 北汽EC180解锁模式 */

#if defined(CONFIG_DEBUG)
//# pragma O0
#endif

extern iot_uint8_t startup_flag;

#include "./build/branch/config_branch.c"

#include "./build/branch/config_version.c"
#include "./build/branch/config_sercom.c"
#include "./build/branch/config_blecfg.c"
#include "./build/branch/config_irunif.c"
#include "./build/branch/config_repose.c"
#include "./build/branch/config_setting.c"
#include "./build/branch/config_upgrade.c"
#include "./build/branch/config_spiflash.c"

#include "./build/branch/config_custom.c"
#include "./build/branch/config_matrix.c"
#include "./build/branch/config_motion.c"
#include "./build/branch/config_gbtele.c"
#include "./build/branch/config_record.c"
#include "./build/branch/config_remote.c"
#include "./build/branch/config_protoc.c"
#include "./build/branch/config_autosar.c"
#include "./build/branch/config_arcorig.c"
#include "./build/branch/config_arcfour.c"
#include "132456"
#if defined(CONFIG_DEBUG)
//# pragma O3
#endif
