/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:49 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIAlertViewDelegate.h>
#import <BrowserImplementation.h>
#import <KikImplementation.h>
#import <CardDescriptionProvider.h>
#import <ConversationPickerDelegate.h>
#import <PermissionsProvider.h>
#import <ContactSelectedCallback.h>
#import <PopupViewHostProvider.h>
#import <KikPopupViewControllerDelegate.h>

@interface CardsViewController : HybridViewController <UIAlertViewDelegate, BrowserImplementation, KikImplementation, CardDescriptionProvider, ConversationPickerDelegate, PermissionsProvider, ContactSelectedCallback, PopupViewHostProvider, KikPopupViewControllerDelegate> {
	NSString* _url; 
	NSString* _externalLaunchUrl; 
	CardsView* _cardsView; 
	UIView* _popupLoadingView; 
	BOOL _isError; 
	NSTimer* _pageLoadTimeout; 
	CardManager* _cardManager; 
	int _pageMode; 
	ThreadSafeTimer* _keyboardRaisedDelay; 
	id<SidebarProtocol> _sidebar; 
	id<PopupViewManagerProvider> _popupManager; 
	NSDate* _startUpTime; 
	NSDate* _coverShowingTime; 
	NSDate* _pageReadyTime; 
	CardHistoryManager* _historyManager; 
	unsigned _orientation; 
	BOOL _isReady; 
	BOOL _destroying; 
	id _peopleListCallback; 
	HybridNavigationController* _selectionNavigationController; 
	SendToViewController* _chatSelector; 
	KikSendMessageTask* _pendingMessage; 
	CardsPhotoHandler* _photoHandler; 
	CardsProfileHandler* _profileHandler; 
	PickerRequest* _pickerRequest; 
	BOOL _statusBarHidden; 
	BOOL _statusBarLightContent; 
	BOOL _statusBarTransparent; 
	BOOL _previousStatusBarHidden; 
	NSString* _pushToken; 
	int _browserViewMode; 
	BOOL _isPopupMode; 
	UIView* _coverView; 
	UIView* _loadingCoverView; 
	UILabel* _loadingLabel; 
	CardURLDataImageView* _iconImage; 
	UIImageView* _iconOverlayImage; 
	UIImageView* _defaultIconImage; 
	UIImageView* _spinnerImage; 
	UIButton* _reloadButton; 
	UIView* _errorCoverView; 
	UILabel* _oopsLabel; 
	UILabel* _errorLabel; 
	CardURLDataImageView* _errorIconImage; 
	UIImageView* _errorIconOverlayImage; 
	UIImageView* _errorDefaultIconImage; 
	UIView* _statusBarFiller; 
	BrowserViewController* _browserViewController; 
	double _offscreenDelay; 
}
@property (nonatomic,retain) UIView* coverView; 				//@synthesize coverView=_coverView - In the implementation block
@property (assign,nonatomic,__weak) UIView* loadingCoverView; 				//@synthesize loadingCoverView=_loadingCoverView - In the implementation block
@property (assign,nonatomic,__weak) UILabel* loadingLabel; 				//@synthesize loadingLabel=_loadingLabel - In the implementation block
@property (assign,nonatomic,__weak) CardURLDataImageView* iconImage; 				//@synthesize iconImage=_iconImage - In the implementation block
@property (assign,nonatomic,__weak) UIImageView* iconOverlayImage; 				//@synthesize iconOverlayImage=_iconOverlayImage - In the implementation block
@property (assign,nonatomic,__weak) UIImageView* defaultIconImage; 				//@synthesize defaultIconImage=_defaultIconImage - In the implementation block
@property (assign,nonatomic,__weak) UIImageView* spinnerImage; 				//@synthesize spinnerImage=_spinnerImage - In the implementation block
@property (assign,nonatomic,__weak) UIButton* reloadButton; 				//@synthesize reloadButton=_reloadButton - In the implementation block
@property (assign,nonatomic,__weak) UIView* errorCoverView; 				//@synthesize errorCoverView=_errorCoverView - In the implementation block
@property (assign,nonatomic,__weak) UILabel* oopsLabel; 				//@synthesize oopsLabel=_oopsLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel* errorLabel; 				//@synthesize errorLabel=_errorLabel - In the implementation block
@property (assign,nonatomic,__weak) CardURLDataImageView* errorIconImage; 				//@synthesize errorIconImage=_errorIconImage - In the implementation block
@property (assign,nonatomic,__weak) UIImageView* errorIconOverlayImage; 				//@synthesize errorIconOverlayImage=_errorIconOverlayImage - In the implementation block
@property (assign,nonatomic,__weak) UIImageView* errorDefaultIconImage; 				//@synthesize errorDefaultIconImage=_errorDefaultIconImage - In the implementation block
@property (assign,nonatomic,__weak) UIView* statusBarFiller; 				//@synthesize statusBarFiller=_statusBarFiller - In the implementation block
@property (nonatomic,@dynamic,copy,copy) NSString* canonicalUrl; 
@property (nonatomic,@dynamic,copy,copy) NSString* canonicalWebViewUrl; 
@property (nonatomic,@dynamic,copy) NSString* url; 
@property (nonatomic,copy) CardsView* cardsView; 				//@synthesize cardsView=_cardsView - In the implementation block
@property (nonatomic,retain) UIView* popupLoadingView; 				//@synthesize popupLoadingView=_popupLoadingView - In the implementation block
@property (nonatomic,retain) id<SidebarProtocol> sidebar; 				//@synthesize sidebar=_sidebar - In the implementation block
@property (nonatomic,copy) NSDate* startUpTime; 				//@synthesize startUpTime=_startUpTime - In the implementation block
@property (nonatomic,copy) BOOL isReady; 				//@synthesize isReady=_isReady - In the implementation block
@property (nonatomic,copy) BOOL isError; 				//@synthesize isError=_isError - In the implementation block
@property (assign,nonatomic) BOOL isPopupMode; 				//@synthesize isPopupMode=_isPopupMode - In the implementation block
@property (assign,nonatomic) BOOL previousStatusBarHidden; 				//@synthesize previousStatusBarHidden=_previousStatusBarHidden - In the implementation block
@property (nonatomic,copy) NSString* pushToken; 				//@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,retain,copy) PickerRequest* pickerRequest; 				//@synthesize pickerRequest=_pickerRequest - In the implementation block
@property (assign,nonatomic) double offscreenDelay; 				//@synthesize offscreenDelay=_offscreenDelay - In the implementation block
@property (nonatomic,retain) BrowserViewController* browserViewController; 				//@synthesize browserViewController=_browserViewController - In the implementation block
+(id)errorMessageForKikSendError:(id)arg1;
+(id)savedPickerRequest;
+(id)controllerWithCardDescriptor:(id)arg1 url:(id)arg2 sidebar:(id)arg3 pickerRequest:(id)arg4 historyManager:(id)arg5 popupManager:(id)arg6;
+(void)clearLocalStorageOnDestory;
+(id)adjustedIcon:(id)arg1;
+(id)iconForCardWithURL:(id)arg1 fromCardManager:(id)arg2;
+(void)setupPickerRequestForUrl:(id)arg1 requestData:(id)arg2 callback:(id)arg3;
+(BOOL)cancelPickerRequest;
+(id)controllerWithCardDescriptor:(id)arg1 url:(id)arg2 sidebar:(id)arg3 historyManager:(id)arg4 popupManager:(id)arg5;
-(int)pageMode;
-(BOOL)obscuredByPopup;
-(void)chatSelected:(id)arg1;
-(void)multipleContactsSelected:(id)arg1 view:(id)arg2;
-(void)contactSelectCancelledWithView:(id)arg1;
-(id)popupViewHostURL;
-(void)allViewsWillPop;
-(void)allViewsDidPop;
-(void)messageCompleted;
-(void)messageFailed;
-(id)initWithPickerRequest:(id)arg1 historyManager:(id)arg2 card:(id)arg3 url:(id)arg4 sidebar:(id)arg5 popupManager:(id)arg6;
-(void)onEnteredForeground;
-(void)onEnteredBackground;
-(void)onBecameActive;
-(void)onBecameInactive;
-(void)onSidebarOpen;
-(void)onSidebarClosed;
-(void)onSidebarClosing;
-(void)setSidebar:(id)arg1;
-(void)stopLoadingTimeout;
-(CGPoint)viewPointForKeyboardFrame:(CGRect)arg1;
-(CGRect)adjustRectForStatusBar:(CGRect)arg1;
-(void)resizeForKeyboard:(id)arg1;
-(void)hideLoadingCover;
-(void)updateCardBounds;
-(void)resizeCardsViewWithHeightAdjustment:(id)arg1;
-(void)setStatusBarHidden:(BOOL)arg1 transparent:(BOOL)arg2 isLight:(BOOL)arg3;
-(void)cleanupAfterMessage;
-(void)prepareForShutdown;
-(void)setLoadingCoverView:(id)arg1;
-(void)setIconOverlayImage:(id)arg1;
-(void)setDefaultIconImage:(id)arg1;
-(void)setSpinnerImage:(id)arg1;
-(void)setErrorCoverView:(id)arg1;
-(void)setOopsLabel:(id)arg1;
-(void)setErrorLabel:(id)arg1;
-(void)setErrorIconImage:(id)arg1;
-(void)setErrorIconOverlayImage:(id)arg1;
-(void)setErrorDefaultIconImage:(id)arg1;
-(void)observeCardsViewNotifications:(BOOL)arg1;
-(void)updateViewForDescriptor:(id)arg1;
-(void)startLoadingTimeout;
-(void)webViewLoadFailed:(id)arg1;
-(void)webViewSSLInvalid:(id)arg1;
-(void)webViewLoadFinished:(id)arg1;
-(void)webViewLoadStarted:(id)arg1;
-(void)webViewLoadingURL:(id)arg1;
-(void)webViewReloadRequested:(id)arg1;
-(void)pageLoadFailed;
-(void)showErrorCover;
-(void)onRefreshRequested:(id)arg1;
-(void)onResetRequested:(id)arg1;
-(CGRect)determineCardFrameWithOrientation:(int)arg1;
-(BOOL)canShowPopupCardWithURL:(id)arg1;
-(void)refreshCard;
-(void)cardWillBeNavigated;
-(void)showSidebar;
-(void)fireReadyMetrics;
-(void)switchToBrowserView;
-(void)cleanupAfterMessage:(BOOL)arg1;
-(void)completeSendingKikMessage:(id)arg1 withSendTo:(BOOL)arg2 andReturnToSender:(BOOL)arg3;
-(id)anonymousPublicKey;
-(id)anonymousPrivateKey;
-(BOOL)isCardSecure;
-(int)orientationLock;
-(void)setOrientationLock:(int)arg1;
-(void)performHttpsUpgradeForCardURL:(id)arg1;
-(void)performRefreshClearingCache:(BOOL)arg1;
-(void)pageFailed;
-(void)setPageMode:(int)arg1;
-(void)navigateToUrl:(id)arg1 title:(id)arg2 icon:(id)arg3 clearHistory:(BOOL)arg4;
-(void)navigateToUrl:(id)arg1 requestData:(id)arg2 callback:(id)arg3;
-(void)openExternalUrl:(id)arg1;
-(void)openWindowWithUrl:(id)arg1 callbackPath:(id)arg2 callback:(id)arg3;
-(void)showLoadingSpinner:(BOOL)arg1;
-(void)pageReady;
-(id)currentUrl;
-(void)setBrowserViewMode:(int)arg1;
-(int)browserViewMode;
-(void)closePopup;
-(void)openURL:(id)arg1 inPopup:(BOOL)arg2;
-(void)updateCardTitle:(id)arg1 andIconUrl:(id)arg2 andMediaTrayIconUrl:(id)arg3 andPrivacyPolicy:(id)arg4 andTermsOfService:(id)arg5;
-(void)updateAnonymousPublicKey:(id)arg1 privateKey:(id)arg2;
-(void)sendKikMessage:(id)arg1 toConversation:(id)arg2 withReturnToSender:(BOOL)arg3;
-(void)sendKikMessage:(id)arg1 toUser:(id)arg2 withReturnToSender:(BOOL)arg3;
-(void)openConversation:(id)arg1 withReturnToSender:(BOOL)arg2;
-(void)openConversationWithUser:(id)arg1 withCallback:(id)arg2;
-(void)pickUsers:(id)arg1 preselectedUsers:(id)arg2 minSelect:(int)arg3 maxSelect:(int)arg4;
-(void)pickFilteredUsers:(id)arg1 filtered:(id)arg2 filterSelf:(BOOL)arg3 minSelect:(int)arg4 maxSelect:(int)arg5;
-(id)titleForCardWithURL:(id)arg1;
-(id)iconUrlForCardWithURL:(id)arg1;
-(id)iconForCardWithURL:(id)arg1;
-(BOOL)isCardTrusted;
-(BOOL)isCardDebugMode;
-(id)cardUrl;
-(BOOL)checkPermissions:(id)arg1;
-(void)requestPermissions:(id)arg1 callback:(id)arg2;
-(void)refreshButtonPressed:(id)arg1;
-(void)cardWillBeNavigatedBack;
-(void)setPopupLoadingView:(id)arg1;
-(void)setPreviousStatusBarHidden:(BOOL)arg1;
-(void)setReloadButton:(id)arg1;
-(void)setStatusBarFiller:(id)arg1;
-(void)setIsPopupMode:(BOOL)arg1;
-(void)setOffscreenDelay:(double)arg1;
-(void)setBrowserViewController:(id)arg1;
-(void)didCancel;
-(void)setPushToken:(id)arg1;
-(void)setLoadingLabel:(id)arg1;
-(void)dealloc;
-(id)init;
-(int)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(void)didReceiveMemoryWarning;
-(unsigned)supportedInterfaceOrientations;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)didMoveToParentViewController:(id)arg1;
-(void)viewDidAppear:(BOOL)arg1;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
-(void)stopLoading;
-(void)setUrl:(id)arg1;
-(void).cxx_destruct;
-(void)setCoverView:(id)arg1;
-(void)setIconImage:(id)arg1;
-(void)keyboardWillShow:(id)arg1;
-(void)keyboardWillHide:(id)arg1;
@end