/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, July 5, 2014 at 1:15:16 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */
#import "KikLRUCache.h"
 #import "KikPersistentCache.h"
 #import "KikNetwork.h"
 #import "KikHttpClientController.h"
 #import "FileDownload.h"

@interface AttachmentManager : NSObject {
	KikLRUCache* _attachmentCache; 
	KikPersistentCache* _uploadCache; 
	KikPersistentCache* _downloadInfoCache; 
	NSObject* _lock; 
	NSMutableArray* _pendingUploads; 
	NSMutableArray* _pendingDownloads; 
	KikNetwork* _network; 
	Config* _config; 
	NSMutableArray* _recentUploads; 
	NSMutableDictionary* _downloadFileSizes; 
	BOOL _uploading; 
	BOOL _downloading; 
	NSString* _contentIdBeingUploaded; 
	int _numDownloadTestIterations; 
	int _numUploadTestIterations; 
	int _numUploadTestBytes; 
	int _testUploadFileSize; 
	NSData* _testUploadData; 
	KikHttpClientController* _http; 
	FileDownload* _fileDownload; 
}
@property (assign,nonatomic) BOOL uploading; 				//@synthesize uploading=_uploading - In the implementation block
@property (assign,nonatomic) BOOL downloading; 				//@synthesize downloading=_downloading - In the implementation block
@property (assign,nonatomic) int numDownloadTestIterations; 				//@synthesize numDownloadTestIterations=_numDownloadTestIterations - In the implementation block
@property (assign,nonatomic) int numUploadTestIterations; 				//@synthesize numUploadTestIterations=_numUploadTestIterations - In the implementation block
@property (assign,nonatomic) int numUploadTestBytes; 				//@synthesize numUploadTestBytes=_numUploadTestBytes - In the implementation block
@property (assign,nonatomic) int testUploadFileSize; 				//@synthesize testUploadFileSize=_testUploadFileSize - In the implementation block
@property (nonatomic,copy) NSString* contentIdBeingUploaded; 				//@synthesize contentIdBeingUploaded=_contentIdBeingUploaded - In the implementation block
@property (nonatomic,retain) NSData* testUploadData; 				//@synthesize testUploadData=_testUploadData - In the implementation block
@property (assign,nonatomic) FileDownload* fileDownload; 				//@synthesize fileDownload=_fileDownload - In the implementation block
-(void)onXmppConnected:(id)arg1;
-(id)attachmentUserInfo:(id)arg1;
-(id)tokenToFilename:(id)arg1;
-(BOOL)isJobUpload:(id)arg1;
-(BOOL)cacheRequired:(id)arg1;
-(void)setUploading:(BOOL)arg1;
-(void)setDownloading:(BOOL)arg1;
-(id)uploadCache;
-(id)userDataForContentId:(id)arg1;
-(void)updateUserDataForContentId:(id)arg1 withUserData:(id)arg2;
-(id)pendingUploads;
-(void)processCachedUploadTokens;
-(void)uploadNextContent;
-(id)recentUploads;
-(id)pendingDownloads;
-(unsigned)getDownloadFileSize:(id)arg1;
-(id)dataForAttachmentFile:(id)arg1;
-(void)downloadFileFromMessage:(id)arg1 numBytesToDownload:(unsigned)arg2 preemptiveDownload:(BOOL)arg3;
-(void)downloadFileWithID:(id)arg1 fileSize:(id)arg2 location:(id)arg3 numBytesToDownload:(unsigned)arg4 preemptiveDownload:(BOOL)arg5;
-(void)reportDownloadCompleteForContentId:(id)arg1 location:(id)arg2 success:(BOOL)arg3;
-(void)queueDownload:(id)arg1;
-(void)downloadNextItemInQueue;
-(id)downloadFileSizes;
-(id)downloadInfoCache;
-(id)attachmentCache;
-(void)setFileDownload:(id)arg1;
-(void)bytesWritten:(id)arg1 forId:(id)arg2;
-(void)contentRequestComplete:(id)arg1;
-(void)onFileDownloadComplete:(id)arg1;
-(void)onPartialFileDownloadComplete:(id)arg1;
-(void)onFileDownloadChunkReceived:(id)arg1;
-(void)onFileDownloadError:(id)arg1;
-(void)retainFileDownloadRef:(id)arg1;
-(id)contentDescriptorFromDownloadNotification:(id)arg1;
-(void)cleanUpAfterDownload:(id)arg1 success:(BOOL)arg2;
-(void)startDownload:(id)arg1 params:(id)arg2 resetRetries:(BOOL)arg3;
-(void)startUploadContentForId:(id)arg1 andResetRetries:(BOOL)arg2;
-(void)setContentIdBeingUploaded:(id)arg1;
-(void)startUpload:(id)arg1 params:(id)arg2 resetRetries:(BOOL)arg3;
-(void)reportUploadProgressForContentId:(id)arg1 bytesSent:(int)arg2 totalBytes:(int)arg3 appId:(id)arg4;
-(void)reportUploadCompleteForContentId:(id)arg1 totalBytes:(int)arg2;
-(void)reportUploadProgressForContentId:(id)arg1;
-(id)nextContentIdToDownload;
-(void)startDownloadForId:(id)arg1;
-(id)nextContentIdToUpload;
-(id)uploadUserDataForId:(id)arg1;
-(id)attachmentDataForId:(id)arg1;
-(void)saveAttachmentUserInfo:(id)arg1 forAttachmentId:(id)arg2;
-(void)saveAttachmentData:(id)arg1 forAttachmentId:(id)arg2;
-(id)initWithConfig:(id)arg1 network:(id)arg2 http:(id)arg3;
-(void)removeContentFromRecentlyUploaded:(id)arg1;
-(void)queueUpload:(id)arg1;
-(float)getAttachmentDownloadPercent:(id)arg1;
-(BOOL)isAttachmentFileDownloaded:(id)arg1;
-(void)downloadFileFromMessage:(id)arg1;
-(void)setSizeOfFileDownload:(id)arg1 size:(unsigned)arg2 contentType:(id)arg3;
-(id)getDownloadFileContentType:(id)arg1;
-(void)cleanUpDownloadRemnants:(id)arg1;
-(void)insertLegacyPictureDownloadForCacheID:(id)arg1;
-(void)startUploadContentForId:(id)arg1;
-(void)uploadContentForId:(id)arg1 appId:(id)arg2 data:(id)arg3 contentType:(id)arg4;
-(float)progressForContentId:(id)arg1;
-(int)stateForContentId:(id)arg1;
-(void)saveAttachmentFile:(id)arg1 forAttachmentId:(id)arg2;
-(id)filePathForAttachmentId:(id)arg1;
-(void)setNumDownloadTestIterations:(int)arg1;
-(void)setNumUploadTestIterations:(int)arg1;
-(void)setNumUploadTestBytes:(int)arg1;
-(void)setTestUploadFileSize:(int)arg1;
-(void)setTestUploadData:(id)arg1;
-(void)dealloc;
-(void)setup;
@end