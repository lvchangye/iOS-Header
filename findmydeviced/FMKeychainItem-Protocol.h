//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDate, NSString;

@protocol FMKeychainItem <NSObject>
@property(readonly, nonatomic) NSData *rawData;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) NSDate *lastModifyDate;
@property(readonly, nonatomic) NSString *password;
@end
