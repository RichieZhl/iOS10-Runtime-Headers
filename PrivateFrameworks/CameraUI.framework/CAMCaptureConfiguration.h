/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCaptureConfiguration : NSObject {
    long long  _HDRMode;
    long long  _audioConfiguration;
    long long  _device;
    long long  _flashMode;
    long long  _irisMode;
    long long  _mode;
    long long  _photoModeEffectFilterType;
    long long  _squareModeEffectFilterType;
    long long  _timerDuration;
    long long  _torchMode;
    long long  _videoConfiguration;
}

@property (nonatomic, readonly) long long HDRMode;
@property (nonatomic, readonly) long long audioConfiguration;
@property (nonatomic, readonly) long long device;
@property (nonatomic, readonly) long long flashMode;
@property (nonatomic, readonly) long long irisMode;
@property (nonatomic, readonly) long long mode;
@property (nonatomic, readonly) long long photoModeEffectFilterType;
@property (nonatomic, readonly) long long squareModeEffectFilterType;
@property (nonatomic, readonly) long long timerDuration;
@property (nonatomic, readonly) long long torchMode;
@property (nonatomic, readonly) long long videoConfiguration;

+ (long long)_fallbackVideoConfigurationForUnsupportedConfiguration:(long long)arg1;
+ (long long)audioConfigurationForMode:(long long)arg1 device:(long long)arg2 emulationMode:(long long)arg3 duringCall:(bool)arg4;
+ (id)captureGraphConfigurationUsingConfiguration:(id)arg1;
+ (long long)sanitizeVideoConfigurationForDesiredConfiguration:(long long)arg1 mode:(long long)arg2 device:(long long)arg3;

- (long long)HDRMode;
- (long long)audioConfiguration;
- (long long)device;
- (long long)flashMode;
- (id)initWithCaptureMode:(long long)arg1 captureDevice:(long long)arg2 videoConfiguration:(long long)arg3 audioConfiguration:(long long)arg4 flashMode:(long long)arg5 torchMode:(long long)arg6 HDRMode:(long long)arg7 irisMode:(long long)arg8 timerDuration:(long long)arg9 photoModeEffectFilterType:(long long)arg10 squareModeEffectFilterType:(long long)arg11;
- (long long)irisMode;
- (long long)mode;
- (long long)photoModeEffectFilterType;
- (long long)squareModeEffectFilterType;
- (long long)timerDuration;
- (long long)torchMode;
- (long long)videoConfiguration;

@end
