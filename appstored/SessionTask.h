//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSMemoryEntity.h>

@class NSURLSessionDataTask;
@protocol NSURLSessionDataDelegatePrivate><NSURLSessionTaskDelegatePrivate;

@interface SessionTask : SSMemoryEntity
{
    NSURLSessionDataTask *_dataTask;
    id <NSURLSessionDataDelegatePrivate><NSURLSessionTaskDelegatePrivate> _delegate;
}

+ (id)defaultProperties;
+ (Class)databaseEntityClass;
+ (id)taskWithSession:(id)arg1 request:(id)arg2;
@property(nonatomic) __weak id <NSURLSessionDataDelegatePrivate><NSURLSessionTaskDelegatePrivate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long taskID;
@property(nonatomic) long long downloadID;
- (id)initWithSession:(id)arg1 request:(id)arg2;

@end
