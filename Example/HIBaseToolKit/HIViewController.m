//
//  HIViewController.m
//  HIBaseToolKit
//
//  Created by hellohufan on 04/16/2020.
//  Copyright (c) 2020 hellohufan. All rights reserved.
//

#import "HIViewController.h"
#import <HIAlert.h>
#import <HIMacro.h>

@interface HIViewController ()

@end

@implementation HIViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
}

- (IBAction)doAlert:(id)sender{
    [HIAlert alert:@"你好，这是一条弹出消息" confirmHandler:^(UIAlertAction * _Nonnull action) {
        HILOG(@"这是一条Log信息");
    }];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
