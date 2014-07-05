/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:54 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CardsView : UIView {
	CardsPluginRegistry* _pluginRegistry; 
	CardsProtocolWebViewDelegate* _protocolDelegate; 
	PickerRequest* _pickerRequest; 
	id<BrowserImplementation> _browser; 
	id<PopupViewHostProvider> _popupHostProvider; 
	id<KikImplementation> _kik; 
	id<CardDescriptionProvider> _cardsProvider; 
	id<PermissionsProvider> _permissions; 
	id<IAPManagerProvider> _iapManager; 
	SecureXDataManager* _xDataManager; 
	CardsPhotoHandler* _photoHandler; 
	CardsProfileHandler* _profileHandler; 
	CardsBridgePlugin* _bridgePlugin; 
	BrowserPlugin* _browserPlugin; 
	KikPlugin* _kikPlugin; 
	UserDataPlugin* _userDataPlugin; 
	PhotoPlugin* _photoPlugin; 
	MetricsPlugin* _metricsPlugin; 
	MediaPlugin* _mediaPlugin; 
	MediaItemPlugin* _mediaItemPlugin; 
	ProfilePlugin* _profilePlugin; 
	AuthPlugin* _authPlugin; 
	KeyboardPlugin* _keyboardPlugin; 
	PushPlugin* _pushPlugin; 
	PickerPlugin* _pickerPlugin; 
	IAPPlugin* _iapPlugin; 
	XDataPlugin* _xDataPlugin; 
	CardsWebView* _webView; 
	AutomationPlugin* _automationPlugin; 
}
@property (nonatomic,copy) CardsWebView* webView; 				//@synthesize webView=_webView - In the implementation block
@property (nonatomic,copy) BrowserPlugin* browserPlugin; 				//@synthesize browserPlugin=_browserPlugin - In the implementation block
@property (nonatomic,copy) KikPlugin* kikPlugin; 				//@synthesize kikPlugin=_kikPlugin - In the implementation block
@property (nonatomic,copy) UserDataPlugin* userDataPlugin; 				//@synthesize userDataPlugin=_userDataPlugin - In the implementation block
@property (nonatomic,copy) MetricsPlugin* metricsPlugin; 				//@synthesize metricsPlugin=_metricsPlugin - In the implementation block
@property (nonatomic,copy) PhotoPlugin* photoPlugin; 				//@synthesize photoPlugin=_photoPlugin - In the implementation block
@property (nonatomic,copy) ProfilePlugin* profilePlugin; 				//@synthesize profilePlugin=_profilePlugin - In the implementation block
@property (nonatomic,copy) AuthPlugin* authPlugin; 				//@synthesize authPlugin=_authPlugin - In the implementation block
@property (nonatomic,copy) KeyboardPlugin* keyboardPlugin; 				//@synthesize keyboardPlugin=_keyboardPlugin - In the implementation block
@property (nonatomic,copy) PickerPlugin* pickerPlugin; 				//@synthesize pickerPlugin=_pickerPlugin - In the implementation block
@property (nonatomic,copy) IAPPlugin* iapPlugin; 				//@synthesize iapPlugin=_iapPlugin - In the implementation block
@property (nonatomic,copy) XDataPlugin* xDataPlugin; 				//@synthesize xDataPlugin=_xDataPlugin - In the implementation block
@property (nonatomic,copy) AutomationPlugin* automationPlugin; 				//@synthesize automationPlugin=_automationPlugin - In the implementation block
+(void)clearReferer;
+(void)updateReferer:(id)arg1;
+(void)ignoreCacheNextLoad;
-(void)setupPlugins;
-(void)installWebViewHacks;
-(void)loadUrl:(id)arg1 cachePolicy:(unsigned)arg2;
-(id)initWithBrowser:(id)arg1 popupHostProvider:(id)arg2 cardsProvider:(id)arg3 kik:(id)arg4 photoHandler:(id)arg5 permissionsProvider:(id)arg6 profileHandler:(id)arg7 pickerRequest:(id)arg8 iapManager:(id)arg9 xDataManager:(id)arg10;
-(void)loadUrl:(id)arg1;
-(BOOL)cardsBridgeWasAccessed;
-(id)uncoupleWebView;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1;
-(void).cxx_destruct;
@end