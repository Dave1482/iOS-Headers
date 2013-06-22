/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface OADOle : NSObject
{
    BOOL mIconic;
    NSString *mCLSID;
    NSString *mAnsiUserType;
    NSString *mAnsiClipboardFormatName;
    unsigned int mWinClipboardFormat;
    NSString *mMacClipboardFormat;
    NSString *mAnsiProgID;
    NSString *mUnicodeUserType;
    NSString *mUnicodeClipboardFormatName;
    NSString *mUnicodeProgID;
    id mObject;
}

+ (BOOL)isProgIDSupported:(id)arg1;
+ (BOOL)isCLSIDSupported:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)iconic;
- (void)setIconic:(BOOL)arg1;
- (id)CLSID;
- (void)setCLSID:(id)arg1;
- (id)ansiUserType;
- (void)setAnsiUserType:(id)arg1;
- (id)ansiClipboardFormatName;
- (void)setAnsiClipboardFormatName:(id)arg1;
- (unsigned long)winClipboardFormat;
- (void)setWinClipboardFormat:(unsigned long)arg1;
- (id)macClipboardFormat;
- (void)setMacClipboardFormat:(id)arg1;
- (id)ansiProgID;
- (void)setAnsiProgID:(id)arg1;
- (id)unicodeUserType;
- (void)setUnicodeUserType:(id)arg1;
- (id)unicodeClipboardFormatName;
- (void)setUnicodeClipboardFormatName:(id)arg1;
- (id)unicodeProgID;
- (void)setUnicodeProgID:(id)arg1;
- (id)object;
- (void)setObject:(id)arg1;

@end
