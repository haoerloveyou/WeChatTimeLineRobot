/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface AppJumpLogicHelper : XXUnknownSuperclass {
}
-(int)getJumpFunctionTypeByAppId:(id)anId;
-(id)getAppIdByFunctionType:(int)type;
-(BOOL)isCanShowSource:(id)source;
-(BOOL)isShowAppMessageBottom:(id)bottom;
-(BOOL)isShowTimelineSource:(id)source;
-(BOOL)innerJumpByAppId:(id)anId isMessage:(BOOL)message;
-(BOOL)jumpToGameDetailView:(id)gameDetailView isFromMessage:(BOOL)message;
-(BOOL)jumpByAppIdInTimeline:(id)timeline;
-(BOOL)jumpByAppIdInMessage:(id)message;
-(BOOL)isCanJumpWithAppId:(id)appId;
-(BOOL)isShowTimeLineJumpLink:(id)link;
@end
