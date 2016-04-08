/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class NSString;

@interface PLCrashProcessInfo : XXUnknownSuperclass {
	int _processID;
	NSString* _processName;
	int _parentProcessID;
	timeval _startTime;
	BOOL _traced;
}
@property(readonly, assign, nonatomic, getter=isTraced) BOOL traced;
@property(readonly, assign, nonatomic) timeval startTime;
@property(readonly, assign, nonatomic) int parentProcessID;
@property(readonly, assign, nonatomic) NSString* processName;
@property(readonly, assign, nonatomic) int processID;
+(id)currentProcessInfo;
-(void)dealloc;
-(id)initWithProcessID:(int)processID;
@end
