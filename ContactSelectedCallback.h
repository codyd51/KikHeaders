/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:02:03 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol ViewHitProtocol
@optional
-(void)userToAdd(id):arg1 ;
-(void)userWasClicked(id):arg1 ;
-(void)didCancel;
@end

@protocol UIAlertViewDelegate
@optional
-(void)alertView(id):arg1 clickedButtonAtIndex(int):arg2 ;
-(void)alertView(id):arg1 didDismissWithButtonIndex(int):arg2 ;
-(void)alertViewCancel(id):arg1 ;
-(BOOL)alertViewShouldEnableFirstOtherButton(id):arg1 ;
-(void)didPresentAlertView(id):arg1 ;
-(void)willPresentAlertView(id):arg1 ;
-(void)alertView(id):arg1 willDismissWithButtonIndex(int):arg2 ;
@end

@protocol ContactSelectedCallback
@optional
-(void)multipleContactsSelected(id):arg1 view(id):arg2 ;
-(void)contactSelectCancelledWithView(id):arg1 ;
@required
-(void)contactSelected(id):arg1 view(id):arg2 ;
-(void)contactSelected(id):arg1 view(id):arg2 ;
@end
