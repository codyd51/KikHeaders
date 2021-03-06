/*
 * This header is generated by weak_classdump 0.2
 * on Friday, July 4, 2014 at 12:01:48 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SearchResultsSidebarTableViewController : SidebarTableViewController {
	NSArray* _cardList; 
	NSString* _selectedCardURL; 
	NSArray* _searchResults; 
	NSRegularExpression* _urlRegularExpression; 
	NSString* _searchURL; 
	CardsSearchQuery* _cardsSearchQuery; 
	NSObject* _searchResultsLock; 
	NSTimer* _searchDelayTimer; 
	double _sidebarSearchDelay; 
	BOOL _alreadySentSponsoredViewEvents; 
	id<SearchResultsSidebarDelegate> _delegate; 
	NSString* _searchString; 
	int _searchResultsState; 
	double _searchResponseTime; 
}
@property (nonatomic,retain) id<SearchResultsSidebarDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString* searchString; 				//@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,copy) int searchResultsState; 				//@synthesize searchResultsState=_searchResultsState - In the implementation block
@property (assign,nonatomic) double searchResponseTime; 				//@synthesize searchResponseTime=_searchResponseTime - In the implementation block
@property (assign,nonatomic) BOOL alreadySentSponsoredViewEvents; 				//@synthesize alreadySentSponsoredViewEvents=_alreadySentSponsoredViewEvents - In the implementation block
-(id)loadCell;
-(void)setAlreadySentSponsoredViewEvents:(BOOL)arg1;
-(void)setSearchResultsState:(int)arg1;
-(void)searchSuggestionsEvent:(id)arg1;
-(void)setSearchString:(id)arg1 andForceSearch:(BOOL)arg2;
-(void)doSearchQuery:(id)arg1 withForce:(BOOL)arg2;
-(void)performSearchQuery;
-(void)setSearchResponseTime:(double)arg1;
-(void)configureCell:(id)arg1 forSearchResult:(id)arg2;
-(void)configureCell:(id)arg1 forLabel:(id)arg2;
-(void)setDelegate:(id)arg1;
-(id)init;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(void)scrollViewWillBeginDragging:(id)arg1;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(void)viewDidLoad;
-(void).cxx_destruct;
-(void)setSearchString:(id)arg1;
@end