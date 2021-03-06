/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:43 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface WorkItem : NSObject {
	BOOL _succeeded; 
	NSObject* _result; 
	NSObject<KikWorkItemDelegate>* _owner; 
	NSObject* _context; 
	id _callback; 
	SEL _selector; 
	double _nextRetryTime; 
	int _retryCounts; 
}
@property (nonatomic,retain) NSObject* result; 				//@synthesize result=_result - In the implementation block
@property (assign,nonatomic) BOOL succeeded; 				//@synthesize succeeded=_succeeded - In the implementation block
-(void)executeWorkItem;
-(void)notifyCallback;
-(id)initWithContext:(id)arg1 andOwner:(id)arg2 andNotify:(id)arg3 withSelector:(SEL)arg4;
-(double)nextRetryTime;
-(void)completedWorkItem;
-(void)setSucceeded:(BOOL)arg1;
-(void).cxx_destruct;
-(BOOL)shouldRetry;
-(void)setResult:(id)arg1;
@end