/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:42 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol ZUUIRevealControllerDelegate
@optional
-(void)resetFrontViewFramePosition;
-(void)forceUpdateStatusBarAppearance;
-(void)hideFrontViewAnimated(BOOL):arg1 withCompletion(id):arg2 ;
-(BOOL)revealController(id):arg1 shouldRevealRearViewController(id):arg2 ;
-(BOOL)revealController(id):arg1 shouldHideRearViewController(id):arg2 ;
-(void)revealController(id):arg1 willRevealRearViewController(id):arg2 ;
-(void)revealController(id):arg1 didRevealRearViewController(id):arg2 usingGesture(BOOL):arg3 ;
-(void)revealController(id):arg1 willHideRearViewController(id):arg2 ;
-(void)revealController(id):arg1 didHideRearViewController(id):arg2 ;
-(void)revealController(id):arg1 willSwapToFrontViewController(id):arg2 ;
-(void)revealController(id):arg1 didSwapToFrontViewController(id):arg2 ;
-(void)revealController(id):arg1 didChangeFrontViewPosition(int):arg2 ;
-(void)revealControllerWillBounce(id):arg1 ;
-(void)revealControllerFinishedBounce(id):arg1 ;
-(void)revealController(id):arg1 didDragFrontViewToPosition(float):arg2 ;
@end
