/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, PFUbiquitySaveSnapshot, NSRecursiveLock, PFUbiquityLocation, NSString, PFUbiquityKnowledgeVector, NSNumber;

@interface PFUbiquityTransactionLog : NSObject  {
    NSMutableDictionary *_contents;
    int _transactionLogType;
    BOOL _useTemporaryLogLocation;
    PFUbiquityLocation *_transactionLogLocation;
    PFUbiquityLocation *_temporaryTransactionLogLocation;
    PFUbiquityLocation *_stagingTransactionLogLocation;
    NSString *_fileProtectionOption;
    BOOL _inTemporaryLocation;
    BOOL _inStagingLocation;
    BOOL _inPermanentLocation;
    PFUbiquityKnowledgeVector *_knowledgeVector;
    PFUbiquitySaveSnapshot *_saveSnapshot;
    NSString *_localPeerID;
    BOOL _loadUsingRetry;
    BOOL _loadedComparisonMetadata;
    BOOL _loadedImportMetadata;
    BOOL _loadedInsertedObjectData;
    BOOL _loadedUpdatedObjectData;
    BOOL _loadedDeletedObjectData;
    BOOL _loadedContents;
    NSRecursiveLock *_contentsLock;
}

@property BOOL useTemporaryLogLocation;
@property(readonly) BOOL inTemporaryLocation;
@property(readonly) BOOL inStagingLocation;
@property(readonly) BOOL inPermanentLocation;
@property(readonly) NSString * storeName;
@property(readonly) NSString * exportingPeerID;
@property(readonly) NSString * modelVersionHash;
@property(readonly) NSString * fileProtectionOption;
@property(readonly) NSNumber * transactionNumber;
@property(readonly) NSString * transactionLogFilename;
@property(readonly) int transactionLogType;
@property(readonly) PFUbiquityLocation * transactionLogLocation;
@property(readonly) PFUbiquityLocation * temporaryTransactionLogLocation;
@property(readonly) PFUbiquityLocation * stagingTransactionLogLocation;
@property(readonly) PFUbiquitySaveSnapshot * saveSnapshot;
@property(readonly) PFUbiquityLocation * currentLocation;
@property(readonly) PFUbiquityKnowledgeVector * knowledgeVector;
@property(readonly) NSString * localPeerID;
@property BOOL loadUsingRetry;
@property(readonly) BOOL loadedComparisonMetadata;
@property(readonly) BOOL loadedImportMetadata;
@property(readonly) BOOL loadedInsertedObjectData;
@property(readonly) BOOL loadedUpdatedObjectData;
@property(readonly) BOOL loadedDeletedObjectData;

+ (id)generateTransactionLogFilename;
+ (void)truncateLogFilesBeforeBaselineMetadata:(id)arg1 withLocalPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;
+ (id)transactionLogFilenameUUID;
+ (void)updateModificationTimesForLocation:(id)arg1;
+ (id)createDataFromExtendedAttrsForLog:(id)arg1 error:(id*)arg2;
+ (id)createTransactionLogFilenameForLogType:(int)arg1;
+ (int)transactionLogTypeFromLocation:(id)arg1;
+ (BOOL)pruneTemporaryLogDirectoryForPeerRootLocation:(id)arg1 error:(id*)arg2;

- (BOOL)loadedDeletedObjectData;
- (BOOL)loadedUpdatedObjectData;
- (BOOL)loadedInsertedObjectData;
- (BOOL)loadedImportMetadata;
- (BOOL)loadedComparisonMetadata;
- (void)setLoadUsingRetry:(BOOL)arg1;
- (BOOL)loadUsingRetry;
- (id)fileProtectionOption;
- (id)generatePeerCodeKnowledgeVectorWithManagedObjectContext:(id)arg1;
- (BOOL)rewriteToDiskWithError:(id*)arg1;
- (id)initWithTransactionLogURL:(id)arg1 ubiquityRootLocation:(id)arg2 andLocalPeerID:(id)arg3;
- (BOOL)deleteLogFileWithError:(id*)arg1;
- (void)cleanupExternalDataReferences;
- (void)populateContents;
- (BOOL)useTemporaryLogLocation;
- (BOOL)writeContentsOfZipArchive:(id)arg1 intoExtendedAttributesForFile:(id)arg2 error:(id*)arg3;
- (BOOL)loadContents:(id*)arg1;
- (id)loadPlistAtLocation:(id)arg1 withError:(id*)arg2;
- (void)releaseDeletedObjects;
- (void)releaseUpdatedObjects;
- (void)releaseInsertedObjects;
- (BOOL)inStagingLocation;
- (BOOL)inTemporaryLocation;
- (BOOL)inPermanentLocation;
- (id)stagingTransactionLogLocation;
- (id)temporaryTransactionLogLocation;
- (id)currentLocation;
- (int)transactionLogType;
- (id)initWithStoreName:(id)arg1 andSaveSnapshot:(id)arg2 andRootLocation:(id)arg3;
- (id)transactionLogFilename;
- (id)modelVersionHash;
- (id)knowledgeVector;
- (id)exportingPeerID;
- (BOOL)loadComparisonMetadataWithError:(id*)arg1;
- (BOOL)releaseContents:(id*)arg1;
- (id)transactionLogLocation;
- (id)localPeerID;
- (BOOL)writeToDiskWithError:(id*)arg1 andUpdateFilenameInTransactionEntries:(id)arg2;
- (void)setUseTemporaryLogLocation:(BOOL)arg1;
- (id)transactionNumber;
- (id)storeName;
- (id)saveSnapshot;
- (BOOL)loadUpdatedObjectsDataWithError:(id*)arg1;
- (BOOL)loadDeletedObjectsDataWithError:(id*)arg1;
- (BOOL)loadInsertedObjectsDataWithError:(id*)arg1;
- (BOOL)loadImportMetadataWithError:(id*)arg1;
- (BOOL)moveFileToPermanentLocationWithError:(id*)arg1;
- (id)initWithTransactionLogLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)description;

@end