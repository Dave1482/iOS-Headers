/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKSectionArrayDataSource.h>

@class GKGame, GKSignInButtonSection, GKSignInHeaderSection, GKSignInInputSection, GKTextField;

@interface GKSignInDataSource : GKSectionArrayDataSource
{
    GKTextField *_usernameField;
    GKTextField *_passwordField;
    GKGame *_game;
    GKSignInHeaderSection *_signInHeaderSection;
    GKSignInInputSection *_signInInputSection;
    GKSignInButtonSection *_signInButtonSection;
}

@property(retain, nonatomic) GKSignInButtonSection *signInButtonSection; // @synthesize signInButtonSection=_signInButtonSection;
@property(retain, nonatomic) GKSignInInputSection *signInInputSection; // @synthesize signInInputSection=_signInInputSection;
@property(retain, nonatomic) GKSignInHeaderSection *signInHeaderSection; // @synthesize signInHeaderSection=_signInHeaderSection;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(retain, nonatomic) GKTextField *passwordField; // @synthesize passwordField=_passwordField;
@property(retain, nonatomic) GKTextField *usernameField; // @synthesize usernameField=_usernameField;
- (id)tableView:(id)arg1 sectionAtIndex:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)description;
- (void)updatePlaceholderTextForEnvironment;
- (void)prepareSections;
- (void)dealloc;

@end

