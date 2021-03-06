//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/HKSample.h>

@class HKCategoryType;

@interface HKCategorySample : HKSample
{
    int _value;
}

+ (BOOL)supportsSecureCoding;
+ (id)categorySampleWithType:(id)arg1 value:(int)arg2 startDate:(id)arg3 endDate:(id)arg4;
+ (id)categorySampleWithType:(id)arg1 value:(int)arg2 startDate:(id)arg3 endDate:(id)arg4 metadata:(id)arg5;
- (void)_setValue:(int)arg1;
@property(readonly) int value;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_valueDescription;
- (id)_validateConfiguration;
@property(readonly) HKCategoryType *categoryType;
- (id)init;

@end

