//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface FMDProtectedContextManager : NSObject
{
    NSMutableDictionary *_lockForContext;
    NSObject<OS_dispatch_queue> *_synchronizerSerialQueue;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizerSerialQueue; // @synthesize synchronizerSerialQueue=_synchronizerSerialQueue;
@property(retain, nonatomic) NSMutableDictionary *lockForContext; // @synthesize lockForContext=_lockForContext;
- (void).cxx_destruct;
- (void)cleanOutCurrentContextDirectoryURL:(id)arg1 preservingContextUUID:(id)arg2 obliterateDirectory:(_Bool)arg3;
- (void)deleteFilesAtURLs:(id)arg1;
- (id)readWriteLockForContextKey:(id)arg1;
- (id)contextKeysForType:(struct NSString *)arg1;
- (void)cleanupAllContextsForKey:(id)arg1;
- (void)cleanupContextsForKey:(id)arg1 contextUUID:(id)arg2 obliterate:(_Bool)arg3;
- (void)cleanupContextsForKey:(id)arg1 contextUUID:(id)arg2;
- (void)saveContext:(id)arg1 forContextKey:(id)arg2;
- (id)saveContext:(id)arg1 forContextKey:(id)arg2 dataProtectionClass:(long long)arg3;
- (id)contextForKey:(id)arg1 contextUUID:(id *)arg2 error:(id *)arg3;
- (id)init;

@end
