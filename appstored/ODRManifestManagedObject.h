//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSDictionary, NSNumber, NSSet, NSString, NSURL;

@interface ODRManifestManagedObject : NSManagedObject
{
}

+ (id)placeholderManifest;
+ (id)manifestForApplicationBundleID:(id)arg1 create:(_Bool)arg2;
+ (id)manifestForApplicationBundleID:(id)arg1;
+ (id)manifestForAdamID:(id)arg1;
+ (id)manifestsForApplicationBundleIDs:(id)arg1;
+ (_Bool)deleteManifestForBundleID:(id)arg1;
+ (void)updateManifest:(id)arg1 forBundleID:(id)arg2 variant:(id)arg3 deleteAssetPacks:(_Bool)arg4 isStoredBased:(_Bool)arg5 isBeta:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (id)createManifestWithBundleID:(id)arg1 variant:(id)arg2 andManifestData:(id)arg3 isStoreBased:(_Bool)arg4 isBeta:(_Bool)arg5 inManagedObjectContext:(id)arg6;
+ (id)urlDataDetector;
+ (_Bool)haveExistingRecordForManifestWithBundleID:(id)arg1;
- (void)purgeAllAssetPacksForReason:(unsigned long long)arg1;
- (void)refreshFromStore:(CDUnknownBlockType)arg1;
- (void)refreshAssetPacksFromLocalURL;
- (id)createAssetPacksFromLocalURL;
- (void)retrieveAssetPackManifestWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSURL *localURL;
- (id)getLocalAssetPackManifest;
@property(retain, nonatomic) NSDictionary *manifestPropertyList;
- (_Bool)_isBeta;
- (id)_thinningVariant;
- (id)bundleShortVersion;
- (id)bundleVersion;
@property(retain, nonatomic) NSNumber *isMachineVPP; // @dynamic isMachineVPP;
@property(retain, nonatomic) NSString *adamID; // @dynamic adamID;
- (id)_localAssetPackManifestURL;
- (id)_localAssetPackManifestLastModificationDate;
- (_Bool)validateForInsert:(id *)arg1;
- (void)writeManifest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestStoreAssetPackManifestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestStoreManifestDataWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *softwareVersionExternalID;
- (id)_makeManifestFilesystemSafePathFromBundleID:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *applicationBundleID; // @dynamic applicationBundleID;
@property(retain, nonatomic) NSSet *assetPacks; // @dynamic assetPacks;
@property(retain, nonatomic) NSNumber *cachingAllowed; // @dynamic cachingAllowed;
@property(retain, nonatomic) NSNumber *isBeta; // @dynamic isBeta;
@property(retain, nonatomic) NSNumber *isStoreBased; // @dynamic isStoreBased;
@property(retain, nonatomic) NSDate *lastModificationDate; // @dynamic lastModificationDate;
@property(retain, nonatomic) NSString *localURLString; // @dynamic localURLString;
@property(retain, nonatomic) NSString *thinningVariant; // @dynamic thinningVariant;
@property(retain, nonatomic) NSString *version; // @dynamic version;

@end

