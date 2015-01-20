/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigVideoCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {
    int _orientation;
    int _outputFormat;
    int _outputHeight;
    int _outputWidth;
    int _retainedBufferCount;
    int _videoStabilizationMethod;
    bool_mirroringEnabled;
}

@property bool mirroringEnabled;
@property int orientation;
@property int outputFormat;
@property int outputHeight;
@property int outputWidth;
@property int retainedBufferCount;
@property int videoStabilizationMethod;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)mirroringEnabled;
- (int)orientation;
- (int)outputFormat;
- (int)outputHeight;
- (int)outputWidth;
- (int)retainedBufferCount;
- (void)setMirroringEnabled:(bool)arg1;
- (void)setOrientation:(int)arg1;
- (void)setOutputFormat:(int)arg1;
- (void)setOutputHeight:(int)arg1;
- (void)setOutputWidth:(int)arg1;
- (void)setRetainedBufferCount:(int)arg1;
- (void)setVideoStabilizationMethod:(int)arg1;
- (int)videoStabilizationMethod;

@end