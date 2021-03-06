/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:02 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIWebViewDelegate.h>

@interface NJKWebViewProgress : NSObject <UIWebViewDelegate> {
	unsigned _loadingCount; 
	unsigned _maxLoadCount; 
	NSURL* _currentURL; 
	BOOL _interactive; 
	id<NJKWebViewProgressDelegate> _progressDelegate; 
	id<UIWebViewDelegate> _webViewProxyDelegate; 
	id _progressBlock; 
	float _progress; 
}
@property (assign,nonatomic,__weak) id<NJKWebViewProgressDelegate> progressDelegate; 				//@synthesize progressDelegate=_progressDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<UIWebViewDelegate> webViewProxyDelegate; 				//@synthesize webViewProxyDelegate=_webViewProxyDelegate - In the implementation block
@property (nonatomic,copy) id progressBlock; 				//@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy) float progress; 				//@synthesize progress=_progress - In the implementation block
-(void)setWebViewProxyDelegate:(id)arg1;
-(void)completeProgress;
-(void)incrementProgress;
-(void)startProgress;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1;
-(void)setProgress:(float)arg1;
-(void)forwardInvocation:(id)arg1;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
-(void)webViewDidStartLoad:(id)arg1;
-(void)webViewDidFinishLoad:(id)arg1;
-(void)reset;
-(void).cxx_destruct;
-(void)setProgressDelegate:(id)arg1;
-(void)setProgressBlock:(id)arg1;
@end