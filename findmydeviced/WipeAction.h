//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "Action-Protocol.h"

@class FMDServiceProvider, NSString;

@interface WipeAction : NSObject <Action>
{
    FMDServiceProvider *_provider;
}

@property(nonatomic) __weak FMDServiceProvider *provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (void)_performiOSWipe;
- (void)performWipe;
- (void)_wipeNow;
- (void)_abortWipe;
- (void)_ackWipeCommand:(id)arg1 withStatus:(long long)arg2;
- (void)_sendWipeAck;
@property(readonly, copy) NSString *description;
- (_Bool)shouldCancelAction:(id)arg1;
- (void)runWithCompletion:(CDUnknownBlockType)arg1;
- (id)actionType;
- (id)initWithProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
