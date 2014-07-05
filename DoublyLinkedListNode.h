/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:44 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */
#import "DoublyLinkedList.h"

 @class DoublyLinkedList;

@interface DoublyLinkedListNode : NSObject {
	DoublyLinkedList* _list; 
	DoublyLinkedListNode* _next; 
	DoublyLinkedListNode* _prev; 
	id _data; 
}
@property (copy) DoublyLinkedListNode* next; 				//@synthesize next=_next - In the implementation block
@property (copy) DoublyLinkedListNode* prev; 				//@synthesize prev=_prev - In the implementation block
@property (copy) id data; 				//@synthesize data=_data - In the implementation block
@property (assign,nonatomic) DoublyLinkedList* list; 				//@synthesize list=_list - In the implementation block
+(id)nodeWithData:(id)arg1;
-(id)initWithData:(id)arg1;
-(void)setNext:(id)arg1;
-(void)setList:(id)arg1;
-(void)setPrev:(id)arg1;
@end