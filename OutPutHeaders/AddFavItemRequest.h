/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface AddFavItemRequest : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* object;
@property(retain, nonatomic) NSString* sourceId;
@property(assign, nonatomic) unsigned sourceType;
@property(assign, nonatomic) unsigned type;
@property(retain, nonatomic) NSString* clientId;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end
