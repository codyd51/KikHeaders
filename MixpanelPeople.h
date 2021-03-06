/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:18 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface MixpanelPeople : NSObject {
	Mixpanel* _mixpanel; 
	NSMutableArray* _unidentifiedQueue; 
	NSString* _distinctId; 
	NSDictionary* _automaticPeopleProperties; 
}
@property (assign,nonatomic,__weak) Mixpanel* mixpanel; 				//@synthesize mixpanel=_mixpanel - In the implementation block
@property (nonatomic,retain) NSMutableArray* unidentifiedQueue; 				//@synthesize unidentifiedQueue=_unidentifiedQueue - In the implementation block
@property (nonatomic,copy) NSString* distinctId; 				//@synthesize distinctId=_distinctId - In the implementation block
@property (nonatomic,retain) NSDictionary* automaticPeopleProperties; 				//@synthesize automaticPeopleProperties=_automaticPeopleProperties - In the implementation block
-(id)initWithMixpanel:(id)arg1;
-(void)setDistinctId:(id)arg1;
-(void)setUnidentifiedQueue:(id)arg1;
-(void)setMixpanel:(id)arg1;
-(id)collectAutomaticPeopleProperties;
-(void)setAutomaticPeopleProperties:(id)arg1;
-(void)addPeopleRecordToQueueWithAction:(id)arg1 andProperties:(id)arg2;
-(void)set:(id)arg1;
-(void)trackCharge:(id)arg1 withProperties:(id)arg2;
-(void)addPushDeviceToken:(id)arg1;
-(void)set:(id)arg1 to:(id)arg2;
-(void)setOnce:(id)arg1;
-(void)increment:(id)arg1 by:(id)arg2;
-(void)union:(id)arg1;
-(void)trackCharge:(id)arg1;
-(void)clearCharges;
-(void)deleteUser;
-(void)increment:(id)arg1;
-(id)description;
-(void).cxx_destruct;
-(void)append:(id)arg1;
@end