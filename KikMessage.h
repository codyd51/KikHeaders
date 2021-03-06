/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, July 5, 2014 at 1:03:00 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface KikMessage : KikManagedObject {
	KikMessage* _previousMessage; 
	NSString* _friendlyDate; 
	NSDate* _timestampCached; 
	int _flags; 
	int _internalId; 
	int _state; 
	int _systemState; 
	int _type; 
	BOOL _needsCellHeightRecalc; 
	float _bubbleHeight; 
}
@property (nonatomic,retain) NSString* body; 
@property (assign,nonatomic) int flags; 
@property (assign,nonatomic) int internalId; 
@property (nonatomic,retain) NSString* stanzaId; 
@property (assign,nonatomic) int state; 
@property (assign,nonatomic) int systemState; 
@property (nonatomic,retain) NSDate* timestamp; 
@property (nonatomic,retain) NSDate* receivedTimestamp; 
@property (assign,nonatomic) int type; 
@property (nonatomic,retain) KikUser* user; 
@property (nonatomic,retain) NSSet* attachments; 
@property (nonatomic,retain) NSSet* chat; 
@property (nonatomic,retain) KikMessage* previousMessage; 				//@synthesize previousMessage=_previousMessage - In the implementation block
@property (nonatomic,copy) NSString* friendlyDate; 
@property (assign,nonatomic) BOOL isSending; 
@property (assign,nonatomic) BOOL isSent; 
@property (assign,nonatomic) BOOL isPushed; 
@property (assign,nonatomic) BOOL isDelivered; 
@property (assign,nonatomic) BOOL isRead; 
@property (assign,nonatomic) BOOL isError; 
@property (assign,nonatomic) BOOL isMarkedDeleted; 
@property (assign,nonatomic) BOOL requestedDR; 
@property (assign,nonatomic) BOOL requestedRR; 
@property (assign,nonatomic) BOOL pictureLoaded; 
@property (nonatomic) BOOL isIncoming; 
@property (nonatomic) BOOL isOutgoing; 
@property (assign,nonatomic) BOOL hasPicture; 
@property (assign,nonatomic) BOOL hasContent; 
@property (assign,nonatomic) BOOL needsCellHeightRecalc; 				//@synthesize needsCellHeightRecalc=_needsCellHeightRecalc - In the implementation block
@property (assign,nonatomic) float bubbleHeight; 				//@synthesize bubbleHeight=_bubbleHeight - In the implementation block
-(void)setInternalId:(int)arg1;
-(void)setSystemState:(int)arg1;
-(void)setMessageFlag:(int)arg1 toValue:(BOOL)arg2;
-(void)setStateFlag:(int)arg1 toValue:(BOOL)arg2;
-(void)setSystemStateFlag:(int)arg1 toValue:(BOOL)arg2;
-(void)setFriendlyDate:(id)arg1;
-(void)setHasPicture:(BOOL)arg1;
-(void)setHasContent:(BOOL)arg1;
-(void)setIsSending:(BOOL)arg1;
-(void)setIsSent:(BOOL)arg1;
-(void)setIsDelivered:(BOOL)arg1;
-(void)setIsPushed:(BOOL)arg1;
-(void)setIsError:(BOOL)arg1;
-(BOOL)systemStateFlagIsSet:(int)arg1;
-(void)setIsMarkedDeleted:(BOOL)arg1;
-(void)setRequestedDR:(BOOL)arg1;
-(void)setRequestedRR:(BOOL)arg1;
-(void)setPictureLoaded:(BOOL)arg1;
-(void)setPreviousMessage:(id)arg1;
-(void)setNeedsCellHeightRecalc:(BOOL)arg1;
-(void)setBubbleHeight:(float)arg1;
-(void)setType:(int)arg1;
-(void)setState:(int)arg1;
-(void)setIsRead:(BOOL)arg1;
-(void)setFlags:(int)arg1;
@end