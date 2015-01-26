//
//  SKColor+BFPaperColors.h
//  BFPaperKit
//
//  Created by Bence Feher on 7/11/14.
//  Copyright (c) 2014 Bence Feher. All rights reserved.
//
/* LICENSE:
 The MIT License (MIT)
 
 Copyright (c) 2014 Bence Feher
 
 Permission is hereby granted, free of charge, to any person obtaining a copy of
 this software and associated documentation files (the "Software"), to deal in
 the Software without restriction, including without limitation the rights to
 use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 the Software, and to permit persons to whom the Software is furnished to do so,
 subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#import "const.h"


/**
 *  Returns a SKColor from a given hex-code.
 *
 *  @param rgbValue The hex-code to use to get a SKColor. ex: 0xffffff
 *
 *  @return A SKColor object of the color of the passed in hex-code.
 */
#define SKColorFromRGB(rgbValue) \
[SKColor colorWithRed : ((float)((rgbValue & 0xFF0000) >> 16)) / 255.0 \
green : ((float)((rgbValue & 0xFF00) >> 8)) / 255.0 \
blue : ((float)(rgbValue & 0xFF)) / 255.0 \
alpha : 1.0]



@interface SKColor (BFPaperColors)

#pragma mark - Utilities
/**
 *  Returns a BOOL indicating whether or not the color passed to this function is clear or not.
 *
 *  @param color The SKColor to test.
 *
 *  @return YES if clear, NO if not clear.
 */
+ (BOOL)isColorClear:(SKColor *)color;

/**
 *  Returns a UIImage generated by a color. (Useful for setting button background images for states that are a solid color.)
 *
 *  @param color The color to create an image out of.
 *
 *  @return A UIImage of the passed color.
 */


/**
 *  Returns the hex-code representation of a SKColor.
 *
 *  @param color The color to inspect for its hex-code.
 *
 *  @return An NSString representing the hex-code of the passed in color.
 */
+ (NSString *)colorToHex:(SKColor *)color;

#pragma mark - Red
+ (SKColor *)paperColorRed50;
+ (SKColor *)paperColorRed100;
+ (SKColor *)paperColorRed200;
+ (SKColor *)paperColorRed300;
+ (SKColor *)paperColorRed400;
+ (SKColor *)paperColorRed500;
+ (SKColor *)paperColorRed600;
+ (SKColor *)paperColorRed700;
+ (SKColor *)paperColorRed800;
+ (SKColor *)paperColorRed900;
+ (SKColor *)paperColorRedA100;
+ (SKColor *)paperColorRedA200;
+ (SKColor *)paperColorRedA400;
+ (SKColor *)paperColorRedA700;
+ (SKColor *)paperColorRed;

#pragma mark - Pink
+ (SKColor *)paperColorPink50;
+ (SKColor *)paperColorPink100;
+ (SKColor *)paperColorPink200;
+ (SKColor *)paperColorPink300;
+ (SKColor *)paperColorPink400;
+ (SKColor *)paperColorPink500;
+ (SKColor *)paperColorPink600;
+ (SKColor *)paperColorPink700;
+ (SKColor *)paperColorPink800;
+ (SKColor *)paperColorPink900;
+ (SKColor *)paperColorPinkA100;
+ (SKColor *)paperColorPinkA200;
+ (SKColor *)paperColorPinkA400;
+ (SKColor *)paperColorPinkA700;
+ (SKColor *)paperColorPink;

#pragma mark - Purple
+ (SKColor *)paperColorPurple50;
+ (SKColor *)paperColorPurple100;
+ (SKColor *)paperColorPurple200;
+ (SKColor *)paperColorPurple300;
+ (SKColor *)paperColorPurple400;
+ (SKColor *)paperColorPurple500;
+ (SKColor *)paperColorPurple600;
+ (SKColor *)paperColorPurple700;
+ (SKColor *)paperColorPurple800;
+ (SKColor *)paperColorPurple900;
+ (SKColor *)paperColorPurpleA100;
+ (SKColor *)paperColorPurpleA200;
+ (SKColor *)paperColorPurpleA400;
+ (SKColor *)paperColorPurpleA700;
+ (SKColor *)paperColorPurple;

