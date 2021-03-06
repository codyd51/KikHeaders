/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:44 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSURLConnectionDelegate.h>
#import <NSURLConnectionDataDelegate.h>

@interface KikPlugin : CardsPlugin <NSURLConnectionDelegate, NSURLConnectionDataDelegate> {
	KikAPIMessage* _lastMessage; 
	NSString* _cardUrl; 
	NSString* _lastMessageSender; 
	id<KikImplementation> _kik; 
	id<CardDescriptionProvider> _provider; 
	id<BrowserImplementation> _browser; 
	NSData* _pendingData; 
	PickerPlugin* _picker; 
	KikSendMessageTask* _pendingMessage; 
	HttpRequestTask* _imageRequest; 
	HttpRequestTask* _pngImageRequest; 
}
@property (nonatomic,copy) NSString* cardUrl; 				//@synthesize cardUrl=_cardUrl - In the implementation block
+(id)kikMessageForObject:(id)arg1 cardUrl:(id)arg2 name:(id)arg3 iconUrl:(id)arg4 iconImage:(id)arg5;
+(void)kikMessageForObject:(id)arg1 cardUrl:(id)arg2 name:(id)arg3 iconUrl:(id)arg4 iconImage:(id)arg5 callback:(id)arg6;
-(id)initWithKikImplementation:(id)arg1 cardUrl:(id)arg2 cardProvider:(id)arg3 browser:(id)arg4 pickerPlugin:(id)arg5;
-(void)messageReceived:(id)arg1 fromConvo:(id)arg2;
-(void)setCardUrl:(id)arg1;
-(void)finishSendMessage;
-(id)sendKik:(id)arg1;
-(id)sendKikToUser:(id)arg1;
-(id)openConversation:(id)arg1;
-(id)openConversationWithUser:(id)arg1 callback:(id)arg2;
-(id)getLastMessage:(id)arg1;
-(id)objectForKikMessage:(id)arg1;
-(void)dealloc;
-(void).cxx_destruct;
@end