/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, July 5, 2014 at 1:28:08 PM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */
#import "OS_dispatch_queue.h"

@interface XMPPParser : NSObject {
	id delegate; 
	//NSObject<OS_dispatch_queue>* delegateQueue; 
	//NSObject<OS_dispatch_queue>* parserQueue; 
	BOOL hasReportedRoot; 
	unsigned depth; 
	struct _xmlParserCtxt* parserCtxt; 
}
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 parserQueue:(id)arg3;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
-(void)parseData:(id)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1 delegateQueue:(id)arg2;
@end