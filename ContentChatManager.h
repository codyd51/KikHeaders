/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:03 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface ContentChatManager : NSObject {
}
+(void)chatSelected:(id)arg1 withContent:(id)arg2;
+(void)openChatWithContent:(id)arg1 chatSelected:(id)arg2;
+(void)openKikContent:(id)arg1 fromChat:(id)arg2;
+(id)lastChat;
+(void)clearLastOpenedContent;
+(void)didCancel;
+(id)lastMessage;
@end