//
//  DDPlayerCoverView.h
//  DDPlayerProject
//
//  Created by wuqh on 2018/11/9.
//  Copyright © 2018 wuqh. All rights reserved.
//

#import "DDPlayerComponentBaseView.h"

NS_ASSUME_NONNULL_BEGIN

@interface DDPlayerCoverView : DDPlayerComponentBaseView

@property(nonatomic, copy) void(^backButtonClickBlock)(void);
@property(nonatomic, copy) void(^playButtonClickBlock)(void);
@property(nonatomic, strong) UIImage *coverImage;
- (instancetype)initWitCoverImage:(UIImage *)image;



@end

NS_ASSUME_NONNULL_END
