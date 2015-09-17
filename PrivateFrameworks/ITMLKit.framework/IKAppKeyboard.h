/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppKeyboard : NSObject <IKAppKeyboardBridge, IKDOMFeature> {
    IKAppContext *_appContext;
    <IKAppKeyboardDelegate> *_delegate;
    NSString *_featureName;
    IKJSKeyboard *_jsKeyboard;
    NSString *_jsText;
    NSString *_text;
}

@property (nonatomic, readonly) IKAppContext *appContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IKAppKeyboardDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureName;
@property (readonly) unsigned int hash;
@property (setter=setJSKeyboard:, nonatomic) IKJSKeyboard *jsKeyboard;
@property (setter=setJSText:, nonatomic, copy) NSString *jsText;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

+ (id)makeFeatureJSObjectForFeature:(id)arg1;

- (void).cxx_destruct;
- (id)appContext;
- (id)delegate;
- (id)featureName;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;
- (id)jsKeyboard;
- (id)jsText;
- (void)setDelegate:(id)arg1;
- (void)setJSKeyboard:(id)arg1;
- (void)setJSText:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end