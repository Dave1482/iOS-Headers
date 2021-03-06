//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WKPreferences : NSObject
{
    struct RefPtr<WebKit::WebPreferences> _preferences;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) BOOL javaScriptCanOpenWindowsAutomatically;
@property(nonatomic) BOOL javaScriptEnabled;
@property(nonatomic) float minimumFontSize;
- (id)init;
@property(nonatomic, setter=_setTiledScrollingIndicatorVisible:) BOOL _tiledScrollingIndicatorVisible;
@property(nonatomic, setter=_setCompositingRepaintCountersVisible:) BOOL _compositingRepaintCountersVisible;
@property(nonatomic, setter=_setCompositingBordersVisible:) BOOL _compositingBordersVisible;
@property(nonatomic, setter=_setOfflineApplicationCacheIsEnabled:) BOOL _offlineApplicationCacheIsEnabled;
@property(nonatomic, setter=_setStorageBlockingPolicy:) int _storageBlockingPolicy;
@property(nonatomic, setter=_setTelephoneNumberDetectionIsEnabled:) BOOL _telephoneNumberDetectionIsEnabled;

@end

