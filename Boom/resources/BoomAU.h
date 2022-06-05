
#include <TargetConditionals.h>
#if TARGET_OS_IOS == 1
#import <UIKit/UIKit.h>
#else
#import <Cocoa/Cocoa.h>
#endif

#define IPLUG_AUVIEWCONTROLLER IPlugAUViewController_vBoom
#define IPLUG_AUAUDIOUNIT IPlugAUAudioUnit_vBoom
#import <BoomAU/IPlugAUViewController.h>
#import <BoomAU/IPlugAUAudioUnit.h>

//! Project version number for BoomAU.
FOUNDATION_EXPORT double BoomAUVersionNumber;

//! Project version string for BoomAU.
FOUNDATION_EXPORT const unsigned char BoomAUVersionString[];

@class IPlugAUViewController_vBoom;
