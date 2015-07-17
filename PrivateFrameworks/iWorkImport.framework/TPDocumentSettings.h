/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPDocumentSettings : TSPObject {
    BOOL  _annotationsVisible;
    NSString * _bibliographyFormat;
    BOOL  _changeBarsVisible;
    BOOL  _copyAssets;
    BOOL  _copyMovies;
    NSString * _creationDate;
    NSString * _creationLocale;
    long  _ctBubblesVisibility;
    NSString * _decimalTab;
    BOOL  _documentIsRTL;
    int  _footnoteFormat;
    int  _footnoteGap;
    int  _footnoteKind;
    int  _footnoteNumbering;
    BOOL  _formatChangesVisible;
    BOOL  _hasBody;
    BOOL  _hasFooters;
    BOOL  _hasHeaders;
    BOOL  _hyphenation;
    NSString * _hyphenationLanguage;
    NSString * _language;
    BOOL  _ligatures;
    BOOL  _linksEnabled;
    NSString * _originalTemplate;
    BOOL  _placeholderAuthoring;
    BOOL  _qlPreview;
    BOOL  _sectionAuthoring;
    BOOL  _showCTDeletions;
    BOOL  _showCTMarkup;
    BOOL  _tocLinksEnabled;
}

@property (nonatomic) BOOL annotationsVisible;
@property (nonatomic) BOOL autoHyphenation;
@property (nonatomic, readonly) int basicFootnoteFormat;
@property (nonatomic, copy) NSString *bibliographyFormat;
@property (nonatomic) BOOL changeBarsVisible;
@property (nonatomic) BOOL copyMovies;
@property (nonatomic) BOOL copyTemplateAssets;
@property (nonatomic, copy) NSString *creationDate;
@property (nonatomic, copy) NSString *creationLocale;
@property (nonatomic) long ctBubblesVisibility;
@property (nonatomic, copy) NSString *decimalTab;
@property (nonatomic) BOOL documentIsRTL;
@property (nonatomic) int footnoteFormat;
@property (nonatomic) int footnoteGap;
@property (nonatomic) int footnoteKind;
@property (nonatomic) int footnoteNumbering;
@property (nonatomic) BOOL formatChangesVisible;
@property (nonatomic) BOOL hasBody;
@property (nonatomic) BOOL hasFooters;
@property (nonatomic) BOOL hasHeaders;
@property (nonatomic) BOOL hyperlinksEnabled;
@property (nonatomic, copy) NSString *hyphenationLanguage;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *originalTemplate;
@property (nonatomic) BOOL placeholderAuthoring;
@property (nonatomic) BOOL quickLookPreview;
@property (nonatomic) BOOL sectionAuthoring;
@property (nonatomic) BOOL showCTDeletions;
@property (nonatomic) BOOL showCTMarkup;
@property (nonatomic) BOOL tocLinksEnabled;
@property (nonatomic) BOOL useLigatures;

- (BOOL)annotationsVisible;
- (BOOL)autoHyphenation;
- (int)basicFootnoteFormat;
- (id)bibliographyFormat;
- (BOOL)changeBarsVisible;
- (BOOL)copyMovies;
- (BOOL)copyTemplateAssets;
- (id)creationDate;
- (id)creationLocale;
- (long)ctBubblesVisibility;
- (void)dealloc;
- (id)decimalTab;
- (BOOL)documentIsRTL;
- (int)footnoteFormat;
- (int)footnoteGap;
- (int)footnoteKind;
- (int)footnoteNumbering;
- (BOOL)formatChangesVisible;
- (BOOL)hasBody;
- (BOOL)hasFooters;
- (BOOL)hasHeaders;
- (BOOL)hyperlinksEnabled;
- (id)hyphenationLanguage;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)language;
- (id)originalTemplate;
- (BOOL)placeholderAuthoring;
- (BOOL)quickLookPreview;
- (void)resetForNewDocumentFromTemplate:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (BOOL)sectionAuthoring;
- (void)setAnnotationsVisible:(BOOL)arg1;
- (void)setAutoHyphenation:(BOOL)arg1;
- (void)setBibliographyFormat:(id)arg1;
- (void)setCTBubblesVisibility:(long)arg1;
- (void)setChangeBarsVisible:(BOOL)arg1;
- (void)setCopyMovies:(BOOL)arg1;
- (void)setCopyTemplateAssets:(BOOL)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setCreationLocale:(id)arg1;
- (void)setCtBubblesVisibility:(long)arg1;
- (void)setDecimalTab:(id)arg1;
- (void)setDocumentIsRTL:(BOOL)arg1;
- (void)setFootnoteFormat:(int)arg1;
- (void)setFootnoteGap:(int)arg1;
- (void)setFootnoteKind:(int)arg1;
- (void)setFootnoteNumbering:(int)arg1;
- (void)setFormatChangesVisible:(BOOL)arg1;
- (void)setHasBody:(BOOL)arg1;
- (void)setHasFooters:(BOOL)arg1;
- (void)setHasHeaders:(BOOL)arg1;
- (void)setHyperlinksEnabled:(BOOL)arg1;
- (void)setHyphenationLanguage:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setOriginalTemplate:(id)arg1;
- (void)setPlaceholderAuthoring:(BOOL)arg1;
- (void)setQuickLookPreview:(BOOL)arg1;
- (void)setSectionAuthoring:(BOOL)arg1;
- (void)setShowCTDeletions:(BOOL)arg1;
- (void)setShowCTMarkup:(BOOL)arg1;
- (void)setTocLinksEnabled:(BOOL)arg1;
- (void)setUseLigatures:(BOOL)arg1;
- (BOOL)showCTDeletions;
- (BOOL)showCTMarkup;
- (id)stringWithCurrentDate;
- (BOOL)tocLinksEnabled;
- (BOOL)useLigatures;

@end