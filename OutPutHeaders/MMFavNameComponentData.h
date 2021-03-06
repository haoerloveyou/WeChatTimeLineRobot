/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMComponentData.h"

@class NSString;

@interface MMFavNameComponentData : MMComponentData {
	NSString* m_nameId;
	NSString* m_fromUsr;
	NSString* m_brand;
	NSString* m_toUsr;
	NSString* m_realChatName;
	int favType;
	unsigned long _m_uiFavUpDateTime;
}
@property(assign, nonatomic) int favType;
@property(retain, nonatomic) NSString* m_brand;
@property(retain, nonatomic) NSString* m_realChatName;
@property(retain, nonatomic) NSString* m_toUsr;
@property(retain, nonatomic) NSString* m_fromUsr;
@property(retain, nonatomic) NSString* m_nameId;
@property(assign, nonatomic) unsigned long m_uiFavUpDateTime;
-(void).cxx_destruct;
@end

