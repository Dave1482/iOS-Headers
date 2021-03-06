//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface UIFont : NSObject <NSCopying>
{
}

+ (id)classFallbacksForKeyedArchiver;
+ (id)ib_preferredFontForTextStyle:(id)arg1;
+ (id)defaultFontForTextStyle:(id)arg1;
+ (id)preferredFontForUsage:(id)arg1 contentSizeCategoryName:(id)arg2;
+ (id)preferredFontForUsage:(id)arg1;
+ (id)preferredFontForTextStyle:(id)arg1;
+ (float)systemFontSize;
+ (float)smallSystemFontSize;
+ (float)buttonFontSize;
+ (float)labelFontSize;
+ (id)_systemFontsOfSize:(float)arg1 traits:(int)arg2;
+ (id)fontWithDescriptor:(id)arg1 size:(float)arg2;
+ (id)_ultraLightSystemFontOfSize:(float)arg1;
+ (id)_lightSystemFontOfSize:(float)arg1;
+ (id)_thinSystemFontOfSize:(float)arg1;
+ (id)italicSystemFontOfSize:(float)arg1;
+ (id)boldSystemFontOfSize:(float)arg1;
+ (id)_opticalBoldSystemFontOfSize:(float)arg1;
+ (id)_opticalSystemFontOfSize:(float)arg1;
+ (id)systemFontOfSize:(float)arg1;
+ (id)systemFontOfSize:(float)arg1 traits:(int)arg2;
+ (id)fontNamesForFamilyName:(id)arg1;
+ (id)familyNames;
+ (id)fontWithMarkupDescription:(id)arg1;
+ (id)fontWithFamilyName:(id)arg1 traits:(int)arg2 size:(float)arg3;
+ (id)fontWithName:(id)arg1 size:(float)arg2;
+ (id)fontWithName:(id)arg1 size:(float)arg2 traits:(int)arg3;
+ (void)_evictAllItemsFromFontAndFontDescriptorCaches;
+ (id)_sharedFontCache;
+ (id)_sharedZeroPointFont;
+ (void)initialize;
+ (id)userFontOfSize:(float)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)markupDescription;
- (id)familyNameForCSSFontFamilyValue;
- (BOOL)isFixedPitch;
- (BOOL)isIBTextStyleFont;
- (float)_leading;
@property(readonly, nonatomic) float xHeight;
@property(readonly, nonatomic) float capHeight;
@property(readonly, nonatomic) float leading;
@property(readonly, nonatomic) float lineHeight;
@property(readonly, nonatomic) float descender;
@property(readonly, nonatomic) float ascender;
- (BOOL)isSystemFont;
@property(readonly, nonatomic) float pointSize;
- (int)traits;
@property(readonly, nonatomic) NSString *fontName;
@property(readonly, nonatomic) NSString *familyName;
- (id)fontWithSize:(float)arg1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_fontScaledByScaleFactor:(float)arg1;
- (id)initWithMarkupDescription:(id)arg1;
- (id)initWithFamilyName:(id)arg1 traits:(int)arg2 size:(float)arg3;
- (id)initWithName:(id)arg1 size:(float)arg2;
- (id)_alternateSystemFonts;
- (id)fontDescriptor;
- (unsigned int)mostCompatibleStringEncoding;
- (float)_defaultLineHeightForUILayout;
- (id)lastResortFont;
- (id)bestMatchingFontForCharacters:(const unsigned short *)arg1 length:(unsigned int)arg2 attributes:(id)arg3 actualCoveredLength:(unsigned int *)arg4;
- (void)getBoundingRects:(struct CGRect *)arg1 forCGGlyphs:(const unsigned short *)arg2 count:(unsigned int)arg3;
- (unsigned int)_defaultGlyphForChar:(unsigned short)arg1;
- (_Bool)_getLatin1GlyphMapping:(const unsigned short **)arg1 andAdvanceMapping:(const struct CGSize **)arg2;
- (id)_familyName;
- (unsigned int)getCaretPositions:(float *)arg1 forGlyph:(unsigned int)arg2 maximumLength:(unsigned int)arg3;
- (unsigned int)hyphenGlyphForLocale:(id)arg1;
- (id)screenFontWithRenderingMode:(unsigned int)arg1;
- (struct CGSize)advancementForGlyph:(unsigned short)arg1;
- (float)underlineThickness;
- (struct CGRect)boundingRectForFont;
- (struct CGFont *)_backingCGSFont;
- (void)getAdvancements:(struct CGSize *)arg1 forCGGlyphs:(const unsigned short *)arg2 count:(unsigned int)arg3;
- (float)_totalAdvancementForNativeGlyphs:(const unsigned short *)arg1 count:(long)arg2;
- (unsigned int)renderingMode;
- (id)_kernOverride;
- (void)setInContext:(struct CGContext *)arg1;
- (struct CGAffineTransform)_textMatrixTransformForContext:(struct CGContext *)arg1;
- (float)_ascenderDeltaForBehavior:(int)arg1;
- (float)_baseLineHeightForFont:(BOOL)arg1;
- (BOOL)_isHiraginoFont;
- (BOOL)isVertical;
- (id)verticalFont;
- (unsigned short)glyphWithName:(id)arg1;
- (unsigned int)numberOfGlyphs;
- (struct __CTFont *)CTFont;
- (BOOL)_isDefaultFace;
- (id)coveredCharacterSet;
- (float)_bodyLeading;

@end

