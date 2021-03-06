/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIAccelerometerDelegate.h"

@class NSString, CMMotionManager;
@protocol ActionRecognitionDelegate;

@interface ActionRecognition : XXUnknownSuperclass <UIAccelerometerDelegate> {
	CMMotionManager* mMotionMgr;
	float mGFactor;
	BOOL mIsCloseToEarRecognEnabled;
	BOOL mStartProximityState;
	BOOL mIsCloseToEar;
	BOOL mIsShakeRecognEnabled;
	id<NSObject, ActionRecognitionDelegate> delegate;
}
@property(assign, nonatomic) __weak id<NSObject, ActionRecognitionDelegate> delegate;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)unregisterNotify;
-(void)registerNotify;
-(void)proximityChange:(id)change;
-(void)disableProximity;
-(void)enableProximity;
-(void)closeToEarRecognByX:(double)earRecognByX Y:(double)y Z:(double)z;
-(BOOL)isShakeRecogning;
-(void)stopShakeRecogn;
-(void)startShakeRecognByFactor:(float)factor;
-(BOOL)isCloseToEarRecogning;
-(void)stopCloseToEarRecogn;
-(void)startCloseToEarRecogn;
-(void)dealloc;
-(id)init;
-(void)accelerometer:(id)accelerometer didAccelerate:(id)accelerate;
@end

