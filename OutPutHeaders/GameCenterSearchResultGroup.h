/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString;

@interface GameCenterSearchResultGroup : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSMutableArray* similarGameItems;
@property(retain, nonatomic) NSString* moreContentUrl;
@property(retain, nonatomic) NSString* moreContentTitle;
@property(retain, nonatomic) NSMutableArray* webItems;
@property(retain, nonatomic) NSMutableArray* gameItems;
@property(assign, nonatomic) unsigned type;
@property(retain, nonatomic) NSString* title;
+(void)initialize;
@end
