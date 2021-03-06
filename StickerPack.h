/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:02:05 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSCoding.h>

@interface StickerPack : NSObject <NSCoding> {
	BOOL _stickersDownloaded; 
	NSString* _storeLink; 
	NSDate* _dateAdded; 
	NSString* _title; 
	NSString* _icon; 
	NSArray* _stickers; 
}
@property (nonatomic,retain) NSString* storeLink; 				//@synthesize storeLink=_storeLink - In the implementation block
@property (nonatomic,retain) NSDate* dateAdded; 				//@synthesize dateAdded=_dateAdded - In the implementation block
@property (nonatomic,retain) NSString* title; 				//@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString* icon; 				//@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) BOOL stickersDownloaded; 				//@synthesize stickersDownloaded=_stickersDownloaded - In the implementation block
@property (nonatomic,copy) NSArray* stickers; 				//@synthesize stickers=_stickers - In the implementation block
+(id)stickerPackFromDictionary:(id)arg1;
-(void)setStoreLink:(id)arg1;
-(id)initWithStoreLink:(id)arg1 title:(id)arg2 icon:(id)arg3 stickers:(id)arg4;
-(void)setStickersDownloaded:(BOOL)arg1;
-(void)setStickers:(id)arg1;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(void)setTitle:(id)arg1;
-(id)description;
-(void)setIcon:(id)arg1;
-(void).cxx_destruct;
-(void)setDateAdded:(id)arg1;
@end