#pragma mark - Deep Purple
+ (SKColor *)paperColorDeepPurple50;
+ (SKColor *)paperColorDeepPurple100;
+ (SKColor *)paperColorDeepPurple200;
+ (SKColor *)paperColorDeepPurple300;
+ (SKColor *)paperColorDeepPurple400;
+ (SKColor *)paperColorDeepPurple500;
+ (SKColor *)paperColorDeepPurple600;
+ (SKColor *)paperColorDeepPurple700;
+ (SKColor *)paperColorDeepPurple800;
+ (SKColor *)paperColorDeepPurple900;
+ (SKColor *)paperColorDeepPurpleA100;
+ (SKColor *)paperColorDeepPurpleA200;
+ (SKColor *)paperColorDeepPurpleA400;
+ (SKColor *)paperColorDeepPurpleA700;
+ (SKColor *)paperColorDeepPurple;

#pragma mark - Indigo
+ (SKColor *)paperColorIndigo50;
+ (SKColor *)paperColorIndigo100;
+ (SKColor *)paperColorIndigo200;
+ (SKColor *)paperColorIndigo300;
+ (SKColor *)paperColorIndigo400;
+ (SKColor *)paperColorIndigo500;
+ (SKColor *)paperColorIndigo600;
+ (SKColor *)paperColorIndigo700;
+ (SKColor *)paperColorIndigo800;
+ (SKColor *)paperColorIndigo900;
+ (SKColor *)paperColorIndigoA100;
+ (SKColor *)paperColorIndigoA200;
+ (SKColor *)paperColorIndigoA400;
+ (SKColor *)paperColorIndigoA700;
+ (SKColor *)paperColorIndigo;

#pragma mark - Blue
+ (SKColor *)paperColorBlue50;
+ (SKColor *)paperColorBlue100;
+ (SKColor *)paperColorBlue200;
+ (SKColor *)paperColorBlue300;
+ (SKColor *)paperColorBlue400;
+ (SKColor *)paperColorBlue500;
+ (SKColor *)paperColorBlue600;
+ (SKColor *)paperColorBlue700;
+ (SKColor *)paperColorBlue800;
+ (SKColor *)paperColorBlue900;
+ (SKColor *)paperColorBlueA100;
+ (SKColor *)paperColorBlueA200;
+ (SKColor *)paperColorBlueA400;
+ (SKColor *)paperColorBlueA700;
+ (SKColor *)paperColorBlue;

#pragma mark - Light Blue
+ (SKColor *)paperColorLightBlue50;
+ (SKColor *)paperColorLightBlue100;
+ (SKColor *)paperColorLightBlue200;
+ (SKColor *)paperColorLightBlue300;
+ (SKColor *)paperColorLightBlue400;
+ (SKColor *)paperColorLightBlue500;
+ (SKColor *)paperColorLightBlue600;
+ (SKColor *)paperColorLightBlue700;
+ (SKColor *)paperColorLightBlue800;
+ (SKColor *)paperColorLightBlue900;
+ (SKColor *)paperColorLightBlueA100;
+ (SKColor *)paperColorLightBlueA200;
+ (SKColor *)paperColorLightBlueA400;
+ (SKColor *)paperColorLightBlueA700;
+ (SKColor *)paperColorLightBlue;

#pragma mark - Cyan
+ (SKColor *)paperColorCyan50;
+ (SKColor *)paperColorCyan100;
+ (SKColor *)paperColorCyan200;
+ (SKColor *)paperColorCyan300;
+ (SKColor *)paperColorCyan400;
+ (SKColor *)paperColorCyan500;
+ (SKColor *)paperColorCyan600;
+ (SKColor *)paperColorCyan700;
+ (SKColor *)paperColorCyan800;
+ (SKColor *)paperColorCyan900;
+ (SKColor *)paperColorCyanA100;
+ (SKColor *)paperColorCyanA200;
+ (SKColor *)paperColorCyanA400;
+ (SKColor *)paperColorCyanA700;
+ (SKColor *)paperColorCyan;

