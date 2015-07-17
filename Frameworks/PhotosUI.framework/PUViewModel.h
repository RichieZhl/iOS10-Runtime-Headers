/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUViewModel : NSObject {
    NSHashTable * __changeObservers;
    BOOL  __publishingChanges;
    PUViewModelChange * _currentChange;
    int  _nestedChanges;
    int  _numAppliedPendingChanges;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSMutableArray * _pendingChangeBlocks;
}

@property (nonatomic, readonly) NSHashTable *_changeObservers;
@property (getter=_isPublishingChanges, setter=_setPublishingChanges:, nonatomic) BOOL _publishingChanges;
@property (nonatomic, readonly) PUViewModelChange *currentChange;

- (void).cxx_destruct;
- (void)_applyPendingChanges;
- (id)_changeObservers;
- (void)_didChange;
- (BOOL)_isPublishingChanges;
- (void)_publishChanges;
- (void)_setPublishingChanges:(BOOL)arg1;
- (void)_willChange;
- (void)assertInsideChangesBlock;
- (id)currentChange;
- (id)debugDetailedDescription;
- (void)didPerformChanges;
- (id)init;
- (id)newViewModelChange;
- (void)performChanges:(id /* block */)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)willPublishChanges;

@end