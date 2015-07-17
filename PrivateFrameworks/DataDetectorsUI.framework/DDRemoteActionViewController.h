/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDRemoteActionViewController : _UIRemoteViewController <DDRemoteActionPresenter> {
    DDAction * _action;
    DDActionController * _actionController;
    BOOL  _proxyConfigured;
    BOOL  _receivedActionDidFinish;
    BOOL  _waitingForRemoteConfiguration;
}

@property (retain) DDAction *action;
@property DDActionController *actionController;

+ (id)exportedInterface;
+ (id)prepareViewController:(id)arg1 forAction:(id)arg2 actionController:(id)arg3;
+ (id)serviceViewControllerInterface;

- (void)_prepareForAction:(id)arg1 inActionController:(id)arg2;
- (id)action;
- (id)actionController;
- (void)actionDidFinish;
- (void)getIsBeingPresentedInPopover:(id /* block */)arg1;
- (void)setAction:(id)arg1;
- (void)setActionController:(id)arg1;
- (void)viewControllerReadyAndIsModal:(BOOL)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end