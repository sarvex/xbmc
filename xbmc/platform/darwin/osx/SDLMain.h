/*
 *  SDLMain.h - main entry point for our Cocoa-ized SDL app
 *  Initial Version: Darrell Walisser <dwaliss1@purdue.edu>
 *  Non-NIB-Code & other changes: Max Horn <max@quendi.de>
 *
 *  SPDX-License-Identifier: Unlicense
 *  See LICENSES/README.md for more information.
 */

#if !defined(__arm__) && !defined(__aarch64__)

#import <Cocoa/Cocoa.h>

@interface XBMCDelegate : NSObject<NSApplicationDelegate>
@end
#endif
