//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, SKUIIndexBarControlController;

@protocol SKUIIndexBarControlControllerDelegate <NSObject>

@optional
- (void)indexBarControlControllerDidSelectBeyondTop:(SKUIIndexBarControlController *)arg1;
- (void)indexBarControlControllerDidSelectBeyondBottom:(SKUIIndexBarControlController *)arg1;
- (void)indexBarControlController:(SKUIIndexBarControlController *)arg1 didSelectEntryDescriptorAtIndexPath:(NSIndexPath *)arg2;
@end

