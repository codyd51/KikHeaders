/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, July 5, 2014 at 2:40:33 PM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */
#import "DoublyLinkedList.h"

@interface LinkedDictionary : NSObject {
	DoublyLinkedList* _linkedList; 
	NSMutableDictionary* _nodeMap; 
}
@property (copy) NSArray* allKeys; 
@property unsigned count; 
-(BOOL)hasObjectForKey:(id)arg1;
-(void)removeLeastRecentlyUsedObject;
-(void)dealloc;
-(id)init;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1;
-(void)removeObjectForKey:(id)arg1;
-(void)setObject:(id)arg1 forKey:(id)arg2;
@end