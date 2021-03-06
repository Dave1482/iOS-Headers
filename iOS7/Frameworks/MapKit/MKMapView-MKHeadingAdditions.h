/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MapKit/MKMapView.h>

@interface MKMapView (MKHeadingAdditions)
- (void)locationManagerFailedToUpdateHeading:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedHeading:(id)arg1;
- (void)_considerMovingToThrottledHeading;
- (void)_updateHeading:(id)arg1 rotationType:(int)arg2 animated:(_Bool)arg3;
- (_Bool)_updateRotationSupported;
- (_Bool)_rotationPossible;
- (void)_stopTrackingHeading;
- (void)_startTrackingHeading;
- (void)enableMapRotationIfNeeded;
- (void)disableMapRotation:(_Bool)arg1;
- (void)disableHeadingTracking:(_Bool)arg1;
- (void)setHeadingTrackingEnabled:(_Bool)arg1;
- (_Bool)isHeadingTrackingEnabled;
- (void)resumeUserHeadingUpdates;
- (void)pauseUserHeadingUpdates;
- (void)setShouldRotateForHeading:(_Bool)arg1;
- (_Bool)shouldRotateForHeading;
- (struct CGRect)contentBounds;
@end

