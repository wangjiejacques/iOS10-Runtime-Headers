/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBSearchExecute : PBCodable <NSCopying> {
    NSMutableArray * _channelResultFeedIds;
    struct { 
        unsigned int searchExecutionMethod : 1; 
        unsigned int searchLocation : 1; 
        unsigned int totalResults : 1; 
    }  _has;
    int  _searchExecutionMethod;
    int  _searchLocation;
    NSString * _searchString;
    NSString * _storeFrontId;
    NSString * _topResultFeedId;
    NSMutableArray * _topicResultFeedIds;
    int  _totalResults;
}

@property (nonatomic, retain) NSMutableArray *channelResultFeedIds;
@property (nonatomic) bool hasSearchExecutionMethod;
@property (nonatomic) bool hasSearchLocation;
@property (nonatomic, readonly) bool hasSearchString;
@property (nonatomic, readonly) bool hasStoreFrontId;
@property (nonatomic, readonly) bool hasTopResultFeedId;
@property (nonatomic) bool hasTotalResults;
@property (nonatomic) int searchExecutionMethod;
@property (nonatomic) int searchLocation;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic, retain) NSString *storeFrontId;
@property (nonatomic, retain) NSString *topResultFeedId;
@property (nonatomic, retain) NSMutableArray *topicResultFeedIds;
@property (nonatomic) int totalResults;

+ (Class)channelResultFeedIdsType;
+ (Class)topicResultFeedIdsType;

- (void).cxx_destruct;
- (int)StringAsSearchExecutionMethod:(id)arg1;
- (int)StringAsSearchLocation:(id)arg1;
- (void)addChannelResultFeedIds:(id)arg1;
- (void)addTopicResultFeedIds:(id)arg1;
- (id)channelResultFeedIds;
- (id)channelResultFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)channelResultFeedIdsCount;
- (void)clearChannelResultFeedIds;
- (void)clearTopicResultFeedIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSearchExecutionMethod;
- (bool)hasSearchLocation;
- (bool)hasSearchString;
- (bool)hasStoreFrontId;
- (bool)hasTopResultFeedId;
- (bool)hasTotalResults;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)searchExecutionMethod;
- (id)searchExecutionMethodAsString:(int)arg1;
- (int)searchLocation;
- (id)searchLocationAsString:(int)arg1;
- (id)searchString;
- (void)setChannelResultFeedIds:(id)arg1;
- (void)setHasSearchExecutionMethod:(bool)arg1;
- (void)setHasSearchLocation:(bool)arg1;
- (void)setHasTotalResults:(bool)arg1;
- (void)setSearchExecutionMethod:(int)arg1;
- (void)setSearchLocation:(int)arg1;
- (void)setSearchString:(id)arg1;
- (void)setStoreFrontId:(id)arg1;
- (void)setTopResultFeedId:(id)arg1;
- (void)setTopicResultFeedIds:(id)arg1;
- (void)setTotalResults:(int)arg1;
- (id)storeFrontId;
- (id)topResultFeedId;
- (id)topicResultFeedIds;
- (id)topicResultFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicResultFeedIdsCount;
- (int)totalResults;
- (void)writeTo:(id)arg1;

@end
