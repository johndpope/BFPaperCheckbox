//
//  AppDelegate.h
//  test
//
//  Created by John Pope on 26/01/2015.
//  Copyright (c) 2015 Bence Feher. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "BFPaperCheckbox.h"

@interface AppDelegate : NSObject <NSApplicationDelegate>
@property (nonatomic, strong) BFPaperCheckbox *paperCheckbox;
@property (nonatomic, strong) BFPaperCheckbox *paperCheckbox2;

@end
