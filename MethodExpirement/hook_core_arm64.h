//
//  hook_core_arm64.h
//  MethodExpirement
//
//  Created by 金星 on 2019/12/21.
//  Copyright © 2019 com.corp.jinxing. All rights reserved.
//

#ifndef hook_core_arm64_h
#define hook_core_arm64_h

#include <stdio.h>

void arm64_start_objc_msgSend_hook(void);
void arm64_stop_objc_msgSend_hook(void);

#endif /* hook_core_arm64_h */
