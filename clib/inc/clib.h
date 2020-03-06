/**===========================================================================
 * @file   example_lib.h
 * @date   2020-02-20
 * @author carl.mitchell@keeptruckin.com
 * @brief 
 *
 *============================================================================
 *
 * Copyright © 2020, KeepTruckin, Inc.
 * All rights reserved.
 *
 * All information contained herein is the property of KeepTruckin Inc. The
 * intellectual and technical concepts contained herein are proprietary to
 * KeepTruckin. Dissemination of this information or reproduction of this
 * material is strictly forbidden unless prior written permission is obtained
 * from KeepTruckin.
 *
 *===========================================================================
 */

#ifndef LIB_INC_EXAMPLE_LIB_H
#define LIB_INC_EXAMPLE_LIB_H
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <stdbool.h>
    bool not_hotdog(const char possible_hotdog[static 1]);

#ifdef __cplusplus
};
#endif /* __cplusplus */
#endif //LIB_INC_EXAMPLE_LIB_H
