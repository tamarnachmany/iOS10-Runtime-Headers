/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlSliderValueOverlayView : UIView {
    bool  _off;
}

@property (nonatomic, readonly) CAShapeLayer *layer;
@property (getter=isOff, nonatomic) bool off;

+ (Class)layerClass;

- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateBlendMode;
- (void)_updateShape;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isOff;
- (void)layoutSubviews;
- (void)setOff:(bool)arg1;

@end
