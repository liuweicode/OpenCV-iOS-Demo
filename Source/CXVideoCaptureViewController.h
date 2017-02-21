//
//  CXVideoCaptureViewController.h
//  OpenCV-iOS-demo
//
//  Created by 刘伟 on 12/01/2017.
//  Copyright © 2017 上海凌晋信息技术有限公司. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "CameraMediaType.h"

#import "Rectangle.h"
#import "RectangleCALayer.h"


@interface CXVideoCaptureViewController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate>

@property (nonatomic, assign) int camera; // 当前摄像头
@property (nonatomic, assign) CameraMediaType cameraMediaType;
@property (nonatomic, strong) CXCameraResult cameraCaptureResult;

@property(nonatomic, strong) Rectangle * aggregateRectangle;
@property(nonatomic, strong) RectangleCALayer *rectangleCALayer;

@property (nonatomic, assign) BOOL torchOn;

// AVFoundation components
@property (nonatomic, strong, readonly) AVCaptureSession *captureSession;

@property (nonatomic, strong) AVCaptureDevice *videoDevice;
@property (nonatomic, strong) AVCaptureDevice *audioDevice;

@property (nonatomic, strong) AVCaptureDeviceInput *videoInput;
@property (nonatomic, strong) AVCaptureDeviceInput *audioInput;

@property (nonatomic, strong) AVCaptureVideoDataOutput *videoOutput;
@property (nonatomic, strong) AVCaptureAudioDataOutput *audioDataOutput;

@property (nonatomic, strong) AVCaptureMovieFileOutput *movieFileOutput;
@property (nonatomic, strong) AVCaptureStillImageOutput* stillImageOutput;

@property (nonatomic, strong) AVCaptureVideoPreviewLayer *videoPreviewLayer;

@end
