/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, AVItem, NSDictionary;

@interface SBUISound : NSObject  {
    long long _soundType;
    unsigned int _systemSoundID;
    unsigned long long _soundBehavior;
    NSString *_ringtoneName;
    AVItem *_avItem;
    NSDictionary *_vibrationPattern;
    bool_repeats;
    double _maxDuration;
    NSDictionary *_controllerAttributes;
    int _alertType;
    NSString *_accountIdentifier;
    NSString *_toneIdentifier;
    NSString *_vibrationIdentifier;
    NSString *_resolvedToneIdentifier;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    NSString *_songPath;
}

@property long long soundType;
@property unsigned int systemSoundID;
@property unsigned long long soundBehavior;
@property(retain) NSString * ringtoneName;
@property(retain) AVItem * avItem;
@property(retain) NSDictionary * vibrationPattern;
@property(getter=isRepeating) bool repeats;
@property double maxDuration;
@property(retain) NSDictionary * controllerAttributes;
@property int alertType;
@property(copy) NSString * accountIdentifier;
@property(copy) NSString * toneIdentifier;
@property(copy) NSString * vibrationIdentifier;
@property(copy) NSString * songPath;


- (id)vibrationIdentifier;
- (id)toneIdentifier;
- (id)ringtoneName;
- (unsigned long long)soundBehavior;
- (id)songPath;
- (unsigned int)systemSoundID;
- (void)setVibrationIdentifier:(id)arg1;
- (void)setToneIdentifier:(id)arg1;
- (void)setRepeats:(bool)arg1;
- (void)setRingtoneName:(id)arg1;
- (void)setSoundBehavior:(unsigned long long)arg1;
- (void)setSystemSoundID:(unsigned int)arg1;
- (void)setSongPath:(id)arg1;
- (id)initWithSystemSoundPath:(id)arg1 behavior:(unsigned long long)arg2 vibrationPattern:(id)arg3;
- (id)initWithSystemSoundID:(unsigned int)arg1 behavior:(unsigned long long)arg2 vibrationPattern:(id)arg3;
- (void)setAlertType:(int)arg1;
- (int)alertType;
- (void)_setResolvedToneIdentifier:(id)arg1;
- (id)_resolvedToneIdentifier;
- (void)_setCompletionBlock:(id)arg1;
- (id)initWithSong:(id)arg1 vibrationPattern:(id)arg2 repeats:(bool)arg3 maxDuration:(double)arg4 controllerAttributes:(id)arg5;
- (id)initWithToneAlert:(int)arg1 accountIdentifier:(id)arg2 toneIdentifier:(id)arg3 vibrationIdentifier:(id)arg4;
- (id)initWithAVItem:(id)arg1 vibrationPattern:(id)arg2 repeats:(bool)arg3 maxDuration:(double)arg4 controllerAttributes:(id)arg5;
- (id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(bool)arg3 maxDuration:(double)arg4 controllerAttributes:(id)arg5;
- (id)controllerAttributes;
- (void)setAvItem:(id)arg1;
- (void)setControllerAttributes:(id)arg1;
- (bool)playInEvironments:(long long)arg1 completion:(id)arg2;
- (bool)isRepeating;
- (double)maxDuration;
- (void)setMaxDuration:(double)arg1;
- (id)vibrationPattern;
- (void)setVibrationPattern:(id)arg1;
- (id)avItem;
- (bool)isPlaying;
- (void)setAccountIdentifier:(id)arg1;
- (id)accountIdentifier;
- (void)stop;
- (void)dealloc;
- (id)description;
- (id)_completionBlock;
- (long long)soundType;
- (void)setSoundType:(long long)arg1;

@end