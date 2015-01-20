/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNBuildDiffuseSystem, NSString, TSDGLDataBuffer, TSDGLShader;

@interface KNBuildDiffuse : KNAnimationEffect <KNFrameBuildAnimator> {
    struct CATransform3D { 
        double m11; 
        double m12; 
        double m13; 
        double m14; 
        double m21; 
        double m22; 
        double m23; 
        double m24; 
        double m31; 
        double m32; 
        double m33; 
        double m34; 
        double m41; 
        double m42; 
        double m43; 
        double m44; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } mBaseTransform;
    TSDGLShader *mDiffuseShader;
    KNBuildDiffuseSystem *mDiffuseSystem;
    } mDrawableFrame;
    } mFrameRect;
    TSDGLDataBuffer *mQuadDataBuffer;
    TSDGLShader *mQuadShader;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (int)animationCategory;
+ (id)animationFilter;
+ (id)animationName;
+ (id)defaultAttributes;
+ (unsigned long long)directionType;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (id)localizedMenuString:(int)arg1;
+ (bool)requiresSingleTexturePerStage;
+ (id)supportedTypes;
+ (id)thumbnailImageNameForType:(int)arg1;

- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfEffectWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(id)arg2;
- (void)p_setupParticleSystemWithImage:(id)arg1 build:(id)arg2;
- (void)renderFrameWithContext:(id)arg1;

@end