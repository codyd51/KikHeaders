/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:14 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface XCardBackstackEntry_Builder : PBGeneratedMessage_Builder {
	XCardBackstackEntry* result; 
}
@property (retain) XCardBackstackEntry* result; 
-(id)mergeFromCodedInputStream:(id)arg1;
-(id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
-(id)mergeFrom:(id)arg1;
-(id)buildPartial;
-(id)internalGetResult;
-(id)clone;
-(id)clearUrl;
-(id)defaultInstance;
-(void)dealloc;
-(id)init;
-(id)url;
-(id)setUrl:(id)arg1;
-(id)clear;
-(void)setResult:(id)arg1;
-(BOOL)hasUrl;
-(id)build;
@end