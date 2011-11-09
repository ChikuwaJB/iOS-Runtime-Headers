/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, _UISegmentedControlAppearanceStorage, UIView;

@interface UISegment : UIImageView  {
    UIView *_info;
    _UISegmentedControlAppearanceStorage *_appearanceStorage;
    float _width;
    struct CGSize { 
        float width; 
        float height; 
    } _contentOffset;
    UIColor *_tintColor;
    int _barStyle;
    struct { 
        unsigned int style : 3; 
        unsigned int size : 2; 
        unsigned int selected : 1; 
        unsigned int highlighted : 1; 
        unsigned int showDivider : 1; 
        unsigned int hasImage : 1; 
        unsigned int isDisclosure : 1; 
        unsigned int position : 3; 
        unsigned int autosizeText : 1; 
        unsigned int isMomentary : 1; 
    } _segmentFlags;
}

@property(getter=isSelected) BOOL selected;
@property(getter=isMomentary) BOOL momentary;
@property int controlSize;


- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPosition:(unsigned int)arg1;
- (float)_idealWidth;
- (id)infoName;
- (void)animateRemoveForWidth:(float)arg1;
- (void)animateAdd:(BOOL)arg1;
- (void)setShowDivider:(BOOL)arg1;
- (void)setMomentary:(BOOL)arg1;
- (BOOL)isMomentary;
- (void)setAutosizeText:(BOOL)arg1;
- (id)initWithInfo:(id)arg1 style:(int)arg2 size:(int)arg3 barStyle:(int)arg4 tintColor:(id)arg5 appearanceStorage:(id)arg6 position:(unsigned int)arg7 isDisclosure:(BOOL)arg8 autosizeText:(BOOL)arg9;
- (void)_positionInfo;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRect;
- (float)_barHeight;
- (float)_paddingForLeft:(BOOL)arg1;
- (void)_setEnabledAppearance:(BOOL)arg1;
- (void)updateDividerViewToMatchSegment:(id)arg1;
- (id)_currentOptionsStyleTextShadowColor;
- (id)_currentOptionsStyleTextColor;
- (id)disabledTextColor;
- (void)_updateTexturedBackgroundImage;
- (id)_texturedRightCapImage;
- (void)_tileImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)_texturedFillImage;
- (id)_texturedLeftCapImage;
- (id)_dividerImageForRight:(BOOL)arg1;
- (id)_dividerImageForRight:(BOOL)arg1 isCustom:(BOOL*)arg2;
- (unsigned int)_segmentState;
- (BOOL)_isInMiniBar;
- (id)info;
- (void)_commonInitWithInfo:(id)arg1 position:(unsigned int)arg2 autosizeText:(BOOL)arg3;
- (void)_updateTextColors;
- (void)insertDividerView;
- (void)setInfo:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (BOOL)isHighlighted;
- (BOOL)isSelected;
- (int)controlSize;
- (void)setHighlighted:(BOOL)arg1;
- (void)setTintColor:(id)arg1;
- (void)setBarStyle:(int)arg1;
- (void)setControlSize:(int)arg1;
- (void)_updateBackgroundImage;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)setContentOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setEnabled:(BOOL)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)useBlockyMagnificationInClassic;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end