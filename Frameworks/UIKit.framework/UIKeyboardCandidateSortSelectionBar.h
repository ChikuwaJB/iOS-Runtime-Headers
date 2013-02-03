/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UISegmentedControl, NSArray, UIButton, UIKeyboardCandidateArrowButton;

@interface UIKeyboardCandidateSortSelectionBar : UIToolbar {
    UIKeyboardCandidateArrowButton *_arrowButton;
    UIButton *_collapseButton;
    int _keyboardBehavior;
    BOOL _layoutOnFrameChange;
    BOOL _reducedWidth;
    UISegmentedControl *_segmentedControl;
    NSArray *_sorts;
}

@property(retain) UIKeyboardCandidateArrowButton * arrowButton;
@property(retain) UIButton * collapseButton;
@property int keyboardBehavior;
@property BOOL layoutOnFrameChange;
@property(readonly) unsigned int numberOfSegments;
@property BOOL reducedWidth;
@property(retain) UISegmentedControl * segmentedControl;
@property int selectedSegmentIndex;
@property(retain) NSArray * sorts;

- (id)actionsForTarget:(id)arg1 forControlEvent:(unsigned int)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned int)arg3;
- (unsigned int)allControlEvents;
- (id)allTargets;
- (id)arrowButton;
- (id)collapseButton;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyboardBehavior:(int)arg2;
- (int)keyboardBehavior;
- (void)layout;
- (BOOL)layoutOnFrameChange;
- (unsigned int)numberOfSegments;
- (BOOL)reducedWidth;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned int)arg3;
- (id)segmentedControl;
- (void)selectNextSegment;
- (void)selectPreviousSegment;
- (int)selectedSegmentIndex;
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
- (void)sendActionsForControlEvents:(unsigned int)arg1;
- (void)setArrowButton:(id)arg1;
- (void)setCollapseButton:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setKeyboardBehavior:(int)arg1;
- (void)setLayoutOnFrameChange:(BOOL)arg1;
- (void)setReducedWidth:(BOOL)arg1;
- (void)setSegmentedControl:(id)arg1;
- (void)setSelectedSegmentIndex:(int)arg1;
- (void)setSorts:(id)arg1;
- (id)sorts;

@end