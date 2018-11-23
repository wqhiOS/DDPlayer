//
//  DDNeedPayView.h
//  DDPlayerProject
//
//  Created by wuqh on 2018/11/23.
//  Copyright © 2018 wuqh. All rights reserved.
//

#import "DDPlayerContentView.h"

NS_ASSUME_NONNULL_BEGIN

@interface DDNeedPayView : DDPlayerContentView

@property(nonatomic,copy) void(^toPayBlock)(void);
@property(nonatomic,copy) void(^backBlock)(UIButton *);

@end

NS_ASSUME_NONNULL_END
