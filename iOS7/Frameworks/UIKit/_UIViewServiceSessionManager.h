/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableArray, NSXPCListener;

@interface _UIViewServiceSessionManager : NSObject <NSXPCListenerDelegate>
{
    int _lock;
    NSXPCListener *_listener;
    NSMutableArray *_sessions;
    int _connectionNotificationToken;
}

+ (BOOL)hasActiveSessions;
+ (void)startViewServiceSessionManager;
+ (BOOL)_shouldUseXPCObjects;
- (void)_startOrStopSystemsForBackgroundRunning;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (BOOL)_hasActiveSessions;
- (void)_registerSessionForDefaultDeputies:(id)arg1;
- (void)_startListener;
- (id)_init;
- (void)dealloc;
- (id)init;

@end
