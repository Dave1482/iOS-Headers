/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSKeyValueObservance, NSKeyValueObservationInfo, NSKeyValueProperty;

// Not exported
@interface NSKeyValueShareableObservationInfoKey : NSObject
{
    _Bool _addingNotRemoving;
    NSKeyValueObservationInfo *_baseObservationInfo;
    NSObject *_additionObserver;
    NSKeyValueProperty *_additionProperty;
    unsigned long long _additionOptions;
    void *_additionContext;
    NSObject *_additionOriginalObservable;
    NSKeyValueObservance *_removalObservance;
    unsigned long long _removalObservanceIndex;
}

@end

