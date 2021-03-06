/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSXPCCoder.h>

@class NSMutableArray, NSObject<OS_xpc_object>, NSXPCConnection;

@interface NSXPCEncoder : NSXPCCoder
{
    NSMutableArray *_containers;
    NSObject<OS_xpc_object> *_oolObjects;
    NSXPCConnection *_connection;
    struct __CFDictionary *_replacedObjects;
    struct __CFDictionary *_replacedByDelegateObjects;
    id <NSXPCEncoderDelegate> _delegate;
    BOOL _askForReplacement;
}

@property id <NSXPCEncoderDelegate> delegate; // @synthesize delegate=_delegate;
@property NSXPCConnection *_connection; // @synthesize _connection;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeXPCObject:(id)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned int)arg2 forKey:(id)arg3;
- (void)encodeInteger:(int)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)_encodeArrayOfObjects:(id)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeInvocation:(id)arg1;
- (void)encodeObject:(id)arg1;
- (void)encodeDataObject:(id)arg1;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;
- (void)_addObject:(id)arg1 forKey:(id)arg2;
- (void)_pushContainerForKey:(id)arg1;
- (BOOL)allowsKeyedCoding;
- (id)_createRootXPCObject;
- (id)debugDescription;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)_encodeXPCObject:(id)arg1;
- (id)_topContainer;
- (void)_pushContainer:(id)arg1;
- (void)_popContainer;

@end

