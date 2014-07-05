/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:21 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface XCardDescriptor_Builder : PBGeneratedMessage_Builder {
	XCardDescriptor* result; 
}
@property (retain) XCardDescriptor* result; 
-(id)privacyLink;
-(id)setPrivacyLink:(id)arg1;
-(id)termsOfServiceLink;
-(id)setTermsOfServiceLink:(id)arg1;
-(id)setLastAccessed:(long long)arg1;
-(long long)lastAccessed;
-(id)mergeFromCodedInputStream:(id)arg1;
-(id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
-(id)mergeFrom:(id)arg1;
-(id)buildPartial;
-(id)internalGetResult;
-(id)clone;
-(id)clearTitle;
-(id)setIconUrl:(id)arg1;
-(id)setMediaTrayIconUrl:(id)arg1;
-(id)setAnonymousKey:(id)arg1;
-(id)setWebPageUrl:(id)arg1;
-(BOOL)hasIconUrl;
-(id)iconUrl;
-(BOOL)hasMediaTrayIconUrl;
-(id)mediaTrayIconUrl;
-(BOOL)hasTermsOfServiceLink;
-(BOOL)hasPrivacyLink;
-(BOOL)hasPushToken;
-(BOOL)hasDateAdded;
-(BOOL)hasLastAccessed;
-(BOOL)hasAnonymousKey;
-(id)anonymousKey;
-(id)permissionsList;
-(BOOL)hasWebPageUrl;
-(id)webPageUrl;
-(id)backStackEntriesList;
-(id)permissionsAtIndex:(int)arg1;
-(id)backStackEntriesAtIndex:(int)arg1;
-(id)mergeAnonymousKey:(id)arg1;
-(id)addPermissions:(id)arg1;
-(id)addBackStackEntries:(id)arg1;
-(id)clearUrl;
-(id)clearIconUrl;
-(id)clearMediaTrayIconUrl;
-(id)clearTermsOfServiceLink;
-(id)clearPrivacyLink;
-(id)clearPushToken;
-(id)clearDateAdded;
-(id)clearLastAccessed;
-(id)setAnonymousKeyBuilder:(id)arg1;
-(id)clearAnonymousKey;
-(id)replacePermissionsAtIndex:(int)arg1 with:(id)arg2;
-(id)addAllPermissions:(id)arg1;
-(id)clearPermissionsList;
-(id)clearWebPageUrl;
-(id)replaceBackStackEntriesAtIndex:(int)arg1 with:(id)arg2;
-(id)addAllBackStackEntries:(id)arg1;
-(id)clearBackStackEntriesList;
-(id)defaultInstance;
-(id)setPushToken:(id)arg1;
-(id)pushToken;
-(void)dealloc;
-(id)init;
-(id)setTitle:(id)arg1;
-(id)title;
-(id)url;
-(id)setUrl:(id)arg1;
-(id)clear;
-(void)setResult:(id)arg1;
-(BOOL)hasTitle;
-(BOOL)hasUrl;
-(id)build;
-(long long)dateAdded;
-(id)setDateAdded:(long long)arg1;
@end