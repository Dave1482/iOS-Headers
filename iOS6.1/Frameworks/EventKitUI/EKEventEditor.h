/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKCalendarItemEditor.h>

@class EKEvent;

@interface EKEventEditor : EKCalendarItemEditor
{
    BOOL _showAttachments;
}

@property(nonatomic) BOOL showAttachments; // @synthesize showAttachments=_showAttachments;
- (id)_viewForSheet;
- (BOOL)_canDetachSingleOccurrence;
- (void)_revertEvent;
- (void)_copyEventForPossibleRevert;
- (unsigned int)entityType;
- (id)notificationNamesForLocaleChange;
- (id)defaultAlertTitle;
- (void)setupDeleteButton;
- (id)_nameForDeleteButton;
- (id)defaultTitleForCalendarItem;
- (id)preferredTitle;
- (BOOL)saveCalendarItemWithSpan:(int)arg1 error:(id *)arg2;
- (id)_editItems;
- (void)refreshStartAndEndDates;
@property(retain, nonatomic) EKEvent *event;
- (void)loadView;

@end
