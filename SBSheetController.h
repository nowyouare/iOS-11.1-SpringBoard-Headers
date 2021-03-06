//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBBarSwipeAffordanceObserver.h"
#import "SBHomeGestureParticipantDelegate.h"
#import "SBMainDisplaySceneManagerObserver.h"

@class NSMutableDictionary, NSString, SBBarSwipeAffordanceView, SBHomeGestureParticipant, UIWindow;

@interface SBSheetController : NSObject <SBMainDisplaySceneManagerObserver, SBHomeGestureParticipantDelegate, SBBarSwipeAffordanceObserver>
{
    NSMutableDictionary *_appToSheetMap;
    UIWindow *_presentationWindow;
    SBHomeGestureParticipant *_homeGestureParticipant;
    SBBarSwipeAffordanceView *_barSwipeView;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg1;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (void)didReceiveHomeSwipeForSheetView:(id)arg1;
- (void)sceneManager:(id)arg1 didRemoveExternalForegroundApplicationSceneHandle:(id)arg2;
- (id)_systemGestureManager;
- (id)_arbiter;
- (id)_sheetViews;
- (void)_updateBarSwipeView;
- (void)_updateHomeGestureParticpantWithSheetCountAdjustment:(long long)arg1;
- (void)_updateSpringBoardStateAndNotify;
- (void)_tearDownSheet:(id)arg1;
- (void)_dismissSheetsForApplication:(id)arg1 reason:(id)arg2;
- (void)_applicationDidExit:(id)arg1;
- (_Bool)sheetWantsProgress;
- (id)applicationForTopSheet;
- (_Bool)dismissAllSheets;
- (_Bool)isShowingSheetsForApplication:(id)arg1;
- (_Bool)isShowingSheets;
- (void)dismissRemoteViewIdentifier:(id)arg1 forApplication:(id)arg2 animated:(_Bool)arg3;
- (_Bool)presentRemoteViewIdentifier:(id)arg1 asSheetForApplication:(id)arg2 requireTopApplication:(_Bool)arg3 animated:(_Bool)arg4;
- (void)dismissSheetView:(id)arg1 animated:(_Bool)arg2;
- (void)presentSheetView:(id)arg1 animated:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

