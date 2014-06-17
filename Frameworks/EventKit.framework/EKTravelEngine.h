/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class PCPersistentTimer, NSObject<OS_dispatch_source>, NSMutableDictionary, EKTravelEngineThrottle, NSObject<OS_dispatch_queue>, EKTravelAdvisor;

@interface EKTravelEngine : NSObject  {
    NSObject<OS_dispatch_queue> *_travelEngineQueue;
    NSObject<OS_dispatch_source> *_syncYieldTimer;
    PCPersistentTimer *_periodicRefreshTimer;
    bool_running;
    bool_needsRefresh;
    bool_databaseIsEncryptedAndUnreadable;
    bool_yieldingToSync;
    NSMutableDictionary *_eventExternalURLsToAgendaEntries;
    EKTravelAdvisor *_travelAdvisor;
    EKTravelEngineThrottle *_throttle;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _adviceBlock;

}

@property(copy) id adviceBlock;

+ (bool)hasTravelEligibleEvents:(id)arg1;
+ (id)_geoTransportTypeAsString:(int)arg1;
+ (int)_geoTransportTypeForCalLocationRoutingMode:(long long)arg1;
+ (id)_calendarsToSearchInEventStore:(id)arg1;
+ (id)_engineIdentifier;
+ (id)_stringForAuthorizationStatus:(int)arg1;

- (void)_mobileKeyBagLockStatusNotificationReceived;
- (void)_significantTimeChangeNotificationReceived;
- (void)_calSyncClientFinishedMultiSaveNotificationReceived;
- (void)_calSyncClientBeginningMultiSaveNotificationReceived;
- (void)_calDatabaseChangedNotificationReceived;
- (void)ceaseMonitoringAgendaItemForEventWithExternalURL:(id)arg1;
- (void)_installPeriodicRefreshTimer;
- (void)_uninstallPeriodicRefreshTimer;
- (void)_trimAgendaEntriesBeforeDate:(id)arg1 andAfterDate:(id)arg2;
- (void)_locationAuthorizationChanged:(int)arg1;
- (void)_periodicRefreshTimerFired:(id)arg1;
- (id)adviceBlock;
- (void)_installSyncYieldTimer;
- (void)_refreshIfNeeded;
- (void)_registerForNotificationObservation;
- (void)_uninstallSyncYieldTimer;
- (void)_unregisterForNotificationObservation;
- (void)_unregisterAllAgendaItems;
- (bool)_isProtectedDataAvailable;
- (void)setAdviceBlock:(id)arg1;
- (void)_receivedTravelAdvice:(id)arg1 forEventWithExternalURL:(id)arg2;
- (id)init;
- (void)start;
- (void)dealloc;
- (void)stop;

@end