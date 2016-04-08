/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "CNetworkStatusExt.h"
#import "MMService.h"

@class NSMutableArray, NSString, NSMutableDictionary;

@interface MMWebJSLogMgr : MMService <PBMessageObserverDelegate, CNetworkStatusExt, MMService> {
	NSMutableArray* logList;
	NSMutableDictionary* invalidLogDic;
	BOOL cgiRunning;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)ReachabilityChange:(unsigned long)change;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(unsigned long)getMaxSendSize;
-(id)getReportPackage;
-(void)realtimeReport;
-(void)tryRealtimeReport;
-(id)getKVLogHead;
-(BOOL)addJSLog:(unsigned long)log logExt:(id)ext type:(unsigned long)type;
-(void)handleRespInvalidLogList:(id)list;
-(BOOL)isInvaildWithLogId:(unsigned long)logId;
-(void)filterInvalidLogItem;
-(id)pathForInvalidLogCache;
-(void)saveInvalidLogDic;
-(void)loadInvalidLogDic;
-(void)onServiceReloadData;
-(void)onServiceInit;
-(void)dealloc;
-(id)init;
@end
