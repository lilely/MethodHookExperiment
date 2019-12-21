//
//  ViewController.m
//  MethodExpirement
//
//  Created by 金星 on 2019/12/21.
//  Copyright © 2019 com.corp.jinxing. All rights reserved.
//

#import "ViewController.h"
#import "hook_core.h"
#import "hook_core_arm64.h"

@interface ViewController ()

@end

@implementation ViewController

+(void)load {
    arm64_start_objc_msgSend_hook();
}

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = UIColor.whiteColor;
    // Do any additional setup after loading the view.
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self test];
}

- (void)test{
    sleep(1);
}

@end
