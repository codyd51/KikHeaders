/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:26 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface XPrivateEnvelope_Builder : PBGeneratedMessage_Builder {
	XPrivateEnvelope* result; 
}
@property (retain) XPrivateEnvelope* result; 
-(BOOL)hasKeyId;
-(id)mergeFromCodedInputStream:(id)arg1;
-(id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
-(id)mergeFrom:(id)arg1;
-(id)buildPartial;
-(id)internalGetResult;
-(id)clone;
-(id)setKeyId:(id)arg1;
-(id)setInitializationVector:(id)arg1;
-(id)keyId;
-(BOOL)hasInitializationVector;
-(id)initializationVector;
-(BOOL)hasPayload;
-(id)clearKeyId;
-(id)clearInitializationVector;
-(id)clearPayload;
-(id)defaultInstance;
-(void)dealloc;
-(id)init;
-(id)clear;
-(void)setResult:(id)arg1;
-(id)payload;
-(id)setPayload:(id)arg1;
-(id)build;
@end