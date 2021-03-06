/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, July 5, 2014 at 1:41:15 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NSUserDefaultsHelperBackend : NSObject {
	NSMutableDictionary* _propertyNotifications; 
}
@property (nonatomic,copy) NSMutableDictionary* propertyNotifications; 				//@synthesize propertyNotifications=_propertyNotifications - In the implementation block
-(id)watchProperty:(id)arg1 withCallback:(id)arg2;
-(void)stopWatchingPropertyWithNotificationIdentifer:(id)arg1;
-(id)typeForProperty:(id)arg1;
-(id)dictionaryRepresentationForProperties:(id)arg1;
-(void)setInt:(int)arg1 forKey:(id)arg2;
-(int)intForKey:(id)arg1;
-(void)setNumber:(id)arg1 forKey:(id)arg2;
-(id)numberForKey:(id)arg1;
-(void)setDate:(id)arg1 forKey:(id)arg2;
-(id)dateForKey:(id)arg1;
-(id)dictionaryForKey:(id)arg1;
-(double)doubleForKey:(id)arg1;
-(void)setFloat:(float)arg1 forKey:(id)arg2;
-(void)setDouble:(double)arg1 forKey:(id)arg2;
-(void)setArray:(id)arg1 forKey:(id)arg2;
-(void)setDictionary:(id)arg1 forKey:(id)arg2;
-(void)dealloc;
-(id)init;
-(BOOL)boolForKey:(id)arg1;
-(float)floatForKey:(id)arg1;
-(id)stringForKey:(id)arg1;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2;
-(void)removeObjectsForKeys:(id)arg1;
-(void)setString:(id)arg1 forKey:(id)arg2;
-(id)urlForKey:(id)arg1;
-(void)setURL:(id)arg1 forKey:(id)arg2;
-(id)arrayForKey:(id)arg1;
@end