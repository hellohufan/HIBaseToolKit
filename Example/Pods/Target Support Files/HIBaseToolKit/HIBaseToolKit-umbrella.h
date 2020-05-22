#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "HDInstance.h"
#import "HDWeakObject.h"
#import "HILabel.h"
#import "HIQRCodeCtr.h"

FOUNDATION_EXPORT double HIBaseToolKitVersionNumber;
FOUNDATION_EXPORT const unsigned char HIBaseToolKitVersionString[];

