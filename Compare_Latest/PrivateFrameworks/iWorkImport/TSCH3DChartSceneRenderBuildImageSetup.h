//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DChartSceneRenderSetup.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartSceneRenderBuildImageSetup : TSCH3DChartSceneRenderSetup
{
    box_80622335 mBodyCanvasClippingBounds;
}

@property(nonatomic) box_80622335 bodyCanvasClippingBounds; // @synthesize bodyCanvasClippingBounds=mBodyCanvasClippingBounds;
- (id).cxx_construct;
- (id)renderingCameraFromOriginalCamera:(id)arg1 pipeline:(id)arg2;
@property(readonly, nonatomic) box_80622335 imageBodyCanvasBounds;
- (box_80622335)p_clippedBodyCanvasBounds;
- (box_80622335)p_intersectBodyCanvasBounds;
- (box_80622335)p_visibleCanvansClippedBodyCanvasBounds;
- (box_80622335)p_maxDimensionClippedBodyCanvasBounds;

@end

