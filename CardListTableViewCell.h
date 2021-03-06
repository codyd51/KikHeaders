/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:32 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CardListTableViewCell : UITableViewCell {
	unsigned _mask; 
	UIImage* _bgNormal; 
	UIImage* _bgSelected; 
	UIImage* _maskNormal; 
	UIImage* _maskSelected; 
	BOOL _isSecure; 
	NSString* _fullCardURL; 
	BOOL _isSponsored; 
	BOOL _shiftCardName; 
	UILabel* _lblCardName; 
	URLUILabel* _lblCardURL; 
	UIImageView* _imgCardIconMask; 
	UIImageView* _imgCardUpdateNotifier; 
	UIImageView* _imgSecure; 
	UIImageView* _imgDragHandle; 
	UILabel* _lblTapToPin; 
	UIButton* _deleteButton; 
	CardURLDataImageView* _cardImageView; 
	UIImageView* _imgBackground; 
	UIView* _cellSeparator; 
	UIActivityIndicatorView* _loadingSpinner; 
	UIView* _sponsoredView; 
	int _cardContentWidth; 
	int _cardContentLandscapeWidth; 
}
@property (assign,nonatomic,__weak) UIImageView* cardIconMask; 				//@synthesize imgCardIconMask=_imgCardIconMask - In the implementation block
@property (assign,nonatomic,__weak) UIImageView* imgBackground; 				//@synthesize imgBackground=_imgBackground - In the implementation block
@property (assign,nonatomic,__weak) UIImageView* cardIsSecure; 				//@synthesize imgSecure=_imgSecure - In the implementation block
@property (assign,nonatomic,__weak) UIImageView* dragHandle; 				//@synthesize imgDragHandle=_imgDragHandle - In the implementation block
@property (assign,nonatomic,__weak) UIImageView* cardUpdateNotifier; 				//@synthesize imgCardUpdateNotifier=_imgCardUpdateNotifier - In the implementation block
@property (assign,nonatomic,__weak) UIButton* deleteButton; 				//@synthesize deleteButton=_deleteButton - In the implementation block
@property (assign,nonatomic,__weak) UILabel* cardName; 				//@synthesize lblCardName=_lblCardName - In the implementation block
@property (assign,nonatomic,__weak) URLUILabel* cardURL; 				//@synthesize lblCardURL=_lblCardURL - In the implementation block
@property (assign,nonatomic,__weak) UILabel* tapToPin; 				//@synthesize lblTapToPin=_lblTapToPin - In the implementation block
@property (assign,nonatomic,__weak) CardURLDataImageView* cardImageView; 				//@synthesize cardImageView=_cardImageView - In the implementation block
@property (assign,nonatomic,__weak) UIView* cellSeparator; 				//@synthesize cellSeparator=_cellSeparator - In the implementation block
@property (assign,nonatomic,__weak) UIActivityIndicatorView* loadingSpinner; 				//@synthesize loadingSpinner=_loadingSpinner - In the implementation block
@property (assign,nonatomic,__weak) UIView* sponsoredView; 				//@synthesize sponsoredView=_sponsoredView - In the implementation block
@property (assign,nonatomic) BOOL isSecure; 				//@synthesize isSecure=_isSecure - In the implementation block
@property (assign,nonatomic) BOOL isSponsored; 				//@synthesize isSponsored=_isSponsored - In the implementation block
@property (nonatomic,retain) NSString* fullCardURL; 				//@synthesize fullCardURL=_fullCardURL - In the implementation block
@property (assign,nonatomic) int cardContentWidth; 				//@synthesize cardContentWidth=_cardContentWidth - In the implementation block
@property (assign,nonatomic) int cardContentLandscapeWidth; 				//@synthesize cardContentLandscapeWidth=_cardContentLandscapeWidth - In the implementation block
@property (assign,nonatomic) BOOL shiftCardName; 				//@synthesize shiftCardName=_shiftCardName - In the implementation block
-(void)setIsSecure:(BOOL)arg1;
-(void)setIsCurrentCard:(BOOL)arg1;
-(void)setFullCardURL:(id)arg1;
-(id)bgSelected;
-(id)maskSelected;
-(id)bgNormal;
-(id)maskNormal;
-(void)modifyDeleteConfirmationClassForView:(id)arg1;
-(void)modifyReorderClassForView:(id)arg1;
-(void)modifyContentClassForView:(id)arg1;
-(void)resizeCellForEditMode;
-(void)setCardContentWidth:(int)arg1;
-(void)reconfigureSponsorFrames;
-(void)deleteTapped:(id)arg1;
-(void)setCardURL:(id)arg1;
-(void)setCardIconMask:(id)arg1;
-(void)setCardUpdateNotifier:(id)arg1;
-(void)setCardIsSecure:(id)arg1;
-(void)setDragHandle:(id)arg1;
-(void)setTapToPin:(id)arg1;
-(void)setDeleteButton:(id)arg1;
-(void)setCardImageView:(id)arg1;
-(void)setImgBackground:(id)arg1;
-(void)setCellSeparator:(id)arg1;
-(void)setLoadingSpinner:(id)arg1;
-(void)setSponsoredView:(id)arg1;
-(void)setIsSponsored:(BOOL)arg1;
-(void)setCardContentLandscapeWidth:(int)arg1;
-(void)setShiftCardName:(BOOL)arg1;
-(void)setAlpha:(float)arg1;
-(void)layoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
-(void)willTransitionToState:(unsigned)arg1;
-(void).cxx_destruct;
-(void)setCardName:(id)arg1;
@end