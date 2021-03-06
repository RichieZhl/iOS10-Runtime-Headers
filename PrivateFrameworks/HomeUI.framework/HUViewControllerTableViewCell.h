/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUViewControllerTableViewCell : UITableViewCell <HUViewControllerCell> {
    bool  _hasValidHeight;
    UIViewController * _parentViewController;
    UIViewController * _viewController;
    NSArray * _viewControllerConstraints;
    NSLayoutConstraint * _viewControllerHeightConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasValidHeight;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *parentViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController *viewController;
@property (nonatomic, retain) NSArray *viewControllerConstraints;
@property (nonatomic, retain) NSLayoutConstraint *viewControllerHeightConstraint;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_removeFromParentViewControllerAndClearProperty:(bool)arg1;
- (void)_updateHeightConstraint;
- (void)addToParentViewController:(id)arg1;
- (bool)hasValidHeight;
- (id)parentViewController;
- (void)prepareForReuse;
- (void)removeFromParentViewController;
- (void)setHasValidHeight:(bool)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)setViewControllerConstraints:(id)arg1;
- (void)setViewControllerHeightConstraint:(id)arg1;
- (void)updateConstraints;
- (id)viewController;
- (id)viewControllerConstraints;
- (id)viewControllerHeightConstraint;

@end
