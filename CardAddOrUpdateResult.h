/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:34 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CardAddOrUpdateResult : NSObject {
	BOOL _cardModified; 
	CardDescriptor* _card; 
}
@property (nonatomic,retain) CardDescriptor* card; 				//@synthesize card=_card - In the implementation block
@property (assign,nonatomic) BOOL cardModified; 				//@synthesize cardModified=_cardModified - In the implementation block
-(void)setCard:(id)arg1;
-(void)setCardModified:(BOOL)arg1;
-(void).cxx_destruct;
@end