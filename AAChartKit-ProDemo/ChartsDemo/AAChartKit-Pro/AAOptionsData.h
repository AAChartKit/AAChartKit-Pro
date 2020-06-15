//
//  AAOptionsData.h
//  AAChartKit-ProDemo
//
//  Created by AnAn on 2020/6/6.
//  Copyright © 2020 Danny boy. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AAOptionsData : NSObject

+ (NSArray *)variablepieData;
+ (NSArray *)variwideData;
+ (NSArray *)heatmapData;
+ (NSArray *)packedbubbleData;
+ (NSArray *)packedbubbleSplitData;
+ (NSArray *)columnpyramidData;
+ (NSArray *)treemapWithColorAxisData;
+ (NSArray *)drilldownTreemapData;

+ (NSArray *)sankeyData;
+ (NSArray *)dependencywheelData;
+ (NSArray *)sunburstData;
+ (NSArray *)dumbbellData;
+ (NSArray *)vennData;
+ (NSArray *)lollipopData;
+ (NSArray *)tilemapData;
+ (NSArray *)treemapWithLevelsData;
+ (NSArray *)xrangeData;
+ (NSArray *)vectorData;

@end

NS_ASSUME_NONNULL_END
