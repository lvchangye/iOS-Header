//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_AKMessage.h"

@class NSObject;

@interface AKCommandMessage : _AKMessage
{
}

- (id)description;
@property(copy, nonatomic) NSObject *argument;
@property(nonatomic) unsigned long long command;
- (id)init;

@end

