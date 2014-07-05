/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:00:59 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface UploadView : UIView {
	UIProgressView* _progressView; 
	UILabel* _label; 
	int state; 
	float _progress; 
	BOOL retry; 
	NSString* _contentID; 
	UIImageView* _retryImage; 
	UILabel* _retryLabel; 
	UIButton* _retryButton; 
	UIButton* _retryPaused; 
	ContentItem* _contentItem; 
}
@property (assign,nonatomic) float progress; 				//@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) int state; 
@property (nonatomic,copy) NSString* contentID; 				//@synthesize contentID=_contentID - In the implementation block
-(void)onRetry:(id)arg1;
-(void)dealloc;
-(void)setState:(int)arg1;
-(void)awakeFromNib;
-(void)setProgress:(float)arg1;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
-(void)setContentID:(id)arg1;
@end