/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:28 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface XPrivateEnvelope : PBGeneratedMessage {
	unsigned int hasKeyId_:1; 
	unsigned int hasInitializationVector_:1; 
	unsigned int hasPayload_:1; 
	NSData* keyId; 
	NSData* initializationVector; 
	NSData* payload; 
}
@property (retain) NSData* keyId; 
@property (retain) NSData* initializationVector; 
@property (retain) NSData* payload; 
+(id)builder;
+(id)parseFromData:(id)arg1;
+(id)parseFromData:(id)arg1 extensionRegistry:(id)arg2;
+(id)parseFromInputStream:(id)arg1;
+(id)parseFromInputStream:(id)arg1 extensionRegistry:(id)arg2;
+(id)parseFromCodedInputStream:(id)arg1;
+(id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
+(id)builderWithPrototype:(id)arg1;
+(id)defaultInstance;
+(void)initialize;
-(id)builder;
-(BOOL)hasKeyId;
-(void)writeToCodedOutputStream:(id)arg1;
-(int)serializedSize;
-(BOOL)isInitialized;
-(void)setKeyId:(id)arg1;
-(void)setInitializationVector:(id)arg1;
-(BOOL)hasInitializationVector;
-(BOOL)hasPayload;
-(void)setHasKeyId:(BOOL)arg1;
-(void)setHasInitializationVector:(BOOL)arg1;
-(void)setHasPayload:(BOOL)arg1;
-(id)defaultInstance;
-(void)dealloc;
-(void)setPayload:(id)arg1;
@end