//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DChartRenderCycle.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChart3DBuildRenderCycle : TSCH3DChartRenderCycle
{
}

- (BOOL)allocateFramebufferWithAllocationInfo:(const struct FramebufferAllocationInfo *)arg1;
- (BOOL)shouldDiscardRenderbuffers;
- (unsigned int)multisamples;
- (void)setAnimationBounds:(struct CGRect)arg1;
- (id)initWithRenderCycleInfo:(const struct RenderCycleInfo *)arg1;

@end

