/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:55 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SBJsonUTF8Stream : NSObject {
	r* _bytes; 
	NSMutableData* _data; 
	unsigned _length; 
	unsigned _index; 
}
@property (assign) unsigned index; 				//@synthesize index=_index - In the implementation block
-(BOOL)haveRemainingCharacters:(unsigned)arg1;
-(BOOL)skipCharacters:(r*)arg1 length:(unsigned)arg2;
-(BOOL)getNextUnichar:(unsigned short*)arg1;
-(void)skip;
-(BOOL)getRetainedStringFragment:(id*)arg1;
-(BOOL)getUnichar:(unsigned short*)arg1;
-(id)stringWithRange:(struct _NSRange)arg1;
-(void)dealloc;
-(id)init;
-(void)appendData:(id)arg1;
-(void)setIndex:(unsigned)arg1;
-(void)skipWhitespace;
@end