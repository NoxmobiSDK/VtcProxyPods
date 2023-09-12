

#import <UIKit/UIKit.h>
#import "PopoverAction.h"


typedef NS_ENUM(NSUInteger, PopoverViewArrowStyle) {
    PopoverViewArrowStyleRound = 0,
    PopoverViewArrowStyleTriangle
};

@interface PopoverView : UIView


@property (nonatomic, assign) BOOL hideAfterTouchOutside;


@property (nonatomic, assign) BOOL showShade;

/**
 PopoverViewStyleDefault.
 */
@property (nonatomic, assign) PopoverViewStyle style;

/**
 PopoverViewArrowStyleRound.
 */
@property (nonatomic, assign) PopoverViewArrowStyle arrowStyle;

+ (instancetype)popoverView;

/**

 @param pointView View
 @param actions <PopoverAction>
 */
- (void)showToView:(UIView *)pointView withActions:(NSArray<PopoverAction *> *)actions;

/**

 @param toPoint keyWindow)
 @param actions <PopoverAction>
 */
- (void)showToPoint:(CGPoint)toPoint withActions:(NSArray<PopoverAction *> *)actions;

@end
