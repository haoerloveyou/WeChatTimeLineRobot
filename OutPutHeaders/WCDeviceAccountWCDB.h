/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class WCDataBase, WCDataBaseTable;

@interface WCDeviceAccountWCDB : MMObject {
	WCDataBase* m_db;
	WCDataBaseTable* m_tableAccount;
	WCDataBaseTable* m_tableAirKiss;
}
@property(retain, nonatomic) WCDataBaseTable* m_tableAirKiss;
@property(retain, nonatomic) WCDataBaseTable* m_tableAccount;
@property(retain, nonatomic) WCDataBase* m_db;
-(void).cxx_destruct;
-(BOOL)insertOrUpdateInAirKissForKey:(id)key WithData:(id)data;
-(id)getDataInAirKissForKey:(id)key;
-(void)delDeviceInfoInAccountForUser:(id)user AndDeviceId:(id)anId;
-(void)delDeviceInfosInAccountForUser:(id)user;
-(BOOL)insertOrUpdateDeviceInfoInAccount:(id)account;
-(id)getDeviceInfoInAccountForDID:(long long)did;
-(id)getDeviceInfoInAccountForMd5Str:(id)md5Str;
-(id)getDeviceInfoInAccountForUser:(id)user AndDeviceId:(id)anId;
-(id)getAllDeviceInfosInAccountForUser:(id)user;
-(unsigned long)getCountOfDeviceInfosInAccountForUser:(id)user;
-(id)getAllDeviceInfosInAccount;
-(id)getDeviceBrandAccountWCDBPath;
-(BOOL)setupDB;
-(void)dealloc;
-(id)init;
@end
