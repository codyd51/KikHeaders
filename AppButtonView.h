/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:00:58 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface AppButtonView : UIView {
	id _target; 
	SEL _action; 
	BOOL _showMask; 
	NSString* _appId; 
	UIImageView* _placeholderImageView; 
	CardURLDataImageView* _iconImage; 
	DelayedUnhighlightButton* _actionButton; 
	UIImageView* _maskImage; 
	UILabel* _titleLabel; 
}
@property (nonatomic,retain) UIImageView* placeholderImageView; 				//@synthesize placeholderImageView=_placeholderImageView - In the implementation block
@property (nonatomic,retain) CardURLDataImageView* iconImage; 				//@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) DelayedUnhighlightButton* actionButton; 				//@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) UIImageView* maskImage; 				//@synthesize maskImage=_maskImage - In the implementation block
@property (nonatomic,retain) UILabel* titleLabel; 				//@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,copy) NSString* appId; 				//@synthesize appId=_appId - In the implementation block
@property (assign,nonatomic) BOOL showMask; 				//@synthesize showMask=_showMask - In the implementation block
-(void)setTouchAction:(SEL)arg1 forTarget:(id)arg2;
-(void)setActionButton:(id)arg1;
-(void)delayedAction;
-(void)buttonTouchUpInside;
-(void)setPlaceholderImageView:(id)arg1;
-(void)setShowMask:(BOOL)arg1;
-(void).cxx_destruct;
-(void)setMaskImage:(id)arg1;
-(void)setTitleLabel:(id)arg1;
-(void)setIconImage:(id)arg1;
-(void)setAppId:(id)arg1;
@end