//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMDRequest.h"

@class FMDAccount, FMDFMIPUnregisterDeviceInfo, NSArray;

@interface FMDRequestFMIPUnregister : FMDRequest
{
    FMDAccount *_account;
    FMDFMIPUnregisterDeviceInfo *_device;
    NSArray *_otherDevices;
}

@property(retain, nonatomic) NSArray *otherDevices; // @synthesize otherDevices=_otherDevices;
@property(retain, nonatomic) FMDFMIPUnregisterDeviceInfo *device; // @synthesize device=_device;
@property(retain, nonatomic) FMDAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_dumpInfoForDevice:(id)arg1 into:(id)arg2 host:(_Bool)arg3;
- (_Bool)canReplace:(id)arg1;
- (_Bool)canRequestBeRetriedNow;
- (_Bool)showAuthFailedMessage;
- (id)authToken;
- (id)requestBody;
- (id)urlTemplateType;
- (id)initWithAccount:(id)arg1 device:(id)arg2 otherDevices:(id)arg3;

@end
