//
//  hook_utils.h
//  MethodExpirement
//
//  Created by 金星 on 2019/12/21.
//  Copyright © 2019 com.corp.jinxing. All rights reserved.
//

#ifndef hook_utils_h
#define hook_utils_h

#include <objc/runtime.h>
#include <stdio.h>

uint64_t hook_getMillisecond(void);

char *hook_getObjectClassName(id object);

BOOL hook_has_prefix(char *s, char *bs);

#endif /* hook_utils_h */
