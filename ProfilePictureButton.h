/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:35 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface ProfilePictureButton : UIButton {
	NSString* _jid; 
}
@property (nonatomic,copy) NSString* jid; 				//@synthesize jid=_jid - In the implementation block
-(void)profilePictureUpdated:(id)arg1;
-(void)blockStatusChanged:(id)arg1;
-(void)updateProfileImage:(BOOL)arg1;
-(void)setJid:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(id)initWithCoder:(id)arg1;
-(void).cxx_destruct;
@end