/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSObject<OS_dispatch_queue>, NSTimer, SBKAsynchronousTask, SBKPlaybackPositionSyncRequestHandler;

@interface SBKUniversalPlaybackPositionStore : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isActive;
    _Bool _hasLocalChangesToSync;
    unsigned long long _automaticSynchronizeOptions;
    double _initialAutosyncInterval;
    double _pollingLimitFromBag;
    double _autorefreshInterval;
    _Bool _refreshTimerActive;
    id _accountsObserver;
    id _prefsObserver;
    id <SBKUniversalPlaybackPositionDataSource> _dataSource;
    SBKAsynchronousTask *_synchronizeTask;
    SBKAsynchronousTask *_lookupDomainVersionTask;
    SBKAsynchronousTask *_bagLookupTask;
    SBKPlaybackPositionSyncRequestHandler *_syncHandler;
    NSDate *_dateToFireNextTimer;
    NSTimer *_timer;
}

+ (id)keyValueStoreItemIdentifierForItem:(id)arg1;
@property(retain) NSTimer *timer; // @synthesize timer=_timer;
@property(retain) NSDate *dateToFireNextTimer; // @synthesize dateToFireNextTimer=_dateToFireNextTimer;
@property(retain) SBKPlaybackPositionSyncRequestHandler *syncHandler; // @synthesize syncHandler=_syncHandler;
@property(retain) SBKAsynchronousTask *bagLookupTask; // @synthesize bagLookupTask=_bagLookupTask;
@property(retain) SBKAsynchronousTask *lookupDomainVersionTask; // @synthesize lookupDomainVersionTask=_lookupDomainVersionTask;
@property(retain) SBKAsynchronousTask *synchronizeTask; // @synthesize synchronizeTask=_synchronizeTask;
@property(readonly) id <SBKUniversalPlaybackPositionDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_onQueueStartNewTimerWithTimeIntervalSinceNow:(double)arg1;
- (void)_onQueueStartNewTimer;
- (void)_onQueueStopTimer;
- (void)_onQueueResumeTimer;
- (void)_onQueueSuspendTimer;
- (void)_onQueueScheduleTimer;
- (_Bool)_timerIsStopped;
- (void)_timerFired:(id)arg1;
- (void)_updateAutorefreshRateSettingAndRestartTimer:(_Bool)arg1;
- (double)_effectiveAutorefreshRate;
- (void)_updateForStoreAccountsChange;
- (void)_onQueueLoadBagContextWithCompletionHandler:(id)arg1;
- (void)_updateSettingsFromLoadedBagContext:(id)arg1;
- (id)_accountForSyncing;
- (void)_onQueueSynchronizeImmediatelyWithCompletionHandler:(id)arg1;
- (void)_onQueueLoadRemoteDomainVersionWithCompletionBlock:(id)arg1;
- (void)_onQueueSynchronizeWithAutosynchronizeMask:(unsigned long long)arg1 withCompletionBlock:(id)arg2;
- (void)loadSyncBagContextWithCompletionBlock:(id)arg1;
- (void)loadRemoteDomainVersionWithCompletionBlock:(id)arg1;
- (void)checkForAvailabilityWithCompletionBlock:(id)arg1;
- (void)synchronizeImmediatelyWithCompletionBlock:(id)arg1;
- (void)synchronizeImmediatelyWithCompletionHandler:(id)arg1;
- (_Bool)automaticallySynchronizeOnBecomeActive;
- (_Bool)_automaticallySynchronizeOnBecomeActive;
- (void)setAutomaticallySynchronizeOnBecomeActive:(_Bool)arg1;
- (_Bool)automaticallySynchronizeLocalChangesOnResignActive;
- (_Bool)_automaticallySynchronizeLocalChangesOnResignActive;
- (void)setAutomaticallySynchronizeLocalChangesOnResignActive:(_Bool)arg1;
@property _Bool hasLocalChangesToSync;
@property unsigned long long automaticSynchronizeOptions;
- (void)resignActive;
- (void)becomeActive;
- (void)_onQueueUpdateTimerForAutomaticSyncOptionChanges;
- (void)_onQueueUpdateTimerForActiveChanges;
- (void)dealloc;
- (id)initWithInitialUpdateDelay:(double)arg1;
- (id)initWithInitialUpdateDelay:(double)arg1 isActive:(_Bool)arg2;
- (id)initWithInitialUpdateDelay:(double)arg1 allowAutorefresh:(_Bool)arg2 isActive:(_Bool)arg3;
- (id)init;
- (id)initWithDataSource:(id)arg1 automaticSynchronizeOptions:(unsigned long long)arg2 isActive:(_Bool)arg3;
- (void)deprecated_setDataSource:(id)arg1;

@end

