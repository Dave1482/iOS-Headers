/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIGiftStepViewController.h>

@class SKUIFocusedTouchGestureRecognizer, SKUIGiftConfirmView, SKUIGiftPurchaseRequest;

@interface SKUIGiftConfirmViewController : SKUIGiftStepViewController
{
    SKUIGiftConfirmView *_confirmView;
    BOOL _isShowingConfirmation;
    SKUIGiftPurchaseRequest *_purchaseRequest;
    SKUIFocusedTouchGestureRecognizer *_touchRecognizer;
}

- (void).cxx_destruct;
- (void)_showSuccessPage;
- (void)_setShowingConfirmation:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_removeCancelGestureRecognizer;
- (void)_purchaseGift;
- (void)_finishPurchaseWithResult:(BOOL)arg1 errorMessage:(id)arg2;
- (void)_termsButtonAction:(id)arg1;
- (void)_cancelBuyConfirmation:(id)arg1;
- (void)_buyButtonAction:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;

@end
