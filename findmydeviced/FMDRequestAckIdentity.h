//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMDRequest.h"

@class FMDServiceProvider, NSDictionary, NSURL;

@interface FMDRequestAckIdentity : FMDRequest
{
    FMDServiceProvider *_provider;
    NSDictionary *_identityCommand;
    NSURL *_ackURL;
}

@property(retain, nonatomic) NSURL *ackURL; // @synthesize ackURL=_ackURL;
@property(retain, nonatomic) NSDictionary *identityCommand; // @synthesize identityCommand=_identityCommand;
@property(nonatomic) __weak FMDServiceProvider *provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (_Bool)canReplace:(id)arg1;
- (id)requestBody;
- (id)requestUrl;
- (id)initWithProvider:(id)arg1 identityCommand:(id)arg2 ackURL:(id)arg3;

@end
