/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUISingleResultTableViewCell : SearchUITableViewCell <CNAvatarViewDelegate, NUIContainerStackViewDelegate> {
    SearchUIAccessoryViewController * _accessoryViewControllerForResult;
    NSMutableDictionary * _accessoryViewControllers;
    CNAvatarView * _contactView;
    NUIContainerStackView * _container;
    SearchUIForceTouchGestureRecognizer * _forceTouchRecognizer;
    SearchUITextAreaView * _textAreaView;
    SearchUIThumbnailView * _thumbnailView;
}

@property (retain) SearchUIAccessoryViewController *accessoryViewControllerForResult;
@property (retain) NSMutableDictionary *accessoryViewControllers;
@property (retain) CNAvatarView *contactView;
@property (retain) NUIContainerStackView *container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) SearchUIForceTouchGestureRecognizer *forceTouchRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) SearchUITextAreaView *textAreaView;
@property (retain) SearchUIThumbnailView *thumbnailView;

- (void).cxx_destruct;
- (id)accessoryViewControllerForResult;
- (id)accessoryViewControllers;
- (bool)arrangedViewMustCenter:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })computeLayoutMargins;
- (id)contactInlineActionViewController;
- (id)contactView;
- (id)container;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerStackView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })containerStackView:(id)arg1 minimumSpacingAdjecentToArrangedSubview:(id)arg2;
- (struct CGSize { double x1; double x2; })containerStackView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (id)forceTouchRecognizer;
- (id)initWithResult:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)setAccessoryViewControllerForResult:(id)arg1;
- (void)setAccessoryViewControllers:(id)arg1;
- (void)setContactView:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setForceTouchRecognizer:(id)arg1;
- (void)setTextAreaView:(id)arg1;
- (void)setThumbnailView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)stackViewDidInvalidateIntrinsicContentSize:(id)arg1;
- (id)textAreaView;
- (id)thumbnailView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateForceTouchRecognizerWithResult:(id)arg1;
- (void)updateThumbnailWithResult:(id)arg1;
- (void)updateWithResult:(id)arg1;

@end
