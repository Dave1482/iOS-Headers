/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface CPLRUDictionaryNode : NSObject
{
    id _key;
    id _object;
    CPLRUDictionaryNode *next;
    CPLRUDictionaryNode *prev;
}

- (id)initWithKey:(id)arg1 object:(id)arg2;
- (void)dealloc;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(readonly, nonatomic) id key; // @synthesize key=_key;

@end
