//
//  CXVideoPreviewViewController.h
//  OpenCV-iOS-demo
//
//  Created by 刘伟 on 2/21/17.
//  Copyright © 2017 上海凌晋信息技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CameraMediaType.h"

@interface CXVideoPreviewViewController : UIViewController

@property(nonatomic, strong) NSURL* videoUrl;

@property (nonatomic, assign) CameraMediaType cameraMediaType;
@property (nonatomic,strong) CXCameraResult cameraCaptureResult;

@end
