//
//  UIColor+Hex.h
//  WizardWar
//
//  Created by Sean Hess on 7/14/13.
//  Copyright (c) 2013 The LAB. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Hex)

+(UIColor*)colorFromRGB:(NSUInteger)rgb;
-(NSUInteger)RGB;

@end
