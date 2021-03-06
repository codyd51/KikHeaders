/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:36 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface KikSmiley : NSObject {
	NSMutableDictionary* _smileyLookup; 
	NSMutableDictionary* _smileyReverseLookup; 
	NSMutableDictionary* _previewImages; 
	NSMutableDictionary* _conversationImages; 
	NSArray* _emoticonList; 
	NSCharacterSet* _emojiCharacterSet; 
	SmileyTranslator* _translator; 
}
+(id)stringReplacingEmojiWithEmoticons:(id)arg1;
+(id)emoticonList;
+(id)previewImageForEmoticon:(id)arg1;
+(unsigned)countEmoticons:(id)arg1;
+(id)emojiCharacterSet;
+(id)stringEmoticonForEmoji:(id)arg1;
+(id)conversationImageForEmoticon:(id)arg1;
+(id)stringReplacingEmoticonsWithEmoji:(id)arg1;
+(id)stringEmojiForEmoticon:(id)arg1;
+(void)initialize;
-(id)init;
-(void).cxx_destruct;
@end