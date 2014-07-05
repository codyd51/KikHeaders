/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, July 5, 2014 at 22651 PM Mountain Daylight Time
 * Operating System Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */
#import "UploadManagerDelegate.h"

@protocol UploadManager
@property (nonatomic,retain) id<UploadManagerDelegate> delegate; 
@required
-(void)authorize:(id)arg1 ;
-(id)contentItemForID:(id)arg1 ;
-(id)uploadData:(id)arg1 withContentID:(id)arg2 appID:(id)arg3 ;
-(id)resumeFailedUploadForID:(id)arg1 ;
-(void)startUploading;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)clearCache;
-(void)authorize:(id)arg1 ;
-(id)contentItemForID:(id)arg1 ;
-(id)uploadData:(id)arg1 withContentID:(id)arg2 appID:(id)arg3 ;
-(id)resumeFailedUploadForID:(id)arg1 ;
-(void)startUploading;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)clearCache;
@end
