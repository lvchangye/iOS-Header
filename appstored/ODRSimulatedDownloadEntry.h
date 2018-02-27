//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, NSURL;
@protocol OS_dispatch_source;

@interface ODRSimulatedDownloadEntry : NSObject
{
    double _duration;
    double _oneTick;
    unsigned long long _currentTickCount;
    NSObject<OS_dispatch_source> *_tickTimer;
    NSMutableArray *_requests;
    NSString *_destinationPath;
    NSURL *_sourceURL;
}

@property(readonly) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(readonly) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(readonly) NSArray *requests; // @synthesize requests=_requests;
- (void).cxx_destruct;
- (void)_cancelTimer;
- (void)_startTimer;
- (id)_createDispatchTimerWithInterval:(double)arg1 dispatchQueue:(id)arg2 dispatchBlock:(CDUnknownBlockType)arg3;
- (void)didFailWithError:(id)arg1;
- (void)didComplete;
- (void)removeRequest:(id)arg1;
- (void)addRequest:(id)arg1;
- (void)dealloc;
- (id)initWithSourceURL:(id)arg1 destinationPath:(id)arg2 duration:(double)arg3;

@end
