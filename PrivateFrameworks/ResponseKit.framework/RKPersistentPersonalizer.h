/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKPersistentPersonalizer : NSObject {
    NSURL * _dynamicDataURL;
    int  _initialResponseCount;
    NSString * _languageID;
    NSDate * _lastDynamicDataCreationCheckDate;
    NSDate * _lastObservedDynamicDataCreationDate;
    void * _model;
    NSPredicate * _nonEmptyStringsPredicate;
    NSMutableDictionary * _synonyms;
}

@property (retain) NSURL *dynamicDataURL;
@property int initialResponseCount;
@property (retain) NSString *languageID;
@property (retain) NSDate *lastDynamicDataCreationCheckDate;
@property (retain) NSDate *lastObservedDynamicDataCreationDate;
@property (readonly) void*model;
@property (retain) NSPredicate *nonEmptyStringsPredicate;
@property (retain) NSMutableDictionary *synonyms;

+ (void)removeAllDynamicModelsInDirectory:(id)arg1;

- (void).cxx_destruct;
- (void)addUserResponse:(id)arg1 category:(unsigned int)arg2 context:(id)arg3 effectiveDate:(id)arg4;
- (void)addUserResponseIfPresentInSynonyms:(id)arg1 category:(unsigned int)arg2 context:(id)arg3 effectiveDate:(id)arg4;
- (void*)createLanguageModel;
- (void)dealloc;
- (id)dynamicDataCreationDate;
- (id)dynamicDataURL;
- (void)flushDynamicData;
- (id)getTopKResponsesWithSynonyms:(unsigned int)arg1 rootResponse:(id)arg2 context:(id)arg3 numberOfResponses:(int)arg4;
- (id)getTopKUserResponses:(unsigned int)arg1 context:(id)arg2 numberOfResponses:(int)arg3;
- (void)incrementUsageCountForCategory:(id)arg1 withRootResponse:(id)arg2 response:(id)arg3 count:(int)arg4 effectiveDate:(id)arg5;
- (id)initWithLanguageIdentifier:(id)arg1 andDynamicDataURL:(id)arg2;
- (int)initialResponseCount;
- (void)initializeDynamicLanguageModel;
- (id)languageID;
- (id)lastDynamicDataCreationCheckDate;
- (id)lastObservedDynamicDataCreationDate;
- (void)matchResponseGreedilyWithSynonym:(id)arg1 category:(id)arg2;
- (void*)model;
- (id)nonEmptyStringsPredicate;
- (void)setDynamicDataURL:(id)arg1;
- (void)setInitialResponseCount:(int)arg1;
- (void)setLanguageID:(id)arg1;
- (void)setLastDynamicDataCreationCheckDate:(id)arg1;
- (void)setLastObservedDynamicDataCreationDate:(id)arg1;
- (void)setNonEmptyStringsPredicate:(id)arg1;
- (void)setSynonyms:(id)arg1;
- (id)synonyms;

@end