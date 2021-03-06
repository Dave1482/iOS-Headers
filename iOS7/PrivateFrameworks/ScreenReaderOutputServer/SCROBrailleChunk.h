/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSMutableAttributedString, NSString;

@interface SCROBrailleChunk : NSObject <NSCopying>
{
    NSString *_text;
    NSString *_language;
    int _contractionMode;
    _Bool _showEightDot;
    _Bool _isFocused;
    _Bool _isTechnical;
    _Bool _hasTextSelection;
    struct _NSRange _textSelection;
    long long _token;
    _Bool _showDotsSevenAndEight;
    NSMutableAttributedString *_brailleString;
    struct _NSRange _brailleSelection;
}

+ (void)initialize;
@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
- (id)brailleWithIBeamLocation:(long long *)arg1 selection:(struct _NSRange *)arg2;
- (long long)locationForIndex:(long long)arg1;
- (long long)token;
- (_Bool)isFocusedOrSelected;
- (_Bool)hasSelection;
- (_Bool)focused;
- (void)_translateAsLiteraryTextWithPrimaryTable:(_Bool)arg1;
- (void)_translateAsTechnicalTextWithPrimaryTable:(_Bool)arg1;
- (void)translate;
- (id)_tableIdentifierForLanguage:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithText:(id)arg1 language:(id)arg2 selection:(struct _NSRange *)arg3 token:(long long)arg4 focused:(_Bool)arg5 contractionMode:(int)arg6 showEightDot:(_Bool)arg7 showDotsSevenAndEight:(_Bool)arg8 technical:(_Bool)arg9;
- (id)initWithText:(id)arg1 language:(id)arg2 selection:(struct _NSRange *)arg3 token:(long long)arg4 focused:(_Bool)arg5 contractionMode:(int)arg6 showEightDot:(_Bool)arg7 showDotsSevenAndEight:(_Bool)arg8;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

