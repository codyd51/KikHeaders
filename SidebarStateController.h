/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:13 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SidebarStateController : NSObject {
	BOOL _closed; 
	BOOL _bouncing; 
	int _notificationState; 
	id<SidebarStateProtocol> _delegate; 
}
@property (nonatomic,copy) BOOL closed; 				//@synthesize closed=_closed - In the implementation block
@property (nonatomic,copy) BOOL bouncing; 				//@synthesize bouncing=_bouncing - In the implementation block
@property (nonatomic,copy) int notificationState; 				//@synthesize notificationState=_notificationState - In the implementation block
@property (assign,nonatomic,__weak) id<SidebarStateProtocol> delegate; 				//@synthesize delegate=_delegate - In the implementation block
-(void)resetSidebar;
-(void)onSidebarClosed:(id)arg1;
-(void)onSidebarOpening:(id)arg1;
-(void)onSidebarBounceStart:(id)arg1;
-(void)onSidebarBounceEnd:(id)arg1;
-(void)onCardBadgeVisibilityChanged:(id)arg1;
-(void)refreshSidebarPulseForCardURL:(id)arg1;
-(void)pulseSidebarIgnoringApplicationState:(BOOL)arg1;
-(void)pulseSidebar;
-(void)refreshSidebarPulse;
-(void)setDelegate:(id)arg1;
-(id)init;
-(void).cxx_destruct;
@end