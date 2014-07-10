/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, July 6, 2014 at 12:33:08 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SecurityProvider : NSObject {
}
//-(id)sign:(id)arg1 privateKey:(struct __SecKey*)arg2;
//-(BOOL)verify:(id)arg1 signature:(id)arg2 publicKey:(struct __SecKey*)arg3;
-(id)publicKeyData:(id)arg1;
-(id)privateKeyData:(id)arg1;
//-(struct __SecKey*)publicKeyRef:(id)arg1;
//-(struct __SecKey*)privateKeyRef:(id)arg1;
-(void)generateKeyForPublicKeyTag:(id)arg1 privateKeyTag:(id)arg2 andCallback:(id)arg3;
-(id)ecdsaSign:(id)arg1 privateKey:(id)arg2;
-(BOOL)deleteKey:(id)arg1;
-(void)generateECKeyAndCallback:(id)arg1;
-(id)sha256:(id)arg1;
-(id)sha256ForData:(id)arg1;
-(id)AESKeyForPassword:(id)arg1 salt:(id)arg2;
-(id)rs256SignData:(id)arg1 withPrivateKey:(id)arg2;
-(id)AESKeyForPassword:(id)arg1 username:(id)arg2 saltComponent:(id)arg3;
-(id)encryptedDataForData:(id)arg1 key:(id)arg2 iv:(id*)arg3 error:(id*)arg4;
-(id)decryptedDataForData:(id)arg1 key:(id)arg2 iv:(id)arg3 error:(id*)arg4;
@end