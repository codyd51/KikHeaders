/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, July 5, 2014 at 1:27:26 PM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface KikCredentials : NSObject {
	NSString* _jid; 
	NSString* _password; 
	NSString* _deviceId; 
}
@property (copy) NSString* jid; 				//@synthesize jid=_jid - In the implementation block
@property (copy) NSString* password; 				//@synthesize password=_password - In the implementation block
@property (copy) NSString* deviceId; 				//@synthesize deviceId=_deviceId - In the implementation block
-(id)initWithJid:(id)arg1 password:(id)arg2 deviceId:(id)arg3;
-(id)initWithDeviceId:(id)arg1;
@end