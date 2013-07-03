/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIFacebookLikeStatus, SKUIReviewsFacebookView, SKUIClientContext, <SKUIReviewsFacebookViewControllerDelegate>;

@interface SKUIReviewsFacebookViewController : UIViewController  {
    SKUIClientContext *_clientContext;
    <SKUIReviewsFacebookViewControllerDelegate> *_delegate;
    SKUIFacebookLikeStatus *_facebookLikeStatus;
    SKUIReviewsFacebookView *_facebookView;
}

@property(retain) SKUIClientContext * clientContext;
@property(copy) SKUIFacebookLikeStatus * facebookLikeStatus;
@property <SKUIReviewsFacebookViewControllerDelegate> * delegate;


- (void)_changeStatusToUserLiked:(BOOL)arg1;
- (void)_toggleLike:(id)arg1;
- (void)_reloadFacebookView;
- (id)facebookLikeStatus;
- (void)setFacebookLikeStatus:(id)arg1;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (void)loadView;

@end