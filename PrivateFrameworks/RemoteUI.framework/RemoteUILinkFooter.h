/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class UIButton;

@interface RemoteUILinkFooter : UIView <RemoteUITableFooter> {
    UIButton *_linkButton;
    id _delegate;
}

@property(readonly) UIButton * linkButton;


- (id)linkButton;
- (void)_linkPressed;
- (float)footerHeightForWidth:(float)arg1 inTableView:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;

@end