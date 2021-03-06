//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPContainedObject.h>

#import "KNInspectableAnimation.h"

@class KNAnimationInfo, KNAnimationPluginMenu, KNTransitionAttributes, NSArray, NSSet, NSString, TSUColor;

__attribute__((visibility("hidden")))
@interface KNTransition : TSPContainedObject <KNInspectableAnimation>
{
    KNTransitionAttributes *mAttributes;
}

+ (unsigned int)directionTypeForEffect:(id)arg1;
+ (BOOL)hasDirectionOptionForEffect:(id)arg1;
@property(readonly, nonatomic) BOOL isMagicMove;
@property(readonly, nonatomic) BOOL canEditAnimations;
@property(readonly, nonatomic) NSSet *inspectableAttributes;
@property(readonly, nonatomic) int customTextDelivery;
@property(readonly, nonatomic) BOOL customMagicMoveFadeUnmatchedObjects;
@property(readonly, nonatomic) int customTimingCurve;
@property(readonly, nonatomic) BOOL customMotionBlur;
@property(readonly, nonatomic) BOOL customBounce;
@property(readonly, nonatomic) int customMosaicType;
@property(readonly, nonatomic) int customMosaicSize;
@property(readonly, nonatomic) float customTwist;
@property(readonly, nonatomic) TSUColor *color;
@property(readonly, nonatomic) double delay;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) BOOL hasAutomaticTrigger;
- (id)description;
@property(readonly, nonatomic) BOOL supportsBounce;
@property(readonly, nonatomic) BOOL supportsDuration;
@property(readonly, nonatomic) BOOL supportsDirection;
@property(readonly, nonatomic) unsigned int direction;
@property(readonly, nonatomic) unsigned int directionType;
@property(readonly, nonatomic) KNAnimationPluginMenu *directionMenu;
@property(readonly, nonatomic) NSArray *localizedEventTriggerNames;
@property(readonly, nonatomic) KNAnimationInfo *animationInfo;
@property(readonly, nonatomic) NSString *effect;
@property(copy, nonatomic) KNTransitionAttributes *attributes;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOwner:(id)arg1 attributes:(id)arg2;
- (id)initWithOwner:(id)arg1;
- (void)saveToArchive:(struct TransitionArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct TransitionArchive *)arg1 unarchiver:(id)arg2 owner:(id)arg3;
- (unsigned long long)p_keynoteVersionFromUnarchiver:(id)arg1;

@end

