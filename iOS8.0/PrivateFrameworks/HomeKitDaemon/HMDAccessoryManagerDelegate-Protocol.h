//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMDAccessory, HMDAccessoryManager, NSArray;

@protocol HMDAccessoryManagerDelegate <NSObject>

@optional
- (void)accessoryManager:(HMDAccessoryManager *)arg1 didRemovePairedAccessories:(NSArray *)arg2 fromBridgeAccessory:(HMDAccessory *)arg3;
- (void)accessoryManager:(HMDAccessoryManager *)arg1 didAddPairedAccessories:(NSArray *)arg2 toBridgeAccessory:(HMDAccessory *)arg3;
- (void)accessoryManager:(HMDAccessoryManager *)arg1 didRemoveNewAccessory:(HMDAccessory *)arg2;
- (void)accessoryManager:(HMDAccessoryManager *)arg1 didFindNewAccessory:(HMDAccessory *)arg2;
@end

