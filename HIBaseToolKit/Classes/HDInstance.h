//
//  NSObject_Instance.h
//  FEPosUniversal
//
//  Created by DennisHu on 12-8-6.
//  Copyright (c) 2012年 __iDennisHu__. All rights reserved.
//

//typedef NS_ENUM(NSInteger, HICharacterType) {
//
//    HICharacterTypeEnglish = 0,
//    HICharacterTypeChinese,
//    HICharacterTypeOther,
//};

//----------------------系统----------------------------

#define HISCREEN_WIDTH       ([UIScreen mainScreen].bounds.size.width)
#define HISCREEN_HEIGHT      ([UIScreen mainScreen].bounds.size.height)
#define IS_iPhoneX             (kSCREEN_WIDTH == 375.f && kSCREEN_HEIGHT == 812.f)
//获取系统版本
#define IOS_VERSION [[[UIDevice currentDevice] systemVersion] floatValue]
#define CurrentSystemVersion [[UIDevice currentDevice] systemVersion]

//获取当前语言
#define CurrentLanguage ([[NSLocale preferredLanguages] objectAtIndex:0])

//判断是否 Retina屏、设备是否%fhone 5、是否是iPad
#define isRetina3_5 CGSizeEqualToSize(CGSizeMake(320, 480), [UIScreen mainScreen].bounds.size)
#define isRetina4_0 CGSizeEqualToSize(CGSizeMake(320, 568), [UIScreen mainScreen].bounds.size)
#define isRetina4_7 CGSizeEqualToSize(CGSizeMake(375, 667), [UIScreen mainScreen].bounds.size)
#define isRetina5_5 CGSizeEqualToSize(CGSizeMake(414, 736), [UIScreen mainScreen].bounds.size)
#define isRetina5_8 CGSizeEqualToSize(CGSizeMake(375, 812), [UIScreen mainScreen].bounds.size)
#define isPad (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)


//判断是真机还是模拟器
#if TARGET_OS_IPHONE
//iPhone Device
#endif

#if TARGET_IPHONE_SIMULATOR
//iPhone Simulator
#endif

//检查系统版本
#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)
//----------------------系统----------------------------


//----------------------图片----------------------------

//读取本地图片
#define LOADIMAGE(file,ext) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle]pathForResource:file ofType:ext]]

//定义UIImage对象
#define IMAGEFILE(A) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:A ofType:nil]]

//定义UIImage对象
#define HIIMAGE(_pointer) [UIImage imageNamed:_pointer]

//----------------------颜色类---------------------------
// rgb颜色转换（16进制->10进制）
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

//带有RGBA的颜色设置
#define COLOR(R, G, B, A) [UIColor colorWithRed:R/255.0 green:G/255.0 blue:B/255.0 alpha:A]

// 获取RGB颜色
#define RGBA(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define RGB(r,g,b) RGBA(r,g,b,1.0f)
#define BLACK RGBA(21, 23, 34, 1)
//透明色
#define HICLEARCOLOR [UIColor clearColor]

#pragma mark - color functions
#define RGBCOLOR(r,g,b) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
#define RGBACOLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]

#define HICLEARCOLOR            [UIColor clearColor]
#define HICOLOR_THEME           [UIColor colorWithPatternImage:HIIMAGE(@"theme")]     //主题色
#define HICOLOR_ORANGE          [UIColor colorWithRed:249/255.  green:166/255.  blue:65/255.   alpha:1.0]  //橘色
#define HICOLOR_RED             [UIColor colorWithRed:255./255. green:75./255. blue:99./255. alpha:1.]
#define HICOLOR_DARKBLUE        [UIColor colorWithRed:22/255.   green:98/255.   blue:152/255.   alpha:1.0]
#define HICOLOR_LINE            [UIColor colorWithRed:206/255.  green:206/255.  blue:206/255.   alpha:1.]
#define HICOLOR_GRAY            [UIColor colorWithRed:210/255.  green:210/255.  blue:210/255.   alpha:1.]
#define HICOLOR_GREEN           [UIColor colorWithRed:64/255.   green:196/255.  blue:118/255.   alpha:1.]
#define HICOLOR_BLUE            [UIColor colorWithRed:42/255.   green:158/255.  blue:255/255.   alpha:1.]
#define HICOLOR_WHITE           [UIColor whiteColor]
#define HICOLOR_CLEAR           [UIColor clearColor]
//字体
#define HIFONT_TITLE            [UIFont fontWithName:@"PingFangSC-Regular" size:15]
#define HIFONT                  [UIFont fontWithName:@"PingFangSC-Regular" size:14]
#define HIFONT_DETAIL           [UIFont fontWithName:@"PingFangSC-Regular" size:12]
#define HIFONT_NOTE             [UIFont fontWithName:@"PingFangSC-Regular" size:10]

