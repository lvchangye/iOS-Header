//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  8 2018 12:17:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "_TtP11AppStoreKit37InAppPurchaseInstallPagePresenterView_-Protocol.h"

@class UIView;

@interface _TtC8AppStore38InAppPurchaseInstallPageViewController : UIViewController <_TtP11AppStoreKit37InAppPurchaseInstallPagePresenterView_>
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: presenter
    // Error parsing type: , name: artworkLoader
    // Error parsing type: , name: bannerView
    // Error parsing type: , name: headerView
    // Error parsing type: , name: separatorView
    // Error parsing type: , name: offerView
    // Error parsing type: , name: inAppPurchaseIntentAction
    // Error parsing type: , name: offerViewMinimumVerticalPadding
    // Error parsing type: , name: lifecycleObserver
    // Error parsing type: , name: appAdamId
    // Error parsing type: , name: overlayView
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)askToBuyRequestNotificationReceived:(id)arg1;
- (void)performWithAction:(id)arg1 sender:(id)arg2;
- (void)processWithPage:(id)arg1;
- (void)removeAllActionsForTarget:(id)arg1;
- (void)addButtonTappedTarget:(id)arg1 action:(SEL)arg2;
- (void)finish;
- (void)showWithProgress:(double)arg1 configuration:(id)arg2;
- (void)showPreInstallRedownloadWithConfiguration:(id)arg1;
- (void)showPreInstallWithConfiguration:(id)arg1;
- (void)showWithConfiguration:(id)arg1;
@property(nonatomic, retain) UIView *overlayView; // @synthesize overlayView;
- (void)showWithUpdateError:(id)arg1;
- (void)hideLoading;
- (void)showLoading;
- (void)reloadData;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (id)initWithCoder:(id)arg1;

@end

