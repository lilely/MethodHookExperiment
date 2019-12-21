//
//  hook_utils.c
//  MethodExpirement
//
//  Created by 金星 on 2019/12/21.
//  Copyright © 2019 com.corp.jinxing. All rights reserved.
//

#include "hook_utils.h"
#include <objc/runtime.h>
#include <sys/time.h>

uint64_t hook_getMillisecond() {
    struct timeval now;
    gettimeofday( &now, NULL );
    return 1000000*now.tv_sec + now.tv_usec;
}

char *hook_getObjectClassName(id object) {
    return class_getName(object_getClass(object));
}

BOOL hook_has_prefix(char *s, char *bs) {
    if (s == NULL || bs == NULL) {
        return 0;
    }
    char *p = s;
    char *q = bs;
    while(*(p++) == *(q++));
    if (*q == '\0' || *q == ' ') {
        return 1;
    }
    return 0;
}