#define FONTBOLD(p)             [UIFont fontWithName:@"PingFangSC-Semibold" size:p]
#define FONTREGULAR(p)             [UIFont fontWithName:@"PingFangSC-Regular" size:p]

#define _fileName_default__     @"default"

#define SRV_CONNECTED       0
#define SRV_CONNECT_SUC     1
#define SRV_CONNECT_FAIL    2
#define debugMode           1

#define BANNER_SCROLL_TIME 5

#ifdef DEBUG
#define HILog(FORMAT, ...) fprintf(stderr, "【%s】 %s ‖ 〖LINE:%li〗MESSAGE:\n%s\n", [[[NSString stringWithUTF8String: __FILE__] lastPathComponent] UTF8String], __PRETTY_FUNCTION__, (long)__LINE__, [[NSString stringWithFormat: FORMAT, ## __VA_ARGS__] UTF8String]);//Dlog(fmt, ...) NSLog((@"【%s】%s [Line %d] " fmt), __FILE__, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#define HILog(fmt, ...)
#endif

#define HIVALUE(p0, p1)     (!p0 || [p0 isKindOfClass:[NSNull class]]? p1: p0)
#define HISTRING(p0, p1)    (p0.length > 0? p0: p1)
#define HISTR(p)            HIVALUE(p, @"")
#define S(p)                HIVALUE(p, @"")
#define s(p)                S(p)
#define HINILTEXT           @"不限"
#define HIIndexPath(s, r)   (indexPath.section == s && indexPath.row == r)

#define HIDIC(p, v) ([p isKindOfClass:[NSDictionary class]]? v: @"")

#define HI_DEPRECATED_IOS(_intro, _DepIntro, ...) __attribute__((deprecated("")))

#define HIDocumentPath ((NSString *)[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0])

#define DEVICE_IS_IPHONE    [[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone
#define DEVICE_IS_IPAD      [[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad
#define HIDeviceSize        [[UIScreen mainScreen] bounds].size
#define kWindow             [HIGlobalInfo instance].window
#define TAB                 [HIGlobalInfo instance].tab
#define HIFORMAT(format, ...) [NSString stringWithFormat:(format), ##__VA_ARGS__]
#define DOCUMENTS_FOLDER    [NSHomeDirectory() stringByAppendingPathComponent:@"Documents"]
#define FILEPATH            [DOCUMENTS_FOLDER stringByAppendingPathComponent:[self dateString]]
#define LS(s)  NSLocalizedString((s), @"")

#define HIUTF8(P) [NSString stringWithCString:[[P description] cStringUsingEncoding:NSUTF8StringEncoding] encoding:NSUTF8StringEncoding]

#define ORITATION_IS_HORIZONTAL     ([UIApplication sharedApplication].statusBarOrientation == UIDeviceOrientationLandscapeRight || [UIApplication sharedApplication].statusBarOrientation == UIDeviceOrientationLandscapeLeft)

#define ORITATION_IS_VERTICAL       ([UIApplication sharedApplication].statusBarOrientation == UIDeviceOrientationPortrait || [UIApplication sharedApplication].statusBarOrientation == UIDeviceOrientationPortraitUpsideDown)

#define BARBUTTON(TITLE, SELECTOR) 	[[UIBarButtonItem alloc] initWithTitle:TITLE style:UIBarButtonItemStylePlain target:self action:SELECTOR]
#define SYSBARBUTTON(ITEM, TARGET, SELECTOR) [[UIBarButtonItem alloc] initWithBarButtonSystemItem:ITEM target:TARGET action:SELECTOR]

#ifndef IOS_VERSION
#define IOS_VERSION [[[UIDevice currentDevice] systemVersion] floatValue]
#endif
#define IS_4INCH_SCREEN     (fabs((double)[[UIScreen mainScreen ] bounds].size.height - (double)568)  <  DBL_EPSILON )
#define IS_35INCH_SCREEN    (fabs((double)[[UIScreen mainScreen ] bounds].size.height - (double)568)  >= DBL_EPSILON )

#define SuppressPerformSelectorLeakWarning(Stuff) \
do { \
    _Pragma("clang diagnostic push") \
    _Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"") \
    Stuff; \
    _Pragma("clang diagnostic pop") \
} while (0)

#define HILock() dispatch_semaphore_wait(self->_lock, DISPATCH_TIME_FOREVER)
#define HIUnlock() dispatch_semaphore_signal(self->_lock)


