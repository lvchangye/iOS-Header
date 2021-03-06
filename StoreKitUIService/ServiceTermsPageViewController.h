//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import "SKTermsPageViewControllerDelegate-Protocol.h"
#import "ServiceAlertProxyDelegate-Protocol.h"

@class NSString, SKTermsPageViewController, ServiceAlertProxy;

@interface ServiceTermsPageViewController : SBUIRemoteAlertServiceViewController <ServiceAlertProxyDelegate, SKTermsPageViewControllerDelegate>
{
    ServiceAlertProxy *_remoteAlertProxy;
    SKTermsPageViewController *_underlyingViewController;
}

+ (_Bool)_isSecureForRemoteViewService;
- (void).cxx_destruct;
- (void)_showViewControllerForAlertProxy:(id)arg1;
- (id)_remoteViewControllerProxy;
- (void)_dismissWithAcceptance:(_Bool)arg1;
- (void)_dismissClientViewController;
- (void)_dismiss;
- (_Bool)_checkEntitlementsWithError:(id *)arg1;
- (void)termsPageViewControllerDidFinish:(id)arg1 withAcceptance:(_Bool)arg2;
- (void)termsPageViewControllerDidFinish:(id)arg1;
- (void)handleHomeButtonPressed;
- (void)alertProxyDidCancel:(id)arg1;
- (void)_willAppearInRemoteViewController:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

