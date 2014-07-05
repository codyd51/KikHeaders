/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:02:00 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface MediaItemPlugin : CardsPlugin {
	CardWhitelistManager* _whitelistManager; 
	id<CardDescriptionProvider> _cardDescriptionProvider; 
	StickerManager* _stickerManager; 
}
-(BOOL)requestAccess;
-(id)initWithPluginWhitelistManager:(id)arg1 andCardDescriptionProvider:(id)arg2 andStickerManager:(id)arg3;
-(id)getInstalledStickerPacks:(id)arg1;
-(id)installStickerPack:(id)arg1;
-(id)addItemsToCache:(id)arg1;
-(void).cxx_destruct;
@end