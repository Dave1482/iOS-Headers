/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreFoundation/NSMutableOrderedSet.h>

@class NSMutableArray;

@interface __NSOrderedSetM : NSMutableOrderedSet
{
    unsigned int _used;
    struct __CFBasicHash *_set;
    NSMutableArray *_array;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)__new:(const id *)arg1:(unsigned int)arg2;
- (void)finalize;
- (void)dealloc;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_mutate;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfObject:(id)arg1;
- (unsigned int)count;

@end