#pragma mark - Teal
+ (SKColor *)paperColorTeal50;
+ (SKColor *)paperColorTeal100;
+ (SKColor *)paperColorTeal200;
+ (SKColor *)paperColorTeal300;
+ (SKColor *)paperColorTeal400;
+ (SKColor *)paperColorTeal500;
+ (SKColor *)paperColorTeal600;
+ (SKColor *)paperColorTeal700;
+ (SKColor *)paperColorTeal800;
+ (SKColor *)paperColorTeal900;
+ (SKColor *)paperColorTealA100;
+ (SKColor *)paperColorTealA200;
+ (SKColor *)paperColorTealA400;
+ (SKColor *)paperColorTealA700;
+ (SKColor *)paperColorTeal;

#pragma mark - Green
+ (SKColor *)paperColorGreen50;
+ (SKColor *)paperColorGreen100;
+ (SKColor *)paperColorGreen200;
+ (SKColor *)paperColorGreen300;
+ (SKColor *)paperColorGreen400;
+ (SKColor *)paperColorGreen500;
+ (SKColor *)paperColorGreen600;
+ (SKColor *)paperColorGreen700;
+ (SKColor *)paperColorGreen800;
+ (SKColor *)paperColorGreen900;
+ (SKColor *)paperColorGreenA100;
+ (SKColor *)paperColorGreenA200;
+ (SKColor *)paperColorGreenA400;
+ (SKColor *)paperColorGreenA700;
+ (SKColor *)paperColorGreen;

#pragma mark - Light Green
+ (SKColor *)paperColorLightGreen50;
+ (SKColor *)paperColorLightGreen100;
+ (SKColor *)paperColorLightGreen200;
+ (SKColor *)paperColorLightGreen300;
+ (SKColor *)paperColorLightGreen400;
+ (SKColor *)paperColorLightGreen500;
+ (SKColor *)paperColorLightGreen600;
+ (SKColor *)paperColorLightGreen700;
+ (SKColor *)paperColorLightGreen800;
+ (SKColor *)paperColorLightGreen900;
+ (SKColor *)paperColorLightGreenA100;
+ (SKColor *)paperColorLightGreenA200;
+ (SKColor *)paperColorLightGreenA400;
+ (SKColor *)paperColorLightGreenA700;
+ (SKColor *)paperColorLightGreen;

#pragma mark - Lime
+ (SKColor *)paperColorLime50;
+ (SKColor *)paperColorLime100;
+ (SKColor *)paperColorLime200;
+ (SKColor *)paperColorLime300;
+ (SKColor *)paperColorLime400;
+ (SKColor *)paperColorLime500;
+ (SKColor *)paperColorLime600;
+ (SKColor *)paperColorLime700;
+ (SKColor *)paperColorLime800;
+ (SKColor *)paperColorLime900;
+ (SKColor *)paperColorLimeA100;
+ (SKColor *)paperColorLimeA200;
+ (SKColor *)paperColorLimeA400;
+ (SKColor *)paperColorLimeA700;
+ (SKColor *)paperColorLime;

#pragma mark - Yellow
+ (SKColor *)paperColorYellow50;
+ (SKColor *)paperColorYellow100;
+ (SKColor *)paperColorYellow200;
+ (SKColor *)paperColorYellow300;
+ (SKColor *)paperColorYellow400;
+ (SKColor *)paperColorYellow500;
+ (SKColor *)paperColorYellow600;
+ (SKColor *)paperColorYellow700;
+ (SKColor *)paperColorYellow800;
+ (SKColor *)paperColorYellow900;
+ (SKColor *)paperColorYellowA100;
+ (SKColor *)paperColorYellowA200;
+ (SKColor *)paperColorYellowA400;
+ (SKColor *)paperColorYellowA700;
+ (SKColor *)paperColorYellow;

