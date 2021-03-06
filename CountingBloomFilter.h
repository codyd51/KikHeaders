/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:42 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CountingBloomFilter : BloomFilter {
	unsigned* _countingArray; 
}
@property (nonatomic,copy) unsigned byteLength; 
-(BOOL)exists:(id)arg1;
-(id)initWithNumberOfBits:(int)arg1 andWithNumberOfHashes:(int)arg2;
-(BOOL)incrementCountingArrayAtIndex:(int)arg1;
-(BOOL)decrementCountingArrayAtIndex:(int)arg1;
-(BOOL)checkCountingArrayAtIndex:(int)arg1;
-(BOOL)add:(id)arg1;
-(BOOL)remove:(id)arg1;
@end