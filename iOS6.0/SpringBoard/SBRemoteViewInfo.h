/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, SBApplication, SBProxyRemoteView;

@interface SBRemoteViewInfo : NSObject
{
    NSString *_remoteViewIdentifier;
    SBProxyRemoteView *_proxyRemoteView;
    unsigned int _contextID;
    SBApplication *_application;
    struct CGSize _viewSize;
}

@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(retain, nonatomic) SBApplication *application; // @synthesize application=_application;
@property(retain, nonatomic) SBProxyRemoteView *proxyRemoteView; // @synthesize proxyRemoteView=_proxyRemoteView;
@property(nonatomic) unsigned int contextID; // @synthesize contextID=_contextID;
@property(retain, nonatomic) NSString *remoteViewIdentifier; // @synthesize remoteViewIdentifier=_remoteViewIdentifier;
- (void)dealloc;

@end

