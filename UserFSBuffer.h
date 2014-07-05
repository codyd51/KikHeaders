/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:13 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSDiscardableContent.h>

@interface UserFSBuffer : NSObject <NSDiscardableContent> {
	unsigned long _allocatedSize; 
	int _fd; 
	unsigned _busyCount; 
	BOOL _dirty; 
	unsigned long _length; 
	void* _buffer; 
	unsigned long long _offset; 
}
@property (nonatomic,copy) unsigned long long offset; 				//@synthesize offset=_offset - In the implementation block
@property (nonatomic,copy) unsigned long length; 				//@synthesize length=_length - In the implementation block
@property (nonatomic,copy) void* buffer; 				//@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) BOOL dirty; 				//@synthesize dirty=_dirty - In the implementation block
-(BOOL)beginContentAccess;
-(void)endContentAccess;
-(void)discardContentIfPossible;
-(BOOL)isContentDiscarded;
-(int)_readBlockContents;
-(int)_writeBlockContents;
-(id)initWithOffset:(unsigned long long)arg1 length:(unsigned long)arg2 fileDescriptor:(int)arg3;
-(int)resizeToLength:(unsigned long)arg1;
-(void)setDirty:(BOOL)arg1;
@end