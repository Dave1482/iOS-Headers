/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"
#import "NSTextLayoutOrientationProvider-Protocol.h"

@protocol NSTextContainerView <NSObject, NSTextLayoutOrientationProvider>

@optional
- (void)updateInsertionPointStateAndRestartTimer:(_Bool)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 avoidAdditionalLayout:(_Bool)arg2;
- (struct CGRect)desiredBoundsForTextContainerSize:(struct CGSize)arg1;
- (struct CGRect)textContainerFrameForBounds:(struct CGRect)arg1;
- (id)linkTextAttributes;
@end

