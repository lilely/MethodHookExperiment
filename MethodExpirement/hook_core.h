//
//  hook_core.h
//  MethodExpirement
//
//  Created by 金星 on 2019/12/21.
//  Copyright © 2019 com.corp.jinxing. All rights reserved.
//

#ifndef hook_core_h
#define hook_core_h

#include <dispatch/dispatch.h>
#include <stdio.h>
#include <objc/runtime.h>

void start_hook(void *hook_objc_msgSend, void **origin_objc_msgSend);

/// hook 之前
void before_objc_msgSend(id object, SEL _cmd, uintptr_t lr);

uintptr_t after_objc_msgSend(void);

#endif /* hook_core_h */
