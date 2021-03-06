/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, July 5, 2014 at 1:15:32 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import "UserManagerDelegate.h"
 #import "KikStorage.h"
 #import "KikNetwork.h"
 #import "ThresholdTimer.h"

@interface ChatManager : NSObject <UserManagerDelegate> {
	KikStorage* _storage; 
	KikNetwork* _network; 
	NSMutableDictionary* _pruneChatTimers; 
	ThresholdTimer* _chatLeaveThresholdTimer; 
	NSMutableSet* _chatLeaveIDs; 
}
-(void)groupCreated:(id)arg1 withOriginalUser:(id)arg2;
-(void)expiredTimeout:(id)arg1 invitedUser:(id)arg2;
-(void)failedUnackedGroupsOriginalUser:(id)arg1 userInfo:(id)arg2;
-(void)failedUnsupportedClientOriginalUser:(id)arg1 userInfo:(id)arg2;
-(void)failedNoReasonOriginalUser:(id)arg1 userInfo:(id)arg2;
-(void)addUserToGroupResult:(id)arg1;
-(void)leaveChat:(id)arg1 silently:(BOOL)arg2 skipSave:(BOOL)arg3;
-(void)messageReceivedHandler:(id)arg1;
-(void)setAmTyping:(BOOL)arg1 forChat:(id)arg2;
-(void)inviteUser:(id)arg1 toChat:(id)arg2;
-(void)isTypingReceivedHandler:(id)arg1;
-(void)messageSentHandler:(id)arg1;
-(void)setIsTyping:(BOOL)arg1 withUser:(id)arg2 forChat:(id)arg3;
-(void)setIsTyping:(BOOL)arg1 forChat:(id)arg2;
-(void)performDelayedPruneChat:(id)arg1;
-(void)pruneChatTimerFired:(id)arg1;
-(void)timeoutLastIsTyping:(id)arg1;
-(void)leaveChat:(id)arg1 silently:(BOOL)arg2;
-(void)chatLeaveThresholdHit;
-(BOOL)removeFromPendingInvitedMembers:(id)arg1;
-(id)initWithStorage:(id)arg1 andNetwork:(id)arg2;
-(id)getPendingGroupCreationInvitedUser:(id)arg1;
-(void)savePendingGroupStatusMessage:(id)arg1 msg:(id)arg2;
-(void)createChatsForUsersWithMessages;
-(id)getIsTypingStringForChat:(id)arg1;
-(void)dealloc;
-(void)leaveChat:(id)arg1;
-(void)setup;
@end