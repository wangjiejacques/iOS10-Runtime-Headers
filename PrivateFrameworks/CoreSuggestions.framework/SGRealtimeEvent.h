/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGRealtimeEvent : NSObject <NSCopying, NSSecureCoding> {
    SGEvent * _event;
    NSString * _eventIdentifier;
    bool  _isHarvested;
    int  _state;
}

@property (nonatomic, readonly) SGEvent *event;
@property (nonatomic, readonly) NSString *eventIdentifier;
@property (nonatomic, readonly) bool isHarvested;
@property (nonatomic, readonly) int state;

+ (id)realtimeEventForCanceledEvent:(id)arg1 eventIdentifier:(id)arg2;
+ (id)realtimeEventForCanceledEvent:(id)arg1 eventIdentifier:(id)arg2 harvested:(bool)arg3;
+ (id)realtimeEventForDuplicateEvent:(id)arg1 eventIdentifier:(id)arg2;
+ (id)realtimeEventForDuplicateEvent:(id)arg1 eventIdentifier:(id)arg2 harvested:(bool)arg3;
+ (id)realtimeEventForNearDuplicateEvent:(id)arg1;
+ (id)realtimeEventForNearDuplicateEvent:(id)arg1 harvested:(bool)arg2;
+ (id)realtimeEventForNewEvent:(id)arg1;
+ (id)realtimeEventForNewEvent:(id)arg1 harvested:(bool)arg2;
+ (id)realtimeEventUpdateToEvent:(id)arg1 withNewValues:(id)arg2;
+ (id)realtimeEventUpdateToEvent:(id)arg1 withNewValues:(id)arg2 harvested:(bool)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)event;
- (id)eventIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(int)arg1 event:(id)arg2 eventIdentifier:(id)arg3 harvested:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRealtimeEvent:(id)arg1;
- (bool)isHarvested;
- (int)state;

@end
