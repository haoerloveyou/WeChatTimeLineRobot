/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UISearchDisplayDelegate.h"
#import "MMUIViewController.h"
#import "WeChat-Structs.h"
#import "UISearchBarDelegate.h"

@class UISearchDisplayController, NSString, UISearchBar;

@interface MMSearchBarDisplayController : MMUIViewController <UISearchDisplayDelegate, UISearchBarDelegate> {
	int m_statusBarStyle;
	UISearchBar* m_searchBar;
	UISearchDisplayController* m_searchDisplayController;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UISearchDisplayController* searchDisplayController;
@property(retain, nonatomic) UISearchBar* searchBar;
-(void).cxx_destruct;
-(BOOL)isSeachActive;
-(void)dealloc;
-(void)didAppear;
-(void)viewDidBePoped:(BOOL)view;
-(void)viewDidBeDismissed:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(BOOL)searchDisplayController:(id)controller shouldReloadTableForSearchScope:(int)searchScope;
-(BOOL)searchDisplayController:(id)controller shouldReloadTableForSearchString:(id)searchString;
-(void)searchDisplayController:(id)controller didHideSearchResultsTableView:(id)view;
-(void)searchDisplayController:(id)controller willHideSearchResultsTableView:(id)view;
-(void)searchDisplayController:(id)controller didShowSearchResultsTableView:(id)view;
-(void)searchDisplayController:(id)controller willShowSearchResultsTableView:(id)view;
-(void)searchDisplayController:(id)controller willUnloadSearchResultsTableView:(id)view;
-(void)searchDisplayController:(id)controller didLoadSearchResultsTableView:(id)view;
-(void)searchDisplayControllerDidEndSearch:(id)searchDisplayController;
-(void)searchDisplayControllerWillEndSearch:(id)searchDisplayController;
-(void)searchDisplayControllerDidBeginSearch:(id)searchDisplayController;
-(void)searchDisplayControllerWillBeginSearch:(id)searchDisplayController;
-(void)SearchBarBecomeUnActive;
-(id)init;
-(void)searchBarCancelButtonClicked:(id)clicked;
-(void)searchBarBookmarkButtonClicked:(id)clicked;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(BOOL)searchBar:(id)bar shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)searchBarTextDidEndEditing:(id)searchBarText;
-(BOOL)searchBarShouldEndEditing:(id)searchBar;
-(void)searchBarTextDidBeginEditing:(id)searchBarText;
-(BOOL)searchBarShouldBeginEditing:(id)searchBar;
@end
