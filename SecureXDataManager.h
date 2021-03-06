/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, July 6, 2014 at 12:18:50 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SecureXDataManager : XDataManager {
	SecurityProvider* _securityProvider; 
	AccountManager* _accountManager; 
	KikStorage* _storage; 
	NSData* _privateKeyHash; 
	NSData* _privateKey; 
}
@property (nonatomic,copy) SecurityProvider* securityProvider; 				//@synthesize securityProvider=_securityProvider - In the implementation block
@property (nonatomic,copy) AccountManager* accountManager; 				//@synthesize accountManager=_accountManager - In the implementation block
@property (nonatomic,copy) NSData* privateKeyHash; 				//@synthesize privateKeyHash=_privateKeyHash - In the implementation block
@property (nonatomic,copy) NSData* privateKey; 				//@synthesize privateKey=_privateKey - In the implementation block
-(id)initWithRecordProvider:(id)arg1 accountManager:(id)arg2 securityProvider:(id)arg3 andStorage:(id)arg4;
-(id)decryptedDataFromPrivateEnvelope:(id)arg1;
-(id)xPrivateEnvelopeFromXObject:(id)arg1 andNSDataXObject:(id)arg2 andNewPrivateKey:(id)arg3;
-(id)updateRecords:(id)arg1 withXClass:(Class)arg2 secure:(BOOL)arg3;
-(void)updatePrivateKey:(id)arg1;
-(id)xPrivateEnvelopeFromXObject:(id)arg1;
-(id)retrieveRecord:(id)arg1 withXClass:(Class)arg2 secure:(BOOL)arg3;
-(void)parseRecord:(id)arg1 withXClass:(Class)arg2 secure:(BOOL)arg3;
-(void)clearKeys;
-(void)generateKeyIfNeeded;
-(id)xPrivateEnvelopeFromNSData:(id)arg1 andNewPrivateKey:(id)arg2;
-(id)generateRecordKeyWithBase:(id)arg1;
-(void)reset;
@end