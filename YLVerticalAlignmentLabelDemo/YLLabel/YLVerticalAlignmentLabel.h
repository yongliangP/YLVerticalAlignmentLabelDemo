//
//  YLVerticalAlignmentLabel.h
//  YLVerticalAlignmentLabelDemo
//
//  Created by yongliangP on 16/8/16.
//  Copyright © 2016年 yongliangP. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, VerticalAlignment)
{
    VerticalAlignmentTop = 0, // 上对齐
    VerticalAlignmentMiddle,//居中
    VerticalAlignmentBottom,//底部对齐
};

IB_DESIGNABLE
@interface YLVerticalAlignmentLabel : UILabel

#if TARGET_INTERFACE_BUILDER
@property (nonatomic, assign) IBInspectable NSUInteger verticalAlignment;
#else
@property (nonatomic,assign) VerticalAlignment verticalAlignment;
#endif
@end
