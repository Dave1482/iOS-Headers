/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLButtonElement : DOMHTMLElement
{
}

- (void)click;
- (void)setCustomValidity:(id)arg1;
- (BOOL)checkValidity;
@property(copy) NSString *accessKey;
- (id)labels;
- (id)validationMessage;
- (id)validity;
@property(readonly) BOOL willValidate;
@property(copy) NSString *value;
@property(readonly) NSString *type;
@property(copy) NSString *name;
- (void)setFormTarget:(id)arg1;
- (id)formTarget;
- (void)setFormNoValidate:(BOOL)arg1;
- (BOOL)formNoValidate;
- (void)setFormMethod:(id)arg1;
- (id)formMethod;
- (void)setFormEnctype:(id)arg1;
- (id)formEnctype;
- (void)setFormAction:(id)arg1;
- (id)formAction;
@property(readonly) DOMHTMLFormElement *form;
@property BOOL disabled;
@property BOOL autofocus;
- (int)structuralComplexityContribution;

@end
