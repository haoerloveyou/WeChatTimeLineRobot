/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class IBeaconLocationInfo, NSMutableArray, BaseRequest;

@interface GetBeaconsPushMessageReq : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned long long shopid;
@property(retain, nonatomic) IBeaconLocationInfo* locationInfo;
@property(retain, nonatomic) NSMutableArray* beacons;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end
