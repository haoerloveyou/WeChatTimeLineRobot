/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PBCoding.h"

@class SnsAction, NSString;

@interface WCMsgActionGroup : XXUnknownSuperclass <PBCoding> {
	SnsAction* currentAction;
	SnsAction* referAction;
	NSString* clientId;
	unsigned objectCreateTime;
	unsigned delStatus;
	unsigned long long id;
	unsigned long long parentId;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned delStatus;
@property(assign, nonatomic) unsigned objectCreateTime;
@property(retain, nonatomic) NSString* clientId;
@property(retain, nonatomic) SnsAction* referAction;
@property(retain, nonatomic) SnsAction* currentAction;
@property(assign, nonatomic) unsigned long long parentId;
@property(assign, nonatomic) unsigned long long id;
+(void)initialize;
-(void).cxx_destruct;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end

