/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:03 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PickedImagePlaceholder : NSObject {
	UIButton* _toolbarImageView; 
	ALAsset* _asset; 
	AGIPCAssetsController* _controller; 
}
@property (nonatomic,retain) UIButton* toolbarImageView; 				//@synthesize toolbarImageView=_toolbarImageView - In the implementation block
@property (nonatomic,retain) ALAsset* asset; 				//@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) AGIPCAssetsController* controller; 				//@synthesize controller=_controller - In the implementation block
-(void)removeItem;
-(void)setToolbarImageView:(id)arg1;
-(void)dealloc;
-(void)setController:(id)arg1;
-(void)setAsset:(id)arg1;
@end