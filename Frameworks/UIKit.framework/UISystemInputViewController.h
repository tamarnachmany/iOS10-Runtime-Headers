/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISystemInputViewController : UIViewController <UIRecentsInputViewControllerDelegate> {
    NSMutableDictionary * _accessoryConstraints;
    NSMutableDictionary * _accessoryViewControllers;
    long long  _blurEffectStyle;
    UILexicon * _cachedRecents;
    UITraitCollection * _containingResponderTraitCollection;
    UIView * _containingView;
    UIView * _contentLayoutView;
    bool  _didDisplayRecents;
    UIButton * _doneButton;
    NSArray * _editorConstraints;
    UIKBSystemLayoutViewController * _editorVC;
    NSLayoutConstraint * _horizontalAlignment;
    UIViewController * _inputVC;
    bool  _isAutomaticResponderTransition;
    bool  _isVisible;
    UIKeyboard * _keyboard;
    NSArray * _keyboardConstraints;
    UICompatibilityInputViewController * _keyboardVC;
    bool  _needsSetupAgain;
    UIResponder<UITextInput> * _nextInputDelegate;
    UIResponder<UITextInput> * _persistentDelegate;
    UILabel * _promptLabel;
    UIRecentsInputViewController * _recentsVC;
    bool  _supportsRecentInputsIntegration;
    bool  _supportsTouchInput;
    <UISystemInputViewControllerDelegate> * _systemInputViewControllerDelegate;
    UITextInputTraits * _textInputTraits;
    NSLayoutConstraint * _verticalAlignment;
    bool  _willPresentFullscreen;
}

@property (nonatomic, retain) UILabel *_promptLabel;
@property (nonatomic) long long blurEffectStyle;
@property (nonatomic, retain) UILexicon *cachedRecents;
@property (nonatomic, retain) UITraitCollection *containingResponderTraitCollection;
@property (nonatomic, retain) UIView *containingView;
@property (nonatomic, retain) UIView *contentLayoutView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didDisplayRecents;
@property (nonatomic, retain) UIButton *doneButton;
@property (nonatomic, retain) NSArray *editorConstraints;
@property (nonatomic, retain) UIKBSystemLayoutViewController *editorVC;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *horizontalAlignment;
@property (nonatomic, retain) UIViewController *inputVC;
@property (nonatomic) bool isAutomaticResponderTransition;
@property (nonatomic, retain) UIKeyboard *keyboard;
@property (nonatomic, retain) NSArray *keyboardConstraints;
@property (nonatomic, retain) UICompatibilityInputViewController *keyboardVC;
@property (nonatomic, retain) UIResponder<UITextInput> *nextInputDelegate;
@property (nonatomic, retain) UIResponder<UITextInput> *persistentDelegate;
@property (nonatomic, retain) UIRecentsInputViewController *recentsVC;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsRecentInputsIntegration;
@property (nonatomic) bool supportsTouchInput;
@property (nonatomic) <UISystemInputViewControllerDelegate> *systemInputViewControllerDelegate;
@property (nonatomic, retain) UITextInputTraits *textInputTraits;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } unfocusedFocusGuideOutsets;
@property (nonatomic, retain) NSLayoutConstraint *verticalAlignment;
@property (nonatomic) bool willPresentFullscreen;

+ (id)_canonicalTraitsForResponder:(id)arg1;
+ (bool)canUseSystemInputViewControllerForResponder:(id)arg1;
+ (id)systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2;
+ (id)systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2 containingResponder:(id)arg3;

