/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, July 5, 2014 at 11532 AM Mountain Daylight Time
 * Operating System Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol UserManagerDelegate
@optional
-(void)groupCreated:(id)arg1 withOriginalUser:(id)arg2 ;
-(void)expiredTimeout:(id)arg1 invitedUser:(id)arg2 ;
-(void)failedUnackedGroupsOriginalUser:(id)arg1 userInfo:(id)arg2 ;
-(void)failedUnsupportedClientOriginalUser:(id)arg1 userInfo:(id)arg2 ;
-(void)failedNoReasonOriginalUser:(id)arg1 userInfo:(id)arg2 ;
-(void)addUserToGroupResult:(id)arg1 ;
@end
