/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:35 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface MessageCellRenderer : NSObject {
	MessageCell* _cell; 
	float _bubbleContentOffsetX; 
	float _contentOffsetY; 
	int _messageType; 
	CGSize _contentSize; 
}
@property (nonatomic,retain) MessageCell* cell; 				//@synthesize cell=_cell - In the implementation block
-(void)layoutCellSubviews;
-(void)renderCell;
-(void)showDateMaybe;
-(void)configureContent;
-(void)sizeSubviews;
-(CGSize)textSizeConstrainedToWidth:(float)arg1;
-(void).cxx_destruct;
-(BOOL)isLandscape;
-(void)setCell:(id)arg1;
@end