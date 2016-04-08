/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NotifyFromPrtlDelegate.h"

@class CMMDB, NSThread, NSString, NSRecursiveLock;
@protocol NotifyFromEventDelegate, NotifyFromMainCtrlDelegate;

@interface CBaseEvent : XXUnknownSuperclass <NotifyFromPrtlDelegate> {
	BOOL m_bStart;
	unsigned long m_uiEventType;
	unsigned long m_uiError;
	unsigned long m_uiUin;
	unsigned long m_uiEventID;
	id<NotifyFromEventDelegate> m_delNotifyFromEvent;
	id<NotifyFromMainCtrlDelegate> m_delNotifyToEventOwner;
	CMMDB* m_oMMDB;
	NSString* m_nsDocPath;
	NSRecursiveLock* m_oLock;
	BOOL m_bStop;
	BOOL m_bEventFinish;
	BOOL m_bBackGround;
	BOOL m_bNeedNotify;
	BOOL m_bSyncRun;
	BOOL m_bUseOperationQueue;
	BOOL m_bShortRetry;
	NSThread* m_oCurThread;
}
@property(assign, nonatomic) BOOL m_bEventFinish;
@property(assign, nonatomic) BOOL m_bStop;
@property(assign) __weak NSThread* m_oCurThread;
@property(assign, nonatomic) __weak id<NotifyFromMainCtrlDelegate> m_delNotifyToEventOwner;
@property(assign, nonatomic) BOOL m_bShortRetry;
@property(assign, nonatomic) BOOL m_bUseOperationQueue;
@property(assign, nonatomic) BOOL m_bSyncRun;
@property(assign, nonatomic) BOOL m_bNeedNotify;
@property(assign, nonatomic) BOOL m_bBackGround;
@property(retain, nonatomic) NSRecursiveLock* m_oLock;
@property(assign, nonatomic) unsigned long m_uiEventID;
@property(assign, nonatomic) unsigned long m_uiUin;
@property(retain, nonatomic) NSString* m_nsDocPath;
@property(retain, nonatomic) CMMDB* m_oMMDB;
@property(assign, nonatomic) __weak id<NotifyFromEventDelegate> m_delNotifyFromEvent;
@property(assign, nonatomic, getter=GetLastError) unsigned long m_uiError;
@property(assign, nonatomic, getter=GetEventType) unsigned long m_uiEventType;
-(void).cxx_destruct;
-(unsigned long)GetNetworkReachabilitySeed;
-(BOOL)IsLogIn;
-(void)NotifyFromPrtl:(unsigned long)prtl MessageInfo:(id)info;
-(void)AddOperationQueueEvent:(id)event;
-(void)emptyThreadTimer:(id)timer;
-(BOOL)IsStart;
-(void)ForceStop;
-(void)SetStart:(BOOL)start;
-(BOOL)SetEventInfo:(id)info;
-(void)Stop;
-(BOOL)Start:(unsigned*)start RetInfo:(id)info;
-(void)dealloc;
-(id)init;
@end
