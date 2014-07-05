/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:56 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CardURLDataImageView : URLDataImageView {
	BOOL _shouldBeWhiteBackground; 
	BOOL _transitionsEnabled; 
	NSString* _defaultImageFilename; 
}
@property (assign,nonatomic) BOOL transitionsEnabled; 				//@synthesize transitionsEnabled=_transitionsEnabled - In the implementation block
@property (nonatomic,copy) NSString* defaultImageFilename; 				//@synthesize defaultImageFilename=_defaultImageFilename - In the implementation block
-(void)setImageWithoutPlaceholder:(id)arg1 withContentMode:(int)arg2 andBackgroundColour:(id)arg3;
-(void)setTransitionsEnabled:(BOOL)arg1;
-(void)setDefaultImageFilename:(id)arg1;
-(void)setImage:(id)arg1;
-(void)setBackgroundColor:(id)arg1;
-(void)didMoveToWindow;
-(void)setHighlighted:(BOOL)arg1;
-(void).cxx_destruct;
@end