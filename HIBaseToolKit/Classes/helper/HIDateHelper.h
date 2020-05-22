//
//  HDDate.h
//  JianJian
//
//  Created by hufan on 16/4/13.
//  Copyright © 2016年 Hu Dennis. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HIDateHelper : NSObject

/**
 *  在某个时间基础上，加n个月
 *
 *  @param basedMonth 基础时间，被加的时间
 *
 *  @return 相加后的时间
 */
+ (nonnull NSDate *)addMonth:(nonnull NSDate *)basedMonth count:(int)count;

/**
 *  在某个时间基础上，加n天
 *
 *  @param basedDate 基础时间，被加的时间
 *
 *  @return 相加后的时间
 */
+ (nonnull NSDate *)addDay:(nonnull NSDate *)basedDate count:(int)count;

/**
 *  读取现在时间
 *
 *  @param yyyyMMddhhmmss 格式
 *
 *  @return 对应格式的日期字符串
 */
+ (nonnull NSString *)readNowTimeWithFormate:(nonnull NSString *)yyyyMMddhhmmss;

/**
 *  按照给出的格式返回对应的格式字符串日期
 *
 *  @param date                         日期
 *  @param yyyyMMddhhmmss 格式
 *
 *  @return 字符串日期
 */
+ (nonnull NSString *)stringWithDate:(nonnull NSDate *)date withFormat:(nonnull NSString *)yyyyMMddhhmmss;

/**
 *  日期转字符串格式（yyyy-MM-dd）
 *
 *  @param date 日期
 *
 *  @return 字符串日期（yyyy-MM-dd）
 */
+ (nonnull NSString *)formatterDate:(nonnull NSDate *)date;

/**
 *  字符串日期（yyyy.MM.dd）转成时间类型
 *
 *  @param sDate 日期字符串（yyyy.MM.dd）
 *
 *  @return NSDate日期
 */
+ (nonnull NSDate *)dateFromString:(nonnull NSString *)sDate;

/**
 *  字符串转日期
 *
 *  @param sTime   字符串日期
 *  @param formate 格式
 *
 *  @return 日期
 */
+ (nonnull NSDate *)dateWithString:(nonnull NSString *)sTime formate:(nonnull NSString *)formate;

#pragma mark --返回人性化时间显示
/**
 @brief 返回人性化时间显示
 
 @param date 时间
 @return 对应时间
 
 @discussion 输入一个时间，返回人类所日常熟悉的时间称呼，如“昨天”，“前天”，“今天”“明后天”等
 */
+ (nonnull NSString *)getHumanityTime:(nonnull NSDate *)date;

@end
