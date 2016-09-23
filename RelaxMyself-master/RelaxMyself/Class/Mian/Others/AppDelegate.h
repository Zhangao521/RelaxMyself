//
//  AppDelegate.h
//  RelaxMyself
//
//  Created by 周坤磊 on 16/1/21.
//  Copyright © 2016年 周坤磊. All rights reserved.
//


#import <UIKit/UIKit.h>

@class PFMainViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic, strong) PFMainViewController *mainVc;

-(void)loadMainController;
@end

