/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 120145 AM Mountain Daylight Time
 * Operating System Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol MessageManagerProvider
@required
-(void)flushQoS;
-(void)sendContentMessage:(id)arg1 withUserInfo:(id)arg2 andCallback:(id)arg3 ;
-(void)sendTextMessage:(id)arg1 withCallback:(id)arg2 ;
-(void)sendReadReceiptsForConversation:(id)arg1 ;
-(void)flushQoS;
-(void)sendContentMessage:(id)arg1 withUserInfo:(id)arg2 andCallback:(id)arg3 ;
-(void)sendTextMessage:(id)arg1 withCallback:(id)arg2 ;
-(void)sendReadReceiptsForConversation:(id)arg1 ;
@end