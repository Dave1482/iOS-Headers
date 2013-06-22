/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVAssetWriterInputHelper.h>

@class AVAssetWriterInputMediaDataRequester, AVFigAssetWriterTrack;

@interface AVAssetWriterInputWritingHelper : AVAssetWriterInputHelper
{
    AVFigAssetWriterTrack *_assetWriterTrack;
    AVAssetWriterInputMediaDataRequester *_mediaDataRequester;
    struct __CVPixelBufferPool *_pixelBufferPool;
}

+ (id)keyPathsForValuesAffectingReadyForMoreMediaData;
@property(readonly, nonatomic, getter=_assetWriterTrack) AVFigAssetWriterTrack *assetWriterTrack; // @synthesize assetWriterTrack=_assetWriterTrack;
- (struct __CVPixelBufferPool *)pixelBufferPool;
- (void)transitionToTerminalStatus:(int)arg1;
- (void)markAsFinished;
- (BOOL)prepareToFinishWritingReturningError:(id *)arg1;
- (void)prepareToEndSession;
- (BOOL)appendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)requestMediaDataWhenReadyOnQueue:(struct dispatch_queue_s *)arg1 usingBlock:(id)arg2;
- (BOOL)isReadyForMoreMediaData;
- (int)status;
- (void)finalize;
- (void)dealloc;
- (id)initWithConfigurationState:(id)arg1 assetWriterTrack:(id)arg2 error:(id *)arg3;
- (id)initWithConfigurationState:(id)arg1;

@end
