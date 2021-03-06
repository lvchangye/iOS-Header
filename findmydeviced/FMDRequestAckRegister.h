//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMDRequest.h"

@class FMDAccount, NSDictionary, NSURL;

@interface FMDRequestAckRegister : FMDRequest
{
    FMDAccount *_account;
    NSDictionary *_registerCommand;
    NSURL *_ackURL;
}

@property(retain, nonatomic) NSURL *ackURL; // @synthesize ackURL=_ackURL;
@property(retain, nonatomic) NSDictionary *registerCommand; // @synthesize registerCommand=_registerCommand;
@property(retain, nonatomic) FMDAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (_Bool)canReplace:(id)arg1;
- (id)requestBody;
- (id)requestUrl;
- (id)initWithAccount:(id)arg1 registerCommand:(id)arg2 ackURL:(id)arg3;

@end

