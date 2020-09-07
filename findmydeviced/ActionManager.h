//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSOperationQueue, NSPointerArray;
@protocol OS_dispatch_queue;

@interface ActionManager : NSObject
{
    _Bool _operationTransactionActive;
    NSDate *_nextRegisterDate;
    long long _nextActionIdNumber;
    NSObject<OS_dispatch_queue> *_metadataModsQueue;
    NSObject<OS_dispatch_queue> *_transactionSerialQueue;
    NSOperationQueue *_actionExecutionQueue;
    NSPointerArray *_weakActions;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSPointerArray *weakActions; // @synthesize weakActions=_weakActions;
@property(nonatomic) _Bool operationTransactionActive; // @synthesize operationTransactionActive=_operationTransactionActive;
@property(retain, nonatomic) NSOperationQueue *actionExecutionQueue; // @synthesize actionExecutionQueue=_actionExecutionQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *transactionSerialQueue; // @synthesize transactionSerialQueue=_transactionSerialQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *metadataModsQueue; // @synthesize metadataModsQueue=_metadataModsQueue;
@property(nonatomic) long long nextActionIdNumber; // @synthesize nextActionIdNumber=_nextActionIdNumber;
@property(retain, nonatomic) NSDate *nextRegisterDate; // @synthesize nextRegisterDate=_nextRegisterDate;
- (void).cxx_destruct;
- (void)_setDependenciesForNewAction:(id)arg1;
- (id)description;
- (void)refreshTransactionState:(unsigned long long)arg1;
- (void)cancelAllActions;
- (void)cancelActionWithId:(id)arg1;
- (id)enqueueAction:(id)arg1;
- (id)init;

@end
