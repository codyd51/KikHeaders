/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:35 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface KikDateUtils : NSObject {
}
+(id)formattedStringForTimestamp:(id)arg1 useShortForm:(BOOL)arg2;
+(id)formattedStringForTimestamp:(id)arg1 relativeTo:(id)arg2 useShortForm:(BOOL)arg3;
+(id)formattedStringForTimestamp:(id)arg1 usingFormat:(id)arg2;
+(long long)millisecondsSince1970ForDate:(id)arg1;
+(id)dateForMillisecondsSince1970:(long long)arg1;
@end