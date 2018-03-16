//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSNumber, NSString, NSURL;

@protocol ServiceProductPage <NSObject>
- (void)setScriptContextDictionary:(NSDictionary *)arg1;
- (void)setProductPageStyle:(NSNumber *)arg1;
- (void)finishStarRatingPromptWithRating:(NSNumber *)arg1;
- (void)setupWithClientBundleID:(NSString *)arg1 bagType:(long long)arg2;
- (void)setPreview:(NSNumber *)arg1;
- (void)setClientIdentifier:(NSString *)arg1;
- (void)setAffiliateIdentifier:(NSString *)arg1;
- (void)setAdditionalBuyParameters:(NSString *)arg1;
- (void)loadProductWithURL:(NSURL *)arg1;
- (void)loadProductWithRequest:(NSDictionary *)arg1;
- (void)loadProductWithPageDictionary:(NSDictionary *)arg1;
- (void)finishImmediately;
- (void)setAskToBuy:(_Bool)arg1;
- (void)setPromptString:(NSString *)arg1;
- (void)setShowsRightBarButton:(_Bool)arg1;
- (void)setRightBarButtonTitle:(NSString *)arg1;
- (void)setCancelButtonTitle:(NSString *)arg1;
- (void)setShowsStoreButton:(_Bool)arg1;
@end
