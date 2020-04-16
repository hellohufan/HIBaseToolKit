//
//  HDStringHelper.m
//  Demo
//
//  Created by hufan on 2017/3/16.
//  Copyright © 2017年 hufan. All rights reserved.
//

#import "HDStringHelper.h"

@implementation HDStringHelper

//自适应宽度
+ (CGFloat)widthOfString:(NSString*)str font:(UIFont *)font widthMax:(NSInteger)widthMax{
    if (str.length == 0) {
        return 10;
    }
    if (!font) {
        font = [UIFont systemFontOfSize:14];
    }
    CGSize size = [str boundingRectWithSize:CGSizeMake(40000, 21.)
                                    options:NSStringDrawingUsesLineFragmentOrigin
                                 attributes:@{NSFontAttributeName: font}
                                    context:nil].size;
    return MIN(size.width + 1, widthMax);
}

+ (CGFloat)heightOfString:(NSString *)str font:(UIFont *)font width:(CGFloat)w maxHeight:(CGFloat)height{
    if (str.length == 0 || w <= 0 || height < 20) {
        return 0;
    }
    if (!font) {
        font = [UIFont systemFontOfSize:14];
    }
    CGSize size = [str boundingRectWithSize:CGSizeMake(w, 99999999)
                                    options:NSStringDrawingUsesLineFragmentOrigin | NSStringDrawingUsesFontLeading
                                 attributes:@{NSFontAttributeName: font}
                                    context:nil].size;
    CGFloat h = size.height;
    return MIN(h, height);
}

+ (NSAttributedString *)htmlString:(NSString *)string{
    if (string.length == 0) {
        return [NSAttributedString new];
    }
    NSAttributedString *attributedString = [[NSAttributedString alloc]
                                            initWithData: [string dataUsingEncoding:NSUnicodeStringEncoding]
                                            options: @{ NSDocumentTypeDocumentAttribute: NSHTMLTextDocumentType }
                                            documentAttributes: nil
                                            error: nil
                                            ];
    return attributedString;
}

@end
