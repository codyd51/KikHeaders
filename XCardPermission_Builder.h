/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:17 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface XCardPermission_Builder : PBGeneratedMessage_Builder {
	XCardPermission* result; 
}
@property (retain) XCardPermission* result; 
-(id)mergeFromCodedInputStream:(id)arg1;
-(id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
-(id)mergeFrom:(id)arg1;
-(id)buildPartial;
-(id)internalGetResult;
-(id)clone;
-(id)clearName;
-(id)clearValue;
-(id)defaultInstance;
-(void)dealloc;
-(id)init;
-(id)setValue:(int)arg1;
-(id)setName:(int)arg1;
-(int)value;
-(int)name;
-(id)clear;
-(void)setResult:(id)arg1;
-(id)build;
-(BOOL)hasValue;
-(BOOL)hasName;
@end