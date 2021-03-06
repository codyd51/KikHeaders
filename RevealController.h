/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:42 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <ZUUIRevealControllerDelegate.h>

@interface RevealController : ZUUIRevealController <ZUUIRevealControllerDelegate> {
	BOOL _forceHideStatusBar; 
}
@property (assign,nonatomic) BOOL forceHideStatusBar; 				//@synthesize forceHideStatusBar=_forceHideStatusBar - In the implementation block
-(id)initWithFrontViewController:(id)arg1 rearViewController:(id)arg2;
-(void)setForceHideStatusBar:(BOOL)arg1;
-(int)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
@end