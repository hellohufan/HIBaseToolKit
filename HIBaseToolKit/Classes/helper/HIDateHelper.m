//
//  HDDate.m
//  JianJian
//
//  Created by hufan on 16/4/13.
//  Copyright © 2016年 Hu Dennis. All rights reserved.
//

#import "HIDateHelper.h"

@implementation HIDateHelper

/** 关于date **/
#pragma mark - time

+ (nonnull NSString *)readNowTimeWithFormate:(nonnull NSString *)yyyyMMddhhmmss{
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter	setDateFormat:yyyyMMddhhmmss];//yyyyMMddhhmmss
    NSString *sTime = [formatter stringFromDate: [NSDate date]];
    return sTime;
}

+ (nonnull NSString *)stringWithDate:(nonnull NSDate *)date withFormat:(nonnull NSString *)yyyyMMddhhmmss{
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    formatter.AMSymbol = @"上午";
    formatter.PMSymbol = @"下午";
    [formatter	setDateFormat:yyyyMMddhhmmss];
    NSString *sTime=[formatter stringFromDate: date];
    return sTime;
}

+ (nonnull NSString *)formatterDate:(nonnull NSDate *)date{
    return [HIDateHelper stringWithDate:date withFormat:@"yyyy-MM-dd"];
}

+ (NSDate *)dateFromString:(nonnull NSString *)sDate{
    return [self dateWithString:sDate formate:@"yyyy.MM.dd"];
}

+ (nonnull NSDate *)dateWithString:(nonnull NSString *)sTime formate:(nonnull NSString *)formate{
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init] ;
    [formatter setDateFormat:formate];
    NSDate *date = [formatter dateFromString:sTime];
    return date;
}

+ (nonnull NSString *)strinDateWithStringDate:(nonnull NSString *)strDate originalFormate:(nonnull NSString *)formate toFormate:(nonnull NSString *)theFormate{

    NSDate *date = [HIDateHelper dateWithString:strDate formate:formate];
    NSString *str = [HIDateHelper stringWithDate:date withFormat:theFormate];
    return str;
}

+ (nonnull NSString *)getHumanityTime:(nonnull NSDate *)compareDate{
    NSTimeInterval timeInterval = [compareDate timeIntervalSinceNow];
    timeInterval = -timeInterval;
    long temp = 0;
    NSString *result;
    if (timeInterval < 10 * 60) {//10分钟前
        result = [NSString stringWithFormat:@"刚刚"];
    }else if((temp = timeInterval/60) < 60){//10分钟到1小时
        result = [NSString stringWithFormat:@"%d分前", (int)temp];
    }else if((temp = temp/60) < 24){
        result = [NSString stringWithFormat:@"%d小时前", (int)temp];
    }else if((temp = temp/24) < 10){
        result = [NSString stringWithFormat:@"%d天前", (int)temp];
    }else if(temp < 365){
        result = [HIDateHelper stringWithDate:compareDate withFormat:@"MM-dd"];
    }else{
        result = [HIDateHelper stringWithDate:compareDate withFormat:@"yyyy-MM-dd"];
    }
    return  result;
}

+ (nonnull NSDate *)addMonth:(nonnull NSDate *)basedMonth count:(int)count{
    NSDateComponents *dateComponents = [[NSDateComponents alloc] init];
    [dateComponents setMonth:count];
    NSCalendar *calendar = [NSCalendar currentCalendar];
    NSDate *newDate = [calendar dateByAddingComponents:dateComponents toDate:basedMonth options:0];
    return newDate;
}

+ (nonnull NSDate *)addDay:(nonnull NSDate *)basedDate count:(int)count{
    NSDateComponents *dateComponents = [[NSDateComponents alloc] init];
    [dateComponents setDay:count];
    NSCalendar *calendar = [NSCalendar currentCalendar];
    NSDate *newDate = [calendar dateByAddingComponents:dateComponents toDate:basedDate options:0];
    return newDate;
}

@end
