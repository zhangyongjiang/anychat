//
//  AnyChatViewController.h
//  AnyChat
//
//  Created by bairuitech on 11-8-8.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


// Local Settings Parameter Key Define
NSString* const kUseP2P = @"usep2p";
NSString* const kUseServerParam = @"useserverparam";
NSString* const kVideoSolution = @"videosolution";
NSString* const kVideoFrameRate = @"videoframerate";
NSString* const kVideoBitrate = @"videobitrate";
NSString* const kVideoPreset = @"videopreset";
NSString* const kVideoQuality = @"videoquality";


#import "../../sdk/include/AnyChatPlatform.h"
#import "../../sdk/include/AnyChatDefine.h"
#import "../../sdk/include/AnyChatErrorCode.h"

@class LoginViewController;
@class HallViewController;
@class VideoChatController;
@class SettingsController;
@class RoomViewController;


@interface AnyChatViewController : UIViewController < AnyChatNotifyMessageDelegate > {
    
    IBOutlet LoginViewController* loginViewController;
    IBOutlet HallViewController* hallViewController;
    IBOutlet VideoChatController* videoChatController;
    IBOutlet SettingsController* settingsController;
    IBOutlet RoomViewController* roomViewController;
    
    AnyChatPlatform *anychat;
    int iCurrentChatUserId;
    
}

@property (nonatomic, retain) LoginViewController* loginViewController;
@property (nonatomic, retain) HallViewController* hallViewController;
@property (nonatomic, retain) VideoChatController* videoChatController;
@property (nonatomic, retain) SettingsController* settingsController;
@property (nonatomic, retain) RoomViewController* roomViewController;

- (void)AnyChatNotifyHandler:(NSNotification*)notify;

- (void) hideAllView;

- (void) showNetConfigView;

- (void) showLoginView;

- (void) showHallView;

- (void) showRoomView;

- (void) showVideoChatView:(int) userid;

// 更新本地参数设置
- (void) updateLocalSettings;

@end
