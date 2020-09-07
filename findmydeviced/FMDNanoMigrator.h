//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDNanoRegistry, FMDServerInteractionController, FMDUnregisterTokenStore, FMDXPCJanitor;

@interface FMDNanoMigrator : NSObject
{
    FMDNanoRegistry *_registry;
    FMDUnregisterTokenStore *_unregisterTokenStore;
    FMDServerInteractionController *_serverInteractionController;
    FMDXPCJanitor *_janitor;
}

@property(retain, nonatomic) FMDXPCJanitor *janitor; // @synthesize janitor=_janitor;
@property(retain, nonatomic) FMDServerInteractionController *serverInteractionController; // @synthesize serverInteractionController=_serverInteractionController;
@property(retain, nonatomic) FMDUnregisterTokenStore *unregisterTokenStore; // @synthesize unregisterTokenStore=_unregisterTokenStore;
@property(retain, nonatomic) FMDNanoRegistry *registry; // @synthesize registry=_registry;
- (void).cxx_destruct;
- (void)setJanitorScheduledDate:(id)arg1;
- (id)lastScheduledJanitorDate;
- (id)unregisterDeviceInfoAdaptors;
- (id)deviceInfoForHostDevice;
- (void)scheduleJanitor:(double)arg1;
- (void)deviceDidPair:(id)arg1;
- (void)addObservers;
- (void)unregisterAccessoriesIfNeeded;
- (void)dealloc;
- (id)initWithNanoRegistry:(id)arg1 unregisterTokenStore:(id)arg2 serverInteractionController:(id)arg3;

@end
