/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:18 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface XCardAnonymousKey_Builder : PBGeneratedMessage_Builder {
	XCardAnonymousKey* result; 
}
@property (retain) XCardAnonymousKey* result; 
-(id)mergeFromCodedInputStream:(id)arg1;
-(id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
-(id)mergeFrom:(id)arg1;
-(id)buildPartial;
-(id)internalGetResult;
-(id)clone;
-(id)privateKey;
-(id)setPrivateKey:(id)arg1;
-(BOOL)hasPublicKey;
-(BOOL)hasPrivateKey;
-(id)clearPublicKey;
-(id)clearPrivateKey;
-(id)defaultInstance;
-(void)dealloc;
-(id)init;
-(id)clear;
-(void)setResult:(id)arg1;
-(id)build;
-(id)setPublicKey:(id)arg1;
-(id)publicKey;
@end