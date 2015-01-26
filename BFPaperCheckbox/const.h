//
//  const.h
//  BFPaperCheckbox
//
//  Created by John Pope on 26/01/2015.
//  Copyright (c) 2015 Bence Feher. All rights reserved.
//

#if TARGET_OS_IPHONE
#define SKColor UIColor
#define SKView UIView
#define SKBezierPath SKBezierPath
#define SKImage SKImage
#define SKScrollView UIScrollView
#define SKScreen UIScreen
#define SKTextField UITextfield
#define SKButton UIButton
#define SKControl UIControl

#else
#import <Cocoa/Cocoa.h>
#define SKColor NSColor
#define SKView NSView
#define SKBezierPath NSBezierPath
#define SKImage NSImage
#define SKScrollView NSScrollView
#define SKScreen NSScreen
#define SKTextField NSTextfield
#define SKButton NSButton
#define SKControl NSControl
#endif
