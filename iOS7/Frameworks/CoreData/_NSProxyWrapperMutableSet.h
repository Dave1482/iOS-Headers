/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/_NSNotifyingWrapperMutableSet.h>

@class _NSFaultingMutableSetMutationMethods;

// Not exported
@interface _NSProxyWrapperMutableSet : _NSNotifyingWrapperMutableSet
{
    _NSFaultingMutableSetMutationMethods *_mutationMethods;
}

- (void)unionSet:(id)arg1;
- (void)setSet:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)removeAllObjects;
- (void)minusSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObject:(id)arg1;
- (id)initWithContainer:(id)arg1 key:(id)arg2 mutableSet:(id)arg3 mutationMethods:(id)arg4;
- (void)dealloc;

@end

