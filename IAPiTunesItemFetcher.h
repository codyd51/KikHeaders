/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:35 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <IAPItemFetchProvider.h>
#import <SKProductsRequestDelegate.h>

@interface IAPiTunesItemFetcher : NSObject <IAPItemFetchProvider, SKProductsRequestDelegate> {
	NSMutableDictionary* _requestCallbackDictionary; 
}
-(void)fetchSKUs:(id)arg1 withCallback:(id)arg2;
-(void)request:(id)arg1 didFailWithError:(id)arg2;
-(void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
-(id)init;
-(void).cxx_destruct;
@end