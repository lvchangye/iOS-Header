//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "Action-Protocol.h"

@class FMDRequestRegister, FMDServiceProvider, NSString;
@protocol OS_dispatch_queue;

@interface RegisterAction : NSObject <Action>
{
    _Bool _force;
    _Bool _cancelled;
    FMDServiceProvider *_provider;
    FMDRequestRegister *_request;
    NSString *_reason;
    NSObject<OS_dispatch_queue> *_digestSerialQueue;
}

@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *digestSerialQueue; // @synthesize digestSerialQueue=_digestSerialQueue;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) FMDRequestRegister *request; // @synthesize request=_request;
@property(nonatomic) __weak FMDServiceProvider *provider; // @synthesize provider=_provider;
@property(nonatomic) _Bool force; // @synthesize force=_force;
- (void).cxx_destruct;
- (void)saveRegisterDigest:(id)arg1 forKey:(id)arg2;
- (id)_lastForcedRegisterTimePrefKey;
- (id)_registerDigestPrefKey;
- (_Bool)_registerDeviceWithCause:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_registrationInformationDigest;
- (id)_extraRegistrationInformation;
- (id)_reasonForStartupRegister;
@property(readonly, copy) NSString *description;
- (_Bool)shouldCancelAction:(id)arg1;
- (void)willCancelAction;
- (void)runWithCompletion:(CDUnknownBlockType)arg1;
- (id)actionType;
- (id)initWithReason:(id)arg1 force:(_Bool)arg2 provider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

