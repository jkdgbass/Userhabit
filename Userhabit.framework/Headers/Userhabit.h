//
//  Userhabit.h
//  Userhabit
//
//  Created by DoHyoungKim on 2015. 5. 18..
//  Copyright (c) 2015년 Andbut. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for Userhabit.
FOUNDATION_EXPORT double UserhabitVersionNumber;

//! Project version string for Userhabit.
FOUNDATION_EXPORT const unsigned char UserhabitVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <Userhabit/PublicHeader.h>


@interface Userhabit : NSObject

+(void)SessionStart:(NSString *)key;
+(void)setSessionDelayTime:(float)delayInterval;
+(void)takeScreenShot:(id)sender;
+(void)setScreen:(id)sender withName:(NSString *)subViewName;
+(void)makeViewSensitive:(id)sender;

@end