//
//  NETSAppDelegate.m
//  NERtcP2pSample
//
//  Created by NetEase on 2020/08/01.
//  Copyright (c) 2014-2020 NetEase, Inc. All rights reserved.
//

#import "NETSAppDelegate.h"
#import "AppKey.h"
#import "NEBeautyManager.h"

@interface NETSAppDelegate ()

@end

@implementation NETSAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    NSAssert(![kAppKey isEqualToString:@"请填入您的AppKey"],
             @"请在AppKey.h中填入您的APPKey之后，再运行Demo");
    
    dispatch_async(dispatch_get_global_queue(0, 0), ^{
        [[NEBeautyManager sharedManager] prepareResource];
    });
    
    return YES;
}
@end
