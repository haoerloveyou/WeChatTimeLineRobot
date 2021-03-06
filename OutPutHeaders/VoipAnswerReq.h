/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class VoipRelayData, NSString, BaseRequest;

@interface VoipAnswerReq : WXPBGeneratedMessage {
}
@property(assign, nonatomic) int onlyAudio;
@property(assign, nonatomic) unsigned long long timestamp64;
@property(assign, nonatomic) int netType;
@property(assign, nonatomic) long long roomKey;
@property(retain, nonatomic) VoipRelayData* capInfo;
@property(retain, nonatomic) VoipRelayData* peerId;
@property(assign, nonatomic) int answer;
@property(assign, nonatomic) int roomId;
@property(retain, nonatomic) NSString* fromUsername;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

