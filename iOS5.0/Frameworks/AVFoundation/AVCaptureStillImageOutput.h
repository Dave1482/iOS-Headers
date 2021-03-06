/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureStillImageOutputInternal, NSArray, NSDictionary;

@interface AVCaptureStillImageOutput : AVCaptureOutput
{
    AVCaptureStillImageOutputInternal *_internal;
}

+ (void)initialize;
+ (id)jpegStillImageNSDataRepresentation:(struct opaqueCMSampleBuffer *)arg1;
+ (id)jpegStillImageNSDataRepresentationForSurface:(void *)arg1 size:(unsigned long)arg2 metadata:(id)arg3;
+ (struct CGImage *)cgImageForBGRASurface:(void *)arg1 size:(unsigned long)arg2;
+ (id)jpegStillImageNSDataRepresentationForBGRASurface:(void *)arg1 size:(unsigned long)arg2;
- (id)init;
- (void)dealloc;
- (id)_applyOverridesToCaptureOptions:(id)arg1;
@property(copy, nonatomic) NSDictionary *outputSettings;
@property(readonly, nonatomic) NSArray *availableImageDataCVPixelFormatTypes;
@property(readonly, nonatomic) NSArray *availableImageDataCodecTypes;
- (id)connectionMediaTypes;
- (long long)maxStillImageDataSize;
- (struct CGSize)previewImageSize;
- (void)setPreviewImageSize:(struct CGSize)arg1;
- (unsigned long)imageDataFormatType;
- (BOOL)isHDRCaptureEnabled;
- (void)setHDRCaptureEnabled:(BOOL)arg1;
- (BOOL)isEV0CaptureEnabled;
- (void)setEV0CaptureEnabled:(BOOL)arg1;
- (BOOL)isChromaNoiseReductionEnabled;
- (void)setChromaNoiseReductionEnabled:(BOOL)arg1;
- (BOOL)suspendsVideoProcessingDuringStillImageCapture;
- (void)setSuspendsVideoProcessingDuringStillImageCapture:(BOOL)arg1;
- (BOOL)resumeVideoProcessing;
@property(readonly, getter=isCapturingStillImage) BOOL capturingStillImage;
- (id)firstActiveConnection;
- (id)scaleAndCropDictionary;
- (void)configureAndInitiateCopyStillImageForRequest:(id)arg1;
- (void)captureStillImageAsynchronouslyFromConnection:(id)arg1 completionHandler:(id)arg2;
- (void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)arg1 completionHandler:(id)arg2;
- (void)handlePhotoTakenForRequest:(id)arg1 info:(id)arg2;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (void)_updateStillImageDataSizeForCaptureOptions:(id)arg1;

@end

