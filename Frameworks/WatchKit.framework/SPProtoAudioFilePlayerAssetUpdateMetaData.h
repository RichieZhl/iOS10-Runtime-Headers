/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPProtoAudioFilePlayerAssetUpdateMetaData : PBCodable <NSCopying> {
    NSString * _albumTitle;
    NSString * _artist;
    double  _duration;
    struct { 
        unsigned int duration : 1; 
    }  _has;
    NSString * _identifier;
    NSString * _title;
    NSString * _uRL;
}

@property (nonatomic, retain) NSString *albumTitle;
@property (nonatomic, retain) NSString *artist;
@property (nonatomic) double duration;
@property (nonatomic, readonly) BOOL hasAlbumTitle;
@property (nonatomic, readonly) BOOL hasArtist;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic, readonly) BOOL hasTitle;
@property (nonatomic, readonly) BOOL hasURL;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *uRL;

- (void).cxx_destruct;
- (id)albumTitle;
- (id)artist;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (BOOL)hasAlbumTitle;
- (BOOL)hasArtist;
- (BOOL)hasDuration;
- (BOOL)hasTitle;
- (BOOL)hasURL;
- (unsigned int)hash;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAlbumTitle:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (id)sockPuppetMessage;
- (id)title;
- (id)uRL;
- (void)writeTo:(id)arg1;

@end