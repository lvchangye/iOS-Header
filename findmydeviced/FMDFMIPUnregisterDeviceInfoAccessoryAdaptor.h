//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMDFMIPUnregisterDeviceInfo.h"

@class FMDNanoRegistryAccessory;

@interface FMDFMIPUnregisterDeviceInfoAccessoryAdaptor : FMDFMIPUnregisterDeviceInfo
{
    FMDNanoRegistryAccessory *_accessory;
}

@property(retain, nonatomic) FMDNanoRegistryAccessory *accessory; // @synthesize accessory=_accessory;
- (void).cxx_destruct;
- (id)initWithAccessory:(id)arg1 unregisterToken:(id)arg2;

@end
