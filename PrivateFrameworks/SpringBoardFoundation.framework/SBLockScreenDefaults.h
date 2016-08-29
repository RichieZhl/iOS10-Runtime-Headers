/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBLockScreenDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) bool limitFeaturesForRemoteLock;
@property (nonatomic, readonly) bool lostModeDisableDashBoard;
@property (nonatomic) bool showAuthenticationEngineeringUI;
@property (nonatomic, readonly) bool showLegalText;
@property (nonatomic) bool useDashBoard;

- (void)_bindAndRegisterDefaults;
- (bool)lostModeDisableDashBoard;
- (bool)useDashBoard;

@end