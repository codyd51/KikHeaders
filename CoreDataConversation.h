/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:43 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import "ConversationProvider.h"
#import "DialogProvider.h"
 #import "KikChat.h"

@interface CoreDataConversation : NSObject <ConversationProvider, DialogProvider> {
	KikChat* _chat; 
}
@property (nonatomic,retain) KikChat* chat; 				//@synthesize chat=_chat - In the implementation block
@property (copy) NSString* jid; 
@property (copy) NSString* title; 
@property (copy) KikMessage* lastMessage; 
@property (copy) NSDate* timestamp; 
@property (copy) NSArray* participants; 
@property (copy) NSArray* participantsByUsername; 
@property BOOL isTyping; 
@property BOOL isGroup; 
@property BOOL isBlocked; 
//@property (copy) id<DialogProvider> dialog; 
@property (copy) NSSet* messages; 
@property (copy) NSArray* sortedMessages; 
-(void)addMessages:(id)arg1;
-(id)initWithKikChat:(id)arg1;
-(void)addMessage:(id)arg1;
-(void)setChat:(id)arg1;
-(void)addParticipant:(id)arg1;
-(void)removeParticipant:(id)arg1;
@end