/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:25 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <ContactSelectedCallback.h>

@interface KikBlockList : ComposeScreenController <ContactSelectedCallback> {
}
+(id)controller;
-(void)contactSelected:(id)arg1 view:(id)arg2;
-(void)rightNavigationButtonPressed:(id)arg1;
-(id)getFRC;
-(BOOL)showHaveNotTalkedToAnyoneYetHintView:(unsigned)arg1 searchText:(id)arg2;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1;
@end