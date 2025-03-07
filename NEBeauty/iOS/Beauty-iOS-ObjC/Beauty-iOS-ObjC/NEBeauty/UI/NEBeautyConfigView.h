//
//  NEBeautyConfigView.h
//  Beauty-iOS-ObjC
//
//  Created by zhangchenliang on 2021/10/12.
//  Copyright © 2021 NetEase. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NEBeautyMacro.h"
#import "NECollectionView.h"
#import "NETitleDisplayModel.h"
#import "NEBeautySliderDisplayModel.h"

typedef NS_ENUM(NSInteger, NEBeautyConfigViewType) {
    // 美颜
    NEBeautyConfigViewTypeBeauty = 0,
    // 滤镜
    NEBeautyConfigViewTypeFilter,
    // 贴纸
    NEBeautyConfigViewTypeSticker,
    // 美妆
    NEBeautyConfigViewTypeMakeup
};

@protocol NEBeautyConfigViewDelegate <NSObject>

// 重置操作触发的回调
- (void)didTriggerResetActionWithConfigViewType:(NEBeautyConfigViewType)type;

// 滤镜、贴纸和美妆切换的回调
- (void)didSelectItemWithConfigViewType:(NEBeautyConfigViewType)type model:(NECollectionViewDisplayModel *)model;

// 美颜slider滑动时的回调
- (void)didChangeSliderValueWithType:(NEBeautySliderType)type value:(float)value;

@end

@protocol NEBeautyConfigViewDataSource <NSObject>

// 标题tab数据源
- (NSArray<NETitleDisplayModel *> *)titleModelArrayForConfigViewWithType:(NEBeautyConfigViewType)type;

// 滤镜、贴纸和美妆的数据源
- (NSArray<NECollectionViewDisplayModel *> *)itemModelArrayForConfigViewWithType:(NEBeautyConfigViewType)type effectType:(NEBeautyEffectType)effectType;

// 美颜的数据源
- (NSArray<NEBeautySliderDisplayModel *> *)sliderModelArrayForTitleType:(NEBeautyEffectType)type;

// 滤镜强度的数据源
- (NEBeautySliderDisplayModel *)sliderModelForFilterStrength;

@end

@interface NEBeautyConfigView : UIView

- (instancetype)initWithType:(NEBeautyConfigViewType)type
                  dataSource:(id<NEBeautyConfigViewDataSource>)dataSource
                    delegate:(id<NEBeautyConfigViewDelegate>)delegate;

- (void)displayWithContainer:(UIView *)container;

@end
