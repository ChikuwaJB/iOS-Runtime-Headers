/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INImage : NSObject <INCacheableObject, INImageExport, NSCopying, NSSecureCoding> {
    NSString * _bundlePath;
    NSString * _identifier;
    NSData * _imageData;
    NSString * _name;
    NSURL * _uri;
}

@property (setter=_setBundlePath:, nonatomic, copy) NSString *_bundlePath;
@property (nonatomic, readonly, copy) NSString *_identifier;
@property (setter=_setImageData:, nonatomic, copy) NSData *_imageData;
@property (setter=_setName:, nonatomic, copy) NSString *_name;
@property (setter=_setUri:, nonatomic, copy) NSURL *_uri;
@property (nonatomic, readonly, copy) NSString *cacheIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (void)buildFromCachePayload:(id)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
+ (id)imageNamed:(id)arg1;
+ (id)imageWithImageData:(id)arg1;
+ (id)imageWithURL:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_bundlePath;
- (id)_identifier;
- (id)_imageData;
- (id)_init;
- (id)_initWithIdentifier:(id)arg1;
- (id)_name;
- (void)_setBundlePath:(id)arg1;
- (void)_setImageData:(id)arg1;
- (void)_setName:(id)arg1;
- (void)_setUri:(id)arg1;
- (id)_uri;
- (id)cacheIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)generateCachePayloadWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

// Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI

+ (struct CGSize { float x1; float x2; })imageSizeForIntentResponse:(id)arg1;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1;
+ (id)imageWithUIImage:(id)arg1;

@end
