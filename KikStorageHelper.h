/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, July 5, 2014 at 1:08:26 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface KikStorageHelper : NSObject {
	NSManagedObjectContext* _context; 
}
@property (nonatomic,copy) NSManagedObjectContext* context; 				//@synthesize context=_context - In the implementation block
-(id)initWithManagedObjectContext:(id)arg1;
-(id)findWithPredicate:(id)arg1 sort:(id)arg2 forEntity:(id)arg3;
-(id)findWithPredicate:(id)arg1 sort:(id)arg2 fetchLimit:(unsigned)arg3 forEntity:(id)arg4;
-(id)findWithPredicate:(id)arg1 forProperties:(id)arg2 sort:(id)arg3 fetchLimit:(unsigned)arg4 forEntity:(id)arg5;
-(int)countWithPredicate:(id)arg1 forEntity:(id)arg2;
@end