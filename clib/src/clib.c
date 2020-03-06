/**===========================================================================
 * @file   example_lib.c
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

#include "clib.h"
#include <stdio.h>
#include <string.h>

bool not_hotdog(const char possible_hotdog[static 1])
{
    if (NULL == possible_hotdog) {
        printf("Impossible NULL arg: possible_hotdog.");
        return true;
    }

    if (0 == strncmp(possible_hotdog, "hotdog", strlen("hotdog")))
    {
        return false;
    } else {
        return true;
    }
}