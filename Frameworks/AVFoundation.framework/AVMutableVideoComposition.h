/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMutableVideoCompositionInternal, AVVideoCompositionCoreAnimationTool, NSArray;

@interface AVMutableVideoComposition : AVVideoComposition  {
    AVMutableVideoCompositionInternal *_mutableVideoComposition;
}

@property(retain) Class customVideoCompositorClass;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } frameDuration;
@property struct CGSize { float x1; float x2; } renderSize;
@property float renderScale;
@property(copy) NSArray * instructions;
@property(retain) AVVideoCompositionCoreAnimationTool * animationTool;

+ (id)videoCompositionWithPropertiesOfAsset:(id)arg1 videoGravity:(id)arg2;
+ (id)videoCompositionWithPropertiesOfAsset:(id)arg1;
+ (id)videoComposition;

- (void)setAnimationTool:(id)arg1;
- (void)setInstructions:(id)arg1;
- (void)setRenderScale:(float)arg1;
- (void)setRenderSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setCustomVideoCompositorClass:(Class)arg1;
- (Class)customVideoCompositorClass;
- (void)setBuiltInCompositorName:(id)arg1;
- (id)instructions;
- (id)builtInCompositorName;
- (id)animationTool;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameDuration;
- (float)renderScale;
- (struct CGSize { float x1; float x2; })renderSize;

@end