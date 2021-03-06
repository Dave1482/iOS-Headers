/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface NSObject (AXPrivCategory)
+ (id)_accessibilityTextChecker;
- (void)_setAccessibilityIsIgnored:(BOOL)arg1;
- (BOOL)_accessibilityWindowVisible;
- (void)_setAccessibilityWindowVisible:(BOOL)arg1;
- (BOOL)_accessibilityIsMainWindow;
- (BOOL)_accessibilityIsFirstElementForFocus;
- (void)_setAccessibilityIsMainWindow:(BOOL)arg1;
- (void)_setAccessibilityServesAsContainingParentForOrdering:(BOOL)arg1;
- (BOOL)_accessibilityServesAsContainingParentForOrdering;
- (BOOL)_accessibilityIsNotFirstElement;
- (void)_setAccessibilityIsNotFirstElement:(BOOL)arg1;
- (BOOL)_accessibilityServesAsFirstElement;
- (void)_setAccessibilityServesAsFirstElement:(BOOL)arg1;
- (void)setIsAccessibilityScrollAncestor:(BOOL)arg1;
- (void)setIsAccessibilityWindow:(BOOL)arg1;
- (void)setAccessibilitySize:(struct CGSize)arg1;
- (id)accessibilityUserDefinedSize;
- (id)accessibilityIdentification;
- (id)accessibilityUserDefinedIsIgnored;
- (id)accessibilityUserDefinedServesAsContainingParentForOrdering;
- (id)accessibilityUserDefinedNotFirstElement;
- (id)accessibilityUserDefinedServesAsFirstElement;
- (id)accessibilityUserDefinedIsMainWindow;
- (id)accessibilityUserDefinedWindowVisible;
- (id)isAccessibilityUserDefinedScrollAncestor;
- (id)isAccessibilityUserDefinedWindow;
- (void)_accessibilityUnregister;
- (void)__accessibilityUnregister:(id)arg1;
- (BOOL)_accessibilityShouldReleaseAfterUnregistration;
- (void)accessibilityElementDidLoseFocus;
- (void)accessibilityElementDidBecomeFocused;
- (BOOL)accessibilityElementIsFocused;
- (id)accessibilityURL;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_axDebugTraits;
- (id)_accessibilityScrollStatus;
- (void)accessibilitySetIdentification:(id)arg1;
- (id)_accessibilityAncestorIsAccessibilityElementsHidden;
- (id)_accessibilityAncestorIsKindOf:(Class)arg1;
- (id)_axSuperviews;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_accessibilityBaseHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_accessibilityFuzzyHitTestElements;
- (id)_accessibilityHitTestSupplementaryViews:(id)arg1 point:(struct CGPoint)arg2 withEvent:(id)arg3;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)_accessibilityTouchContainer;
- (BOOL)_accessibilityIsTouchContainer;
- (void)_accessibilityAddTrait:(unsigned long long)arg1;
- (void)_accessibilityRemoveTrait:(unsigned long long)arg1;
- (id)_accessibilitySupplementaryFooterViews;
- (id)_accessibilitySupplementaryHeaderViews;
- (id)accessibilityAttributeValue:(int)arg1 forParameter:(id)arg2;
- (void)_accessibilitySetValue:(id)arg1 forAttribute:(int)arg2;
- (id)accessibilityAttributeValue:(int)arg1;
- (void)_accessibilityHandleATFocused:(BOOL)arg1;
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)arg1 originalElement:(id)arg2;
- (id)_accessibilityNextElementsWithCount:(unsigned long)arg1 originalElement:(id)arg2;
- (id)_accessibilityContainerInDirection:(BOOL)arg1 originalElement:(id)arg2;
- (id)_accessibilityString:(id)arg1 withSpeechHint:(id)arg2;
- (id)_accessibilityParentView;
- (BOOL)_accessibilityUsesSpecialKeyboardDismiss;
- (id)_accessibilityApplication;
- (BOOL)_accessibilityIsDescendantOfElement:(id)arg1;
- (id)accessibilityViewWithIdentifier:(id)arg1;
- (id)_accessibilityUnignoredDescendant;
- (BOOL)_accessibilityHasDescendantOfType:(Class)arg1;
- (id)_accessibilityDescendantOfType:(Class)arg1;
- (struct CGPoint)_accessibilityConvertPointToViewSpace:(struct CGPoint)arg1;
- (id)_accessibilityFindDescendant:(id)arg1;
- (struct CGRect)_accessibilityClassicModeFrame:(struct CGRect)arg1;
- (void)_accessibilityIgnoreNextNotification:(unsigned int)arg1;
- (BOOL)_accessibilityIsFrameOutOfBounds;
- (id)_accessibilityScrollParent;
- (int)accessibilityCompareGeometry:(id)arg1;
- (struct CGRect)_accessibilityCompareFrameForScrollParent:(id)arg1 frame:(struct CGRect)arg2;
- (BOOL)_accessibilityOnlyComparesByXAxis;
- (float)_accessibilityAllowedGeometryOverlap;
- (BOOL)_accessibilityUsesScrollParentForOrdering;
- (id)_accessibilityContainingParentForOrdering;
- (BOOL)_accessibilityHasOrderedChildren;
- (BOOL)_accessibilityAlwaysOrderedFirst;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (id)accessibilityContainerElements;
- (void)_accessibilityResetContainerElements;
- (BOOL)accessibilityPerformAction:(int)arg1 withValue:(id)arg2;
- (void)accessibilityActivate;
- (BOOL)_accessibilityTextOperationAction:(id)arg1;
- (BOOL)accessibilityEditOperationAction:(id)arg1;
- (BOOL)_accessibilityHasTextOperations;
- (void)_accessibilitySetCurrentGesture:(id)arg1;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_accessibilityTextOperations;
- (id)accessibilityMenuActions;
- (void)_accessibilityCut;
- (void)_accessibilityReplace;
- (void)_accessibilityDelete;
- (void)_accessibilitySelect;
- (void)_accessibilitySelectAll;
- (void)_accessibilityPaste;
- (BOOL)_accessibilityPerformEscape;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint)arg1;
- (void)accessibilityZoomInAtPoint:(struct CGPoint)arg1;
- (BOOL)_accessibilityIsVisible;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)_accessibilityAttributedValueForRange:(struct _NSRange *)arg1;
- (void)_accessibilityAddMispellingsToAttributedString:(id)arg1;
- (id)_accessibilityTextChecker;
- (void)_accessibilitySetValue:(id)arg1;
- (id)_accessibilityValueForRange:(struct _NSRange *)arg1;
- (BOOL)__accessibilityReadAllOnFocus;
- (BOOL)_accessibilityIsAwayAlertElementNew;
- (BOOL)_accessibilityIsAwayAlertElement;
- (BOOL)_accessibilityReadAllOnFocus;
- (struct CGPoint)__accessibilityVisibleScrollArea:(BOOL)arg1;
- (BOOL)_accessibilityShouldUseViewHierarchyForFindingScrollParent;
- (id)_accessibilityMarkerLineEndsForMarkers:(id)arg1;
- (id)_accessibilityMarkersForRange:(struct _NSRange)arg1;
- (id)_accessibilityMarkersForPoints:(id)arg1;
- (id)_accessibilityInputIdentifierForKeyboard;
- (id)accessibilityLabelForRange:(struct _NSRange *)arg1;
- (BOOL)_accessibilityObscuresScreen;
- (void)_setAccessibilityObscuresScreen:(BOOL)arg1;
- (void)_accessibilitySetAnimationsInProgress:(BOOL)arg1;
- (BOOL)_accessibilityAnimationsInProgress;
- (BOOL)_accessibilityCameraIrisOpen;
- (void)_accessibilitySetCameraIrisOpen:(BOOL)arg1;
- (BOOL)_accessibilityCanDismissPopoverController:(id)arg1;
- (BOOL)_accessibilityIsInAppSwitcher;
- (struct _NSRange)accessibilityColumnRange;
- (struct _NSRange)accessibilityRowRange;
- (id)accessibilityElementForRow:(int)arg1 andColumn:(int)arg2;
- (id)accessibilityTitleElement;
- (id)_accessibilityHeaderElement;
- (id)accessibilityHeaderElements;
- (BOOL)_accessibilityReadAllContinuesWithScroll;
- (id)_accessibilityKeyboardKeyForString:(id)arg1;
- (void)_accessibilitySetCurrentWordInPageContext:(id)arg1;
- (id)accessibilityPlaceholderValue;
- (int)_accessibilityPageControlIndex;
- (int)_accessibilityPageControlCount;
- (BOOL)_accessibilityIsTitleElement;
- (BOOL)_accessibilityIsLastSiblingForTrait:(unsigned long long)arg1;
- (BOOL)_accessibilityIsFirstSiblingForTrait:(unsigned long long)arg1;
- (BOOL)_accessibilityIsLastSibling;
- (BOOL)_accessibilityIsFirstSibling;
- (id)_accessibilityPageContent;
- (struct CGPoint)_accessibilityMaxScrubberPosition;
- (struct CGPoint)_accessibilityMinScrubberPosition;
- (float)_accessibilityMaxValue;
- (float)_accessibilityMinValue;
- (struct _NSRange)_accessibilityLineRangeForPosition:(unsigned int)arg1;
- (id)_accessibilityObjectForTextMarker:(id)arg1;
- (id)accessibilityArrayOfTextForTextMarkers:(id)arg1;
- (id)accessibilityStringForTextMarkers:(id)arg1;
- (struct CGRect)accessibilityBoundsForTextMarkers:(id)arg1;
- (BOOL)accessibilityPerformCustomAction:(int)arg1;
- (void)_accessibilityChangeToKeyplane:(id)arg1;
- (struct _NSRange)_accessibilitySelectedNSRangeForObject;
- (id)_accessibilityTextMarkerRangeForSelection;
- (struct _NSRange)_accessibilityRangeForTextMarker:(id)arg1;
- (id)_accessibilityPageTextMarkerRange;
- (id)_accessibilityTextMarkerRange;
- (id)_accessibilityPreviousMarker:(id)arg1;
- (id)_accessibilityNextMarker:(id)arg1;
- (id)_accessibiltyAvailableKeyplanes;
- (id)_accessibilityLineEndMarker:(id)arg1;
- (id)_accessibilityMarkerForPoint:(struct CGPoint)arg1;
- (id)_accessibilityLineStartMarker:(id)arg1;
- (struct CGRect)_accessibilityBoundsForRange:(struct _NSRange)arg1;
- (struct _NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1;
- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint)arg1;
- (int)_accessibilityLineStartPosition;
- (int)_accessibilityLineEndPosition;
- (BOOL)accessibilityStartStopToggle;
- (id)_accessibilityResponderElement;
- (BOOL)_accessibilityServesAsFirstResponder;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (void)_accessibilityScrollToFrame:(struct CGRect)arg1 forView:(id)arg2;
- (BOOL)accessibilityRequired;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)_accessibilityIncreaseSelection:(id)arg1;
- (BOOL)_accessibilityBackingElementIsValid;
- (int)_accessibilityIndexForPickerString:(id)arg1;
- (void)_accessibilityDecreaseSelection:(id)arg1;
- (id)accessibilityLinkedElement;
- (id)_accessibilityUserTestingVisibleSections;
- (void)_accessibilitySwitchOrderedChildrenFrom:(id)arg1;
- (id)_accessibilityUserTestingVisibleCells;
- (BOOL)_accessibilityBookShowsDualPages;
- (id)_accessibilityAutomaticIdentifier;
- (struct CGRect)_accessibilityGesturePracticeRegion;
- (BOOL)_accessibilityWebSearchResultsActive;
- (BOOL)accessibilityIsComboBox;
- (void)_accessibilityFindSearchResult:(BOOL)arg1 withString:(id)arg2;
- (BOOL)_accessibilityIsInTableCell;
- (BOOL)_accessibilityIsTableCell;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint)arg1;
- (struct CGRect)accessibilityFrameForLineNumber:(int)arg1;
- (id)accessibilityContentForLineNumber:(int)arg1;
- (int)accessibilityLineNumberForPoint:(struct CGPoint)arg1;
- (id)accessibilityFlowToElements;
- (id)accessibilityPageContent;
- (struct CGPoint)_accessibilityVisibleScrollArea:(BOOL)arg1;
- (id)_accessibilityTableViewCellWithRowIndex:(int)arg1 andColumn:(int)arg2;
- (id)accessibilityCustomRotorItemsAtIndex:(int)arg1;
- (id)accessibilityCustomActions;
- (id)accessibilityCustomRotorTitles;
- (BOOL)_accessibilityShouldAvoidAnnouncing;
- (id)_accessibilityAncestorForSiblingsWithTraits:(unsigned long long)arg1;
- (id)accessibilitySpeechHint;
- (id)_accessibilityDOMAttributes;
- (void)_accessibilityMoveSelectionToMarker:(id)arg1;
- (id)_accessibilityTextMarkerForPosition:(int)arg1;
@end