- (id)_accessoryViewControllerForEdge:(long long)arg1;
- (void)_addAccessoryViewController:(id)arg1;
- (void)_addChildInputViewController;
- (void)_createKeyboardIfNecessary;
- (void)_didSuspend:(id)arg1;
- (bool)_disableAutomaticKeyboardBehavior;
- (void)_dismissSystemInputViewController;
- (id)_effectView;
- (unsigned long long)_horizontalLayoutTypeForEdge:(long long)arg1;
- (id)_promptLabel;
- (void)_removeAccessoryViewController:(id)arg1;
- (void)_returnButtonPressed;
- (void)_setNonInputViewVisibility:(bool)arg1;
- (id)_traitCollectionForUserInterfaceStyle;
- (void)_updateRemoteTextEditingSession;
- (unsigned long long)_verticalLayoutTypeForEdge:(long long)arg1;
- (void)_willResume:(id)arg1;
- (id)accessoryViewControllerForEdge:(long long)arg1;
- (id)alignmentConstraintForAxis:(long long)arg1;
- (long long)blurEffectStyle;
- (id)cachedRecents;
- (void)configureRecentsVCIfNecessary;
- (id)constraintFromView:(id)arg1 attribute:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4;
- (id)constraintsForEdge:(long long)arg1;
- (id)containingResponderTraitCollection;
- (id)containingView;
- (id)contentLayoutView;
- (void)dealloc;
- (bool)didDisplayRecents;
- (void)didSelectRecentInput;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)doneButton;
- (id)doneButtonStringForCurrentInputDelegate;
- (id)editorConstraints;
- (id)editorVC;
- (void)findNextInputDelegate;
- (id)horizontalAlignment;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)inputModeDidChange:(id)arg1;
- (id)inputVC;
- (bool)isAutomaticResponderTransition;
- (id)keyboard;
- (id)keyboardConstraints;
- (id)keyboardVC;
- (id)nextInputDelegate;
- (void)notifyDelegateWithAccessoryVisibility:(bool)arg1;
- (id)persistentDelegate;
- (void)populateCoreHierarchy;
- (id)preferredFocusedItem;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (id)recentsVC;
- (void)reloadInputViewsForPersistentDelegate;
- (void)setAccessoryViewController:(id)arg1 forEdge:(long long)arg2;
- (void)setAlignmentConstraint:(id)arg1 forAxis:(long long)arg2;
- (void)setBlurEffectStyle:(long long)arg1;
- (void)setCachedRecents:(id)arg1;
- (void)setConstraints:(id)arg1 forEdge:(long long)arg2;
- (void)setContainingResponderTraitCollection:(id)arg1;
- (void)setContainingView:(id)arg1;
- (void)setContentLayoutView:(id)arg1;
- (void)setDidDisplayRecents:(bool)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setEditorConstraints:(id)arg1;
- (void)setEditorVC:(id)arg1;
- (void)setHorizontalAlignment:(id)arg1;
- (void)setInputVC:(id)arg1;
- (void)setIsAutomaticResponderTransition:(bool)arg1;
- (void)setKeyboard:(id)arg1;
- (void)setKeyboardConstraints:(id)arg1;
- (void)setKeyboardVC:(id)arg1;
- (void)setNextInputDelegate:(id)arg1;
- (void)setPersistentDelegate:(id)arg1;
- (void)setRecentsVC:(id)arg1;
- (void)setSupportsRecentInputsIntegration:(bool)arg1;
- (void)setSupportsTouchInput:(bool)arg1;
- (void)setSystemInputViewControllerDelegate:(id)arg1;
- (void)setTextInputTraits:(id)arg1;
- (void)setUnfocusedFocusGuideOutsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setVerticalAlignment:(id)arg1;
- (void)setWillPresentFullscreen:(bool)arg1;
- (void)set_promptLabel:(id)arg1;
- (void)setupKeyboard;
- (bool)supportsRecentInputsIntegration;
- (bool)supportsTouchInput;
- (void)switchToKeyboard;
- (id)systemInputViewControllerDelegate;
- (id)textInputTraits;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })unfocusedFocusGuideOutsets;
- (void)updateAlignmentConstraints;
- (void)updateViewConstraints;
- (id)verticalAlignment;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (bool)willPresentFullscreen;
- (bool)willShowRecentsList;

@end
