/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "EmoticonServerNotifyTask.h"

@class NSArray;
@protocol EmoticonAddFromServerLogicObjectDelegate;

@interface EmoticonAddFromServerLogicObject : EmoticonServerNotifyTask {
	NSArray* _m_addMd5Array;
	id<EmoticonAddFromServerLogicObjectDelegate> _m_delegate;
}
@property(assign, nonatomic) __weak id<EmoticonAddFromServerLogicObjectDelegate> m_delegate;
@property(retain, nonatomic) NSArray* m_addMd5Array;
-(void).cxx_destruct;
-(BOOL)resumeLogic;
-(id)initWithDelegate:(id)delegate withMd5ObjectArray:(id)md5ObjectArray;
@end

