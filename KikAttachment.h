/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:02:03 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface KikAttachment : KikManagedObject {
	int _flags; 
	int _internalId; 
	int _retryCount; 
	int _state; 
	int _type; 
}
@property (nonatomic,@dynamic,retain) NSString* content; 
@property (assign,nonatomic) int flags; 
@property (assign,nonatomic) int internalId; 
@property (nonatomic,@dynamic,retain) NSDate* lastAccessTimestamp; 
@property (assign,nonatomic) int retryCount; 
@property (assign,nonatomic) int state; 
@property (nonatomic,@dynamic,retain) NSDate* timestamp; 
@property (assign,nonatomic) int type; 
@property (nonatomic,@dynamic,retain) KikMessage* message; 
-(void)setRetryCount:(int)arg1;
-(void)setInternalId:(int)arg1;
-(void)setType:(int)arg1;
-(void)setState:(int)arg1;
-(void)setFlags:(int)arg1;
@end