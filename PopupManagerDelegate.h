/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:39 AM Mountain Daylight Time
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

@protocol UIGestureRecognizerDelegate
@optional
-(BOOL)gestureRecognizerShouldBegin(id):arg1 ;
-(BOOL)gestureRecognizer(id):arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer(id):arg2 ;
-(BOOL)gestureRecognizer(id):arg1 shouldRequireFailureOfGestureRecognizer(id):arg2 ;
-(BOOL)gestureRecognizer(id):arg1 shouldBeRequiredToFailByGestureRecognizer(id):arg2 ;
-(BOOL)gestureRecognizer(id):arg1 shouldReceiveTouch(id):arg2 ;
@end

@protocol SidebarProtocol
@required
-(void)hideSidebar(BOOL):arg1 ;
-(id)selectedCardURL;
-(void)switchToCard(id):arg1 withAnimation(BOOL):arg2 ;
-(void)switchToCard(id):arg1 usingURL(id):arg2 skipNavigation(BOOL):arg3 ;
-(void)switchToCard(id):arg1 usingURL(id):arg2 ;
-(void)popupCard(id):arg1 fullURL(id):arg2 requestUrl(id):arg3 requestData(id):arg4 fromHost(id):arg5 callback(id):arg6 ;
-(BOOL)sidebarIsFullyClosed;
-(void)showSidebar(BOOL):arg1 ;
-(void)updateStatusBarState(BOOL):arg1 ;
-(BOOL)isContentShowing;
-(void)switchToCard(id):arg1 usingURL(id):arg2 andController(id):arg3 withForce(BOOL):arg4 withAnimation(BOOL):arg5 skipNavigation(BOOL):arg6 ;
-(void)showSidebar;
-(void)switchToCard(id):arg1 ;
-(void)showFullscreenSidebar(BOOL):arg1 ;
-(void)switchToCard(id):arg1 withOffscreenDelay(double):arg2 ;
-(void)switchToCard(id):arg1 usingURL(id):arg2 andController(id):arg3 withForce(BOOL):arg4 withAnimation(BOOL):arg5 skipNavigation(BOOL):arg6 andOffscreenDelay(double):arg7 ;
-(void)switchToCard(id):arg1 usingURL(id):arg2 withForce(BOOL):arg3 withAnimation(BOOL):arg4 ;
-(void)switchToCard(id):arg1 usingURL(id):arg2 navigateBack(BOOL):arg3 ;
-(void)switchToCard(id):arg1 withForce(BOOL):arg2 ;
-(void)switchToCard(id):arg1 usingURL(id):arg2 withForce(BOOL):arg3 ;
-(BOOL)isSearching;
-(void)hideSidebar(BOOL):arg1 ;
-(id)selectedCardURL;
-(void)switchToCard(id):arg1 withAnimation(BOOL):arg2 ;
-(void)switchToCard(id):arg1 usingURL(id):arg2 skipNavigation(BOOL):arg3 ;
-(void)switchToCard(id):arg1 usingURL(id):arg2 ;
-(void)popupCard(id):arg1 fullURL(id):arg2 requestUrl(id):arg3 requestData(id):arg4 fromHost(id):arg5 callback(id):arg6 ;
-(BOOL)sidebarIsFullyClosed;
-(void)showSidebar(BOOL):arg1 ;
-(void)updateStatusBarState(BOOL):arg1 ;
-(BOOL)isContentShowing;
-(void)switchToCard(id):arg1 usingURL(id):arg2 andController(id):arg3 withForce(BOOL):arg4 withAnimation(BOOL):arg5 skipNavigation(BOOL):arg6 ;
-(void)showSidebar;
-(void)switchToCard(id):arg1 ;
-(void)showFullscreenSidebar(BOOL):arg1 ;
-(void)switchToCard(id):arg1 withOffscreenDelay(double):arg2 ;
-(void)switchToCard(id):arg1 usingURL(id):arg2 andController(id):arg3 withForce(BOOL):arg4 withAnimation(BOOL):arg5 skipNavigation(BOOL):arg6 andOffscreenDelay(double):arg7 ;
-(void)switchToCard(id):arg1 usingURL(id):arg2 withForce(BOOL):arg3 withAnimation(BOOL):arg4 ;
-(void)switchToCard(id):arg1 usingURL(id):arg2 navigateBack(BOOL):arg3 ;
-(void)switchToCard(id):arg1 withForce(BOOL):arg2 ;
-(void)switchToCard(id):arg1 usingURL(id):arg2 withForce(BOOL):arg3 ;
-(BOOL)isSearching;
@end

@protocol SidebarStateProtocol
@required
-(void)resetSidebar;
-(void)makeSidebarBlue;
-(void)resetSidebar;
-(void)makeSidebarBlue;
@end

@protocol PopupManagerDelegate
@required
-(void)willPushView;
-(void)willPopView;
-(void)willPushView;
-(void)willPopView;
@end
