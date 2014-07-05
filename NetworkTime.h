/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, July 5, 2014 at 1:30:00 PM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */
#import "KikStorage.h"

@interface NetworkTime : NSObject {
	KikStorage* _storage; 
	NSDate* _lastSavedServerDate; 
	NSDate* _lastSavedLocalDate; 
	double _lastSavedSystemUptime; 
}
@property (nonatomic,retain) NSDate* lastSavedServerDate; 				//@synthesize lastSavedServerDate=_lastSavedServerDate - In the implementation block
@property (assign,nonatomic) double lastSavedSystemUptime; 				//@synthesize lastSavedSystemUptime=_lastSavedSystemUptime - In the implementation block
@property (nonatomic,retain) NSDate* lastSavedLocalDate; 				//@synthesize lastSavedLocalDate=_lastSavedLocalDate - In the implementation block
-(id)initWithStorage:(id)arg1;
-(void)loadSavedDate;
-(void)updateWithServerDate:(id)arg1;
-(void)setLastSavedServerDate:(id)arg1;
-(void)setLastSavedSystemUptime:(double)arg1;
-(void)setLastSavedLocalDate:(id)arg1;
-(id)now;
@end