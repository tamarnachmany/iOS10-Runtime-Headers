/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMTopBar : UIView <CAMExpandableMenuButtonDelegate> {
    CAMHDRButton * _HDRButton;
    NSMutableArray * __allowedControls;
    UIView * __backgroundView;
    CAMExpandableMenuButton * __expandedMenuButton;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  __expandedMenuButtonTappableInsets;
    int  _backgroundStyle;
    CAMElapsedTimeView * _elapsedTimeView;
    CAMFlashButton * _flashButton;
    CAMFlipButton * _flipButton;
    CAMTimerButton * _timerButton;
    <CAMControlVisibilityDelegate> * _visibilityDelegate;
}

@property (nonatomic, retain) CAMHDRButton *HDRButton;
@property (nonatomic, readonly) NSMutableArray *_allowedControls;
@property (nonatomic, readonly) UIView *_backgroundView;
@property (setter=_setExpandedMenuButton:, nonatomic, retain) CAMExpandableMenuButton *_expandedMenuButton;
@property (setter=_setExpandedMenuButtonTappableInsets:, nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } _expandedMenuButtonTappableInsets;
@property (nonatomic) int backgroundStyle;
@property (nonatomic, retain) CAMElapsedTimeView *elapsedTimeView;
@property (nonatomic, retain) CAMFlashButton *flashButton;
@property (nonatomic, retain) CAMFlipButton *flipButton;
@property (nonatomic, retain) CAMTimerButton *timerButton;
@property (nonatomic) <CAMControlVisibilityDelegate> *visibilityDelegate;

- (void).cxx_destruct;
- (id)HDRButton;
- (id)_allowedControls;
- (id)_allowedControlsForPanoramaMode;
- (id)_allowedControlsForSquareMode;
- (id)_allowedControlsForStillImageMode;
- (id)_allowedControlsForTimelapseMode;
- (id)_allowedControlsForVideoMode;
- (id)_backgroundView;
- (void)_commonCAMTopBarInitialization;
- (id)_expandedMenuButton;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_expandedMenuButtonTappableInsets;
- (void)_layoutControls:(id)arg1 apply:(BOOL)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg5;
- (void)_setExpandedMenuButton:(id)arg1;
- (void)_setExpandedMenuButtonTappableInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)_shouldExpandButtonsHorizontally;
- (void)_updateControlVisibilityAnimated:(BOOL)arg1;
- (int)backgroundStyle;
- (void)collapseMenuButton:(id)arg1 animated:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })collapsedFrameForMenuButton:(id)arg1;
- (void)configureForMode:(int)arg1;
- (id)elapsedTimeView;
- (void)expandMenuButton:(id)arg1 animated:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })expandedFrameForMenuButton:(id)arg1;
- (id)flashButton;
- (id)flipButton;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setBackgroundStyle:(int)arg1;
- (void)setBackgroundStyle:(int)arg1 animated:(BOOL)arg2;
- (void)setElapsedTimeView:(id)arg1;
- (void)setFlashButton:(id)arg1;
- (void)setFlipButton:(id)arg1;
- (void)setHDRButton:(id)arg1;
- (void)setTimerButton:(id)arg1;
- (void)setVisibilityDelegate:(id)arg1;
- (id)timerButton;
- (id)visibilityDelegate;

@end