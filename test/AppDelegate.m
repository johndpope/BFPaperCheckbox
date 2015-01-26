//
//  AppDelegate.m
//  test
//
//  Created by John Pope on 26/01/2015.
//  Copyright (c) 2015 Bence Feher. All rights reserved.
//

#import "AppDelegate.h"
#import "const.h"
#import "SKColor+BFPaperColors.h"


@interface AppDelegate ()

@property (weak) IBOutlet NSWindow *window;
@end

@implementation AppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
    // Insert code here to initialize your application
    
    CGRect winRect = ((NSView *)self.window.contentView).bounds;
    winRect.size.width = 300;
    NSView *maxView = [[NSView alloc] initWithFrame:winRect];
    [self.window.contentView addSubview:maxView];
    
    //now the view is added, but you need it to also stretch
    //when the window is resized
    //self.previewViewController.view.autoresizingMask = NSViewWidthSizable
    
    NSRect boundsRect = [[[self.window contentView] superview] bounds];
    
    self.paperCheckbox = [[BFPaperCheckbox alloc] initWithFrame:CGRectMake(20, 0, bfPaperCheckboxDefaultRadius * 2, bfPaperCheckboxDefaultRadius * 2)];
    self.paperCheckbox.tag = 1001;
    self.paperCheckbox.delegate = self;
    // [self addSubview:self.paperCheckbox];
    self.paperCheckbox.title = @"";
    
    
    self.paperCheckbox2 = [[BFPaperCheckbox alloc] initWithFrame:CGRectMake(200, 0, 25 * 2, 25 * 2)];
    self.paperCheckbox2.tag = 1002;
    self.paperCheckbox2.delegate = self;
    self.paperCheckbox2.rippleFromTapLocation = NO;
    self.paperCheckbox2.tapCirclePositiveColor = [SKColor paperColorAmber]; // We could use [UIColor colorWithAlphaComponent] here to make a better tap-circle.
    self.paperCheckbox2.tapCircleNegativeColor = [SKColor paperColorRed];   // We could use [UIColor colorWithAlphaComponent] here to make a better tap-circle.
    self.paperCheckbox2.checkmarkColor = [SKColor paperColorLightBlue];
    
    
    
    [[[self.window contentView] superview] addSubview:self.paperCheckbox positioned:NSWindowBelow relativeTo:[[[[self.window contentView] superview] subviews] objectAtIndex:0]];
    [[[self.window contentView] superview] addSubview:self.paperCheckbox2 positioned:NSWindowBelow relativeTo:[[[[self.window contentView] superview] subviews] objectAtIndex:0]];
}

- (void)tapped:(SKButton *)sender {
    BOOL animate;
    if (sender.tag == 2001) {       // animate button tag
        animate = YES;
    }
    else if (sender.tag == 2002) {  // static button tag
        animate = NO;
    }
    
    /*
     * Below are the two ways of programmatically setting the state of a checkbox.
     */
    
    // (1) Swap paperCheckbox's state with the 'switchStates...' method:
    [self.paperCheckbox switchStatesAnimated:animate];
    
    // (2) Swap paperCheckbox2's state with the 'check...'/'uncheck...' methods:
    if (self.paperCheckbox2.isChecked) {
        [self.paperCheckbox2 uncheckAnimated:animate];
    }
    else {
        [self.paperCheckbox2 checkAnimated:animate];
    }
}

- (void)paperCheckboxChangedState:(BFPaperCheckbox *)checkbox {
    if (checkbox.tag == 1001) {      // First box
        //  self.title.text = self.paperCheckbox.isChecked ? @"BFPaperCheckbox [ON]" : @"BFPaperCheckbox [OFF]";
    }
    else if (checkbox.tag == 1002) { // Second box
        //  self.subTitle.text = self.paperCheckbox2.isChecked ? @"Customized [ON]" : @"Customized [OFF]";
    }
}

@end
