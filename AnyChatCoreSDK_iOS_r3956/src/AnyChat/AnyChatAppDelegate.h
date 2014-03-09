//
//  AnyChatAppDelegate.h
//  AnyChat
//
//  Created by bairuitech on 11-8-8.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AnyChatViewController;

@interface AnyChatAppDelegate : NSObject <UIApplicationDelegate> {


}

@property (nonatomic, retain) IBOutlet UIWindow *window;


@property (nonatomic, retain) IBOutlet AnyChatViewController *viewController;

+ (AnyChatAppDelegate*) GetApp;

+ (id) GetServerIP;

+ (int) GetServerPort;

// 获取默认设置
- (void)registerDefaultsFromSettingsBundle;

@end
