/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:15 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol UserFSVolume
@property (nonatomic,copy) NSString* deviceName; 
@property (getter=isLocked,nonatomic,copy) BOOL locked; 
@required
-(id)rootDirectory;
-(BOOL)flush;
-(BOOL)isLocked;
-(BOOL)close;
-(id)itemAtPath(id):arg1 ;
-(BOOL)deleteFiles(id):arg1 ;
-(id)deviceName;
-(id)rootDirectory;
-(BOOL)flush;
-(BOOL)isLocked;
-(BOOL)close;
-(id)itemAtPath(id):arg1 ;
-(BOOL)deleteFiles(id):arg1 ;
-(id)deviceName;
@end