#pragma mark - Amber
+ (SKColor *)paperColorAmber50;
+ (SKColor *)paperColorAmber100;
+ (SKColor *)paperColorAmber200;
+ (SKColor *)paperColorAmber300;
+ (SKColor *)paperColorAmber400;
+ (SKColor *)paperColorAmber500;
+ (SKColor *)paperColorAmber600;
+ (SKColor *)paperColorAmber700;
+ (SKColor *)paperColorAmber800;
+ (SKColor *)paperColorAmber900;
+ (SKColor *)paperColorAmberA100;
+ (SKColor *)paperColorAmberA200;
+ (SKColor *)paperColorAmberA400;
+ (SKColor *)paperColorAmberA700;
+ (SKColor *)paperColorAmber;

#pragma mark - Orange
+ (SKColor *)paperColorOrange50;
+ (SKColor *)paperColorOrange100;
+ (SKColor *)paperColorOrange200;
+ (SKColor *)paperColorOrange300;
+ (SKColor *)paperColorOrange400;
+ (SKColor *)paperColorOrange500;
+ (SKColor *)paperColorOrange600;
+ (SKColor *)paperColorOrange700;
+ (SKColor *)paperColorOrange800;
+ (SKColor *)paperColorOrange900;
+ (SKColor *)paperColorOrangeA100;
+ (SKColor *)paperColorOrangeA200;
+ (SKColor *)paperColorOrangeA400;
+ (SKColor *)paperColorOrangeA700;
+ (SKColor *)paperColorOrange;

#pragma mark - Deep Orange
+ (SKColor *)paperColorDeepOrange50;
+ (SKColor *)paperColorDeepOrange100;
+ (SKColor *)paperColorDeepOrange200;
+ (SKColor *)paperColorDeepOrange300;
+ (SKColor *)paperColorDeepOrange400;
+ (SKColor *)paperColorDeepOrange500;
+ (SKColor *)paperColorDeepOrange600;
+ (SKColor *)paperColorDeepOrange700;
+ (SKColor *)paperColorDeepOrange800;
+ (SKColor *)paperColorDeepOrange900;
+ (SKColor *)paperColorDeepOrangeA100;
+ (SKColor *)paperColorDeepOrangeA200;
+ (SKColor *)paperColorDeepOrangeA400;
+ (SKColor *)paperColorDeepOrangeA700;
+ (SKColor *)paperColorDeepOrange;

#pragma mark - Brown
+ (SKColor *)paperColorBrown50;
+ (SKColor *)paperColorBrown100;
+ (SKColor *)paperColorBrown200;
+ (SKColor *)paperColorBrown300;
+ (SKColor *)paperColorBrown400;
+ (SKColor *)paperColorBrown500;
+ (SKColor *)paperColorBrown600;
+ (SKColor *)paperColorBrown700;
+ (SKColor *)paperColorBrown800;
+ (SKColor *)paperColorBrown900;
+ (SKColor *)paperColorBrown;

#pragma mark - Gray
+ (SKColor *)paperColorGray50;
+ (SKColor *)paperColorGray100;
+ (SKColor *)paperColorGray200;
+ (SKColor *)paperColorGray300;
+ (SKColor *)paperColorGray400;
+ (SKColor *)paperColorGray500;
+ (SKColor *)paperColorGray600;
+ (SKColor *)paperColorGray700;
+ (SKColor *)paperColorGray800;
+ (SKColor *)paperColorGray900;
+ (SKColor *)paperColorGray;

#pragma mark - Blue Gray
+ (SKColor *)paperColorBlueGray50;
+ (SKColor *)paperColorBlueGray100;
+ (SKColor *)paperColorBlueGray200;
+ (SKColor *)paperColorBlueGray300;
+ (SKColor *)paperColorBlueGray400;
+ (SKColor *)paperColorBlueGray500;
+ (SKColor *)paperColorBlueGray600;
+ (SKColor *)paperColorBlueGray700;
+ (SKColor *)paperColorBlueGray800;
+ (SKColor *)paperColorBlueGray900;
+ (SKColor *)paperColorBlueGray;



@end