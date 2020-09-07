//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "Action-Protocol.h"
#import "FMDAccessoryRegistryDelegate-Protocol.h"

@class FMDAccessoryRegistry, FMDBluetoothManager, FMDispatchTimer, FMFuture, NSArray, NSDate, NSError, NSNumber, NSString;
@protocol FMDBluetoothDeviceDiscovering, FMDInternalAccessory, OS_dispatch_queue;

@interface FMDAccessoryPlaySoundAction : NSObject <Action, FMDAccessoryRegistryDelegate>
{
    _Bool _bypassInEarCheck;
    _Bool _forceConnection;
    _Bool _playingSound;
    _Bool _terminated;
    NSNumber *_duration;
    NSNumber *_timeout;
    NSNumber *_inEarDetectionTimeout;
    NSNumber *_rampUpDuration;
    NSNumber *_rampDownDuration;
    FMFuture *_future;
    FMDBluetoothManager *_bluetoothManager;
    CDUnknownBlockType _actionCompletion;
    NSObject<FMDInternalAccessory> *_accessory;
    FMDAccessoryRegistry *_accessoryRegistry;
    NSArray *_channels;
    FMDispatchTimer *_timeoutTimer;
    NSDate *_timeoutDate;
    NSError *_timeoutError;
    CDUnknownBlockType _completion;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<FMDBluetoothDeviceDiscovering> *_discovery;
    FMDispatchTimer *_inEarTimer;
}

@property(retain, nonatomic) FMDispatchTimer *inEarTimer; // @synthesize inEarTimer=_inEarTimer;
@property(retain, nonatomic) NSObject<FMDBluetoothDeviceDiscovering> *discovery; // @synthesize discovery=_discovery;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) _Bool terminated; // @synthesize terminated=_terminated;
@property(nonatomic) _Bool playingSound; // @synthesize playingSound=_playingSound;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSError *timeoutError; // @synthesize timeoutError=_timeoutError;
@property(retain, nonatomic) NSDate *timeoutDate; // @synthesize timeoutDate=_timeoutDate;
@property(retain, nonatomic) FMDispatchTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) NSArray *channels; // @synthesize channels=_channels;
@property(nonatomic) __weak FMDAccessoryRegistry *accessoryRegistry; // @synthesize accessoryRegistry=_accessoryRegistry;
@property(retain, nonatomic) NSObject<FMDInternalAccessory> *accessory; // @synthesize accessory=_accessory;
@property(copy, nonatomic) CDUnknownBlockType actionCompletion; // @synthesize actionCompletion=_actionCompletion;
@property(nonatomic) _Bool forceConnection; // @synthesize forceConnection=_forceConnection;
@property(nonatomic) _Bool bypassInEarCheck; // @synthesize bypassInEarCheck=_bypassInEarCheck;
@property(retain, nonatomic) FMDBluetoothManager *bluetoothManager; // @synthesize bluetoothManager=_bluetoothManager;
@property(retain, nonatomic) FMFuture *future; // @synthesize future=_future;
@property(retain, nonatomic) NSNumber *rampDownDuration; // @synthesize rampDownDuration=_rampDownDuration;
@property(retain, nonatomic) NSNumber *rampUpDuration; // @synthesize rampUpDuration=_rampUpDuration;
@property(retain, nonatomic) NSNumber *inEarDetectionTimeout; // @synthesize inEarDetectionTimeout=_inEarDetectionTimeout;
@property(retain, nonatomic) NSNumber *timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)accessoryDidUnpair:(id)arg1;
- (void)accessoryDidUpdate:(id)arg1;
- (void)_playSoundNow:(id)arg1;
- (void)terminate;
- (void)cancelTimer;
- (void)notifyCompletionWithStatus:(id)arg1;
- (void)executePlaySound;
- (_Bool)shouldCancelAction:(id)arg1;
- (void)runWithCompletion:(CDUnknownBlockType)arg1;
- (void)willCancelAction;
- (id)actionType;
- (id)initWithAccessory:(id)arg1 accessoryRegistry:(id)arg2 channels:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
