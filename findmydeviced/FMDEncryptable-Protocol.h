//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol FMDCiphering;

@protocol FMDEncryptable <NSObject>
- (void)decryptWithCipher:(NSObject<FMDCiphering> *)arg1 completion:(void (^)(NSData *, NSObject<FMDCiphering> *, NSError *))arg2;
- (void)encryptWithcompletion:(void (^)(NSData *, NSObject<FMDCiphering> *, NSError *))arg1;
@end

