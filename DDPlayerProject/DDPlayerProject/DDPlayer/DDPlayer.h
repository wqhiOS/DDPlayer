//
//  DDPlayer.h
//  DDPlayerProject
//
//  Created by wuqh on 2018/11/9.
//  Copyright © 2018 wuqh. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DDPlayerDelegate.h"
#import <AVKit/AVKit.h>
#import "DDPlayerStatus.h"

NS_ASSUME_NONNULL_BEGIN

@interface DDPlayer : NSObject

@property(nonatomic, weak) id<DDPlayerDelegate> delegate;
@property(nonatomic, weak) id<DDPlayerDelegate> delegateController;
@property(nonatomic, strong) AVAsset *currentAsset;
@property(nonatomic, strong) AVPlayerItem *currentItem;
@property(nonatomic, assign, readonly) NSTimeInterval duration;
@property(nonatomic, assign, readonly) NSTimeInterval currentTime;
@property(nonatomic, assign, readonly) DDPlayerStatus status;
@property(nonatomic, assign) CGFloat volume;

- (void)bindToPlayerLayer:(AVPlayerLayer *)layer;

- (void)replaceWithUrl:(NSURL*)url;
- (void)stop;
- (void)play;
- (void)pause;
- (void)seekToTime:(NSTimeInterval)time completionHandler:(void(^)(BOOL))completionHandler;

@end

NS_ASSUME_NONNULL_END
