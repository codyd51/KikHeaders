/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, July 5, 2014 at 1:15:45 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface BloomFilter : NSObject {
	int _numberOfBits; 
	int _numberOfHashes; 
	struct __CFBitVector* _bitVector; 
}
@property (nonatomic) int numberOfBits; 				//@synthesize numberOfBits=_numberOfBits - In the implementation block
@property (nonatomic) int numberOfHashes; 				//@synthesize numberOfHashes=_numberOfHashes - In the implementation block
-(struct __CFBitVector*)bitVector;
-(BOOL)exists:(id)arg1;
-(id)initWithNumberOfBits:(int)arg1 andWithNumberOfHashes:(int)arg2;
-(id)initWithExpectedNumberOfElements:(int)arg1 andFalsePositiveProbability:(double)arg2;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(BOOL)add:(id)arg1;
@end