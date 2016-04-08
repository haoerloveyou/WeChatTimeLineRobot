/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MessageObserverDelegate.h"
#import "UIAlertViewDelegate.h"
#import "PluginContactInfoAssist.h"

@class NSString;

@interface LBSContactInfoAssist : PluginContactInfoAssist <MessageObserverDelegate, UIAlertViewDelegate> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void)dealloc;
-(void)MessageReturn:(unsigned long)aReturn MessageInfo:(id)info Event:(unsigned long)event;
-(void)uninstallPlugin;
-(id)clearLBSBtnFooter;
-(void)clearLBSData;
-(void)onGoToLBS;
-(void)reloadInstalledTableViewData;
-(id)getPluginIntro;
@end
