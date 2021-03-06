//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AKURLBagDictionaryProvider-Protocol.h"
#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class NSDate, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface AKURLBagService : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate, AKURLBagDictionaryProvider>
{
    NSObject<OS_dispatch_queue> *_bagFetchQueue;
    NSDate *_lastUpdated;
    NSDictionary *_cachedBag;
}

+ (id)newBagURLRequest;
+ (id)sharedBagService;
- (void).cxx_destruct;
- (void)_unsafe_updateCacheWithData:(id)arg1;
- (void)_unsafe_handleURLBagResponseWithData:(id)arg1 error:(id)arg2;
- (_Bool)_unsafe_updateSharedURLBagIfNecessaryWithError:(id *)arg1;
- (id)urlBagWithError:(id *)arg1;
- (void)fetchURLBagWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetLastUpdatedTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

