/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:26 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CardHelper : NSObject {
}
+(id)conversationsCard;
+(void)updateConversationsCardNotificationDot;
+(id)cardIconURLForCard:(id)arg1;
+(void)flagCardNotificationsAsSeenAndUpdateSidebarForCard:(id)arg1 inCardManager:(id)arg2;
+(void)updateConversationsCardNotificationDotForNewMessage:(BOOL)arg1;
+(BOOL)conversationsCardIsVisible;
+(BOOL)allCardNotificationsSeenInCardManager:(id)arg1;
+(BOOL)conversationsCardIsInPopup;
+(id)cardIsInPopup:(id)arg1;
@end