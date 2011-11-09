/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextRange, UIColor, UITextSelectionView, UITextPosition, UIFont, UIDelayedAction, UIWebDocumentView, UITextInteractionAssistant, <UITextInputDelegate>, <UITextInputTokenizer>, UIView, DOMHTMLElement, NSDictionary, UIView<UITextSelectingContent>, UIResponder<UITextSelection>, WebFrame, NSString, <UITextContentViewDelegate>;

@interface UITextContentView : UIView <UITextInput, UITextSelection, UITextSelectingContainer, UITextInputTraits> {
    id m_delegate;
    WebFrame *m_frame;
    DOMHTMLElement *m_body;
    int m_marginTop;
    UIDelayedAction *m_scrollToVisibleTimer;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } m_selectionInset;
    float m_bottomBufferHeight;
    BOOL m_editable;
    BOOL m_editing;
    BOOL m_becomesEditableWithGestures;
    BOOL m_becomingFirstResponder;
    BOOL m_reentrancyGuard;
    BOOL m_scrollsSelectionOnWebDocumentChanges;
    BOOL m_hasExplicitTextAlignment;
    UITextInteractionAssistant *m_interactionAssistant;
    UITextSelectionView *m_selectionView;
    UIWebDocumentView *m_webView;
    UIFont *m_font;
    UIColor *m_textColor;
    int m_textAlignment;
}

@property <UITextContentViewDelegate> * delegate;
@property(copy) NSString * text;
@property(retain) UIFont * font;
@property(retain) UIColor * textColor;
@property int textAlignment;
@property struct _NSRange { unsigned int x1; unsigned int x2; } selectedRange;
@property(getter=isEditable) BOOL editable;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } selectionInset;
@property BOOL scrollsSelectionOnWebDocumentChanges;
@property(getter=isEditing) BOOL editing;
@property int autocapitalizationType;
@property int autocorrectionType;
@property int spellCheckingType;
@property int keyboardType;
@property int keyboardAppearance;
@property int returnKeyType;
@property BOOL enablesReturnKeyAutomatically;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property(copy) UITextRange * selectedTextRange;
@property(readonly) UITextRange * markedTextRange;
@property(copy) NSDictionary * markedTextStyle;
@property(readonly) UITextPosition * beginningOfDocument;
@property(readonly) UITextPosition * endOfDocument;
@property <UITextInputDelegate> * inputDelegate;
@property(readonly) <UITextInputTokenizer> * tokenizer;
@property(readonly) UIView * textInputView;
@property int selectionAffinity;
@property int selectionGranularity;
@property(readonly) UITextSelectionView * selectionView;
@property(readonly) UITextInteractionAssistant * interactionAssistant;
@property(readonly) UIView<UITextSelectingContent> * content;
@property(readonly) UIResponder<UITextSelection> * textDocument;


- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectionInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_hideSelectionCommands;
- (void)touchScrollToVisibleTimerWithDelay:(double)arg1;
- (void)scrollToVisibleTimerAction;
- (void)performScrollSelectionToVisible:(BOOL)arg1;
- (void)touchScrollToVisibleTimer;
- (BOOL)isSMSTextView;
- (BOOL)scrollsSelectionOnWebDocumentChanges;
- (void)clearScrollToVisibleTimer;
- (void)setScrollsSelectionOnWebDocumentChanges:(BOOL)arg1;
- (id)scrollView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })selectionInset;
- (id)fontForCaretSelection;
- (id)markedText;
- (id)wordRangeContainingCaretSelection;
- (id)wordContainingCaretSelection;
- (unsigned short)characterBeforeCaretSelection;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectContainingCaretSelection;
- (void)setScrollerIndicatorSubrect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAllowsFourWayRubberBanding:(BOOL)arg1;
- (void)setAllowsRubberBanding:(BOOL)arg1;
- (void)displayScrollerIndicators;
- (BOOL)showScrollerIndicators;
- (void)setShowScrollerIndicators:(BOOL)arg1;
- (float)bottomBufferHeight;
- (void)setBottomBufferHeight:(float)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setMarginTop:(int)arg1;
- (int)marginTop;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (BOOL)becomesEditableWithGestures;
- (void)setSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)contentAsHTMLString;
- (void)setContentToHTMLString:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSelection:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setSelectionToStart;
- (void)updateSelection;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 webView:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (void)resetDataDetectorsResultsWithWebLock;
- (void)recalculateStyle;
- (void)setRichText:(BOOL)arg1;
- (void)startDataDetectorsWithWebLock;
- (BOOL)shouldStartDataDetectors;
- (void)ensureSelection;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForScrollToVisible;
- (id)undoManagerForWebView:(id)arg1;
- (id)undoNameForMarsVoltaInsertion;
- (void)_showTextStyleOptions:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleTextRect;
- (void)setSelectionToEnd;
- (void)performBecomeEditableTasks;
- (void)setSelectionChangeCallbacksDisabled:(BOOL)arg1;
- (void)detachInteractionAssistant;
- (void)detachSelectionView;
- (void)cancelDataDetectorsWithWebLock;
- (void)keyboardDidShow:(id)arg1;
- (void)updateContentEditableAttribute:(BOOL)arg1;
- (void)registerForEditingDelegateNotification:(id)arg1 selector:(SEL)arg2;
- (void)updateWebViewObjects;
- (struct CGSize { float x1; float x2; })tileSizeForSize:(struct CGSize { float x1; float x2; })arg1;
- (unsigned int)dataDetectorTypes;
- (void)setDataDetectorTypes:(unsigned int)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)commonInitWithWebDocumentView:(id)arg1 isDecoding:(BOOL)arg2;
- (id)automaticallySelectedOverlay;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForVisiblePosition:(id)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectedRange;
- (void)webViewDidChange:(id)arg1;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (id)_findWebViewWordBoundaryFromPosition:(id)arg1;
- (BOOL)caretBlinks;
- (BOOL)selectionVisible;
- (void)setSelectionVisible:(BOOL)arg1;
- (id)documentFragmentForPasteboardItemAtIndex:(int)arg1;
- (id)supportedPasteboardTypesForCurrentSelection;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (id)_keyboardResponder;
- (BOOL)isEditable;
- (id)textDocument;
- (id)content;
- (BOOL)willInteractWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)cancelInteractionWithLink;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)isInteractingWithLink;
- (void)tapLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)mightHaveLinks;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionClipRect;
- (id)rectsForRange:(id)arg1;
- (void)setSelectionGranularity:(int)arg1;
- (int)selectionGranularity;
- (void)setSelectionAffinity:(int)arg1;
- (int)selectionAffinity;
- (id)characterRangeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (id)tokenizer;
- (void)setInputDelegate:(id)arg1;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)endOfDocument;
- (id)beginningOfDocument;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (id)markedTextStyle;
- (id)markedTextRange;
- (void)setSelectedTextRange:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (BOOL)hasText;
- (id)metadataDictionariesForMarsVoltas;
- (void)removeYakushimasPlaceholder:(id)arg1 willInsertText:(BOOL)arg2;
- (id)insertYakushimasPlaceholder:(struct CGSize { float x1; float x2; })arg1;
- (void)insertMarsVoltas:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (void)insertText:(id)arg1;
- (void)deleteBackward;
- (void)_underline:(id)arg1;
- (void)_italicize:(id)arg1;
- (void)_bold:(id)arg1;
- (void)_define:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)select:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (void)copy:(id)arg1;
- (void)paste:(id)arg1;
- (void)replace:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)cut:(id)arg1;
- (id)inputDelegate;
- (id)selectedText;
- (struct CGPoint { float x1; float x2; })constrainedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned int)offsetInMarkedTextForSelection:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)textInRange:(id)arg1;
- (id)selectedTextRange;
- (id)selectionRectsForRange:(id)arg1;
- (void)cancelAutoscroll;
- (void)startAutoscroll:(struct CGPoint { float x1; float x2; })arg1;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (BOOL)hasSelection;
- (BOOL)canResignFirstResponder;
- (void)selectAll;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputChanged:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectionRange;
- (id)textColor;
- (BOOL)hasMarkedText;
- (void)forwardInvocation:(id)arg1;
- (id)textInputTraits;
- (id)styleString;
- (id)webView;
- (BOOL)isFirstResponder;
- (id)interactionAssistant;
- (void)setCaretBlinks:(BOOL)arg1;
- (id)selectionView;
- (int)textAlignment;
- (void)setTextAlignment:(int)arg1;
- (void)setEditing:(BOOL)arg1;
- (BOOL)isEditing;
- (void)_scrollViewDidEndDecelerating;
- (void)setScrollingEnabled:(BOOL)arg1;
- (void)setOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })offset;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1;
- (void)_scrollViewWillBeginDragging;
- (id)_automationValue;
- (void)_didScroll;
- (BOOL)canBecomeFirstResponder;
- (void)didMoveToSuperview;
- (BOOL)becomeFirstResponder;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (BOOL)scrollingEnabled;
- (id)font;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)undoManager;
- (id)text;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (id)delegate;
- (void)setText:(id)arg1;
- (void)removeFromSuperview;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end