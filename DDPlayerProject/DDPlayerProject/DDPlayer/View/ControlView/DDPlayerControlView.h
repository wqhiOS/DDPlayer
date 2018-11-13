//
//  DDVideoPlayerContainerView.h
//  DDVideoPlayer
//
//  Created by wuqh on 2018/11/7.
//  Copyright © 2018 wuqh. All rights reserved.
//

#import "DDPlayerComponentBaseView.h"
#import "DDPlayerControlBottomPortraitView.h"
#import "DDPlayerControlBottomLandscapeView.h"

@class DDPlayerControlView;

@protocol DDPlayerControlViewDelegate <NSObject>

@optional
/**
 点击返回按钮

 @param controlView self
 @param button 返回按钮
 */
- (void)playerControlView:(DDPlayerControlView*)controlView clickBackTitleButton:(UIButton*)button;
/**
 点击播放按钮

 @param controlView self
 @param button 播放按钮
 */
- (void)playerControlView:(DDPlayerControlView*)controlView clickPlayButton:(UIButton*)button;
/**
 点击锁屏按钮

 @param controlView self
 @param button 锁屏按钮
 */
- (void)playerControlView:(DDPlayerControlView*)controlView clicklockScreenButton:(UIButton*)button;

/**
 点击截取按钮

 @param controlView self
 @param button 截取按钮
 */
- (void)playerControlView:(DDPlayerControlView*)controlView clickCaptureButton:(UIButton*)button;


/**
 点击下一首按钮

 @param controlView self
 @param button 下一首按钮
 */
- (void)playerControlView:(DDPlayerControlView*)controlView clickForwardButton:(UIButton*)button;


/**
 点击章节列表按钮

 @param controlView self
 @param button 章节列表按钮
 */
- (void)playerControlView:(DDPlayerControlView*)controlView clickChapterButton:(UIButton*)button;

/**
 手势改变音量

 @param controlView self
 @param volume CGFloat
 */
- (void)playerControlView:(DDPlayerControlView*)controlView chagedVolume:(CGFloat)volume;

@end

NS_ASSUME_NONNULL_BEGIN

@interface DDPlayerControlView : DDPlayerComponentBaseView

@property (nonatomic, weak) id<DDPlayerControlViewDelegate> delegate;
@property(nonatomic, strong) UIButton *playButton;
@property(nonatomic, strong) DDPlayerControlBottomPortraitView *bottomPortraitView;
@property(nonatomic, strong) DDPlayerControlBottomLandscapeView *bottomLandscapeView;
@property(nonatomic, assign, readonly) BOOL isLockScreen;

- (void)show;
- (void)dismiss;

@end

NS_ASSUME_NONNULL_END