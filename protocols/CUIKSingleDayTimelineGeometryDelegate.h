/* Generated by RuntimeBrowser.
 */

@protocol CUIKSingleDayTimelineGeometryDelegate <NSObject>

@required

- (double)dateForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })displayedRect;
- (float)hourHeight;
- (BOOL)originIsUpperLeft;
- (struct CGPoint { float x1; float x2; })pointForDate:(double)arg1;
- (float)timeWidth;
- (float)topPadding;

@end