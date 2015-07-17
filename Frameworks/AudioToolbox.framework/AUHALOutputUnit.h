/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface AUHALOutputUnit : AUAudioUnitV2Bridge {
    id /* block */  _inputHandler;
    bool  _inputWasEnabled;
    id /* block */  _outputProvider;
    bool  _outputWasEnabled;
}

@property (getter=isInputEnabled, nonatomic) BOOL inputEnabled;
@property (getter=isOutputEnabled, nonatomic) BOOL outputEnabled;

- (id /* block */)_inputHandler;
- (BOOL)canPerformInput;
- (BOOL)canPerformOutput;
- (void)dealloc;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned long)arg2 error:(id*)arg3;
- (BOOL)isInputEnabled;
- (BOOL)isOutputEnabled;
- (id /* block */)outputProvider;
- (void)setInputEnabled:(BOOL)arg1;
- (void)setInputHandler:(id /* block */)arg1;
- (void)setOutputEnabled:(BOOL)arg1;
- (void)setOutputProvider:(id /* block */)arg1;
- (BOOL)startHardwareAndReturnError:(id*)arg1;
- (void)stopHardware;

@end