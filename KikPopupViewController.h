/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:02:00 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <ConversationPickerDelegate.h>
#import <UIAlertViewDelegate.h>

@interface KikPopupViewController : PopupViewController <ConversationPickerDelegate, UIAlertViewDelegate> {
	WhiteHybridNavigationController* _navigationController; 
	KikSendMessageTask* _messageTask; 
	id<KikPopupViewControllerDelegate> _kikPopupDelegate; 
	KikAPIMessage* _message; 
	KikAPIMessage* _sendToMessage; 
	HybridViewController* _selectedFromController; 
	NSString* _conversationID; 
	PopupMessageListScreenController* _popupMLSC; 
}
@property (nonatomic,retain) WhiteHybridNavigationController* popupNavigationController; 				//@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) id<KikPopupViewControllerDelegate> kikPopupDelegate; 				//@synthesize kikPopupDelegate=_kikPopupDelegate - In the implementation block
@property (nonatomic,retain) HybridViewController* selectedFromController; 				//@synthesize selectedFromController=_selectedFromController - In the implementation block
@property (nonatomic,retain) NSString* conversationID; 				//@synthesize conversationID=_conversationID - In the implementation block
@property (nonatomic,retain) PopupMessageListScreenController* popupMLSC; 				//@synthesize popupMLSC=_popupMLSC - In the implementation block
+(void)preloadPopupMessageListScreenController;
-(void)chatSelected:(id)arg1 inController:(id)arg2;
-(void)didViewInitialPickerScreen;
-(void)openConversationWithMessage:(id)arg1 andConvoID:(id)arg2;
-(void)clearPopupMLSCTextBar;
-(void)setPopupMLSC:(id)arg1;
-(void)setupInfoBar;
-(void)setSelectedFromController:(id)arg1;
-(void)dismissPopupAnimated:(BOOL)arg1;
-(void)viewDidFinishAnimating:(BOOL)arg1;
-(void)sendConvoOpenedMetric:(id)arg1;
-(id)popupViewURL;
-(id)launchedByCard;
-(id)initWithProvider:(id)arg1 andSendMessageTask:(id)arg2 andDelegate:(id)arg3;
-(id)initWithProvider:(id)arg1 andMessage:(id)arg2 andConversationID:(id)arg3;
-(void)didBecomeTopMostPopupView;
-(void)setPopupNavigationController:(id)arg1;
-(void)setKikPopupDelegate:(id)arg1;
-(void)didCancel;
-(void)dealloc;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
-(void)viewDidLoad;
-(void).cxx_destruct;
-(void)setConversationID:(id)arg1;
@end