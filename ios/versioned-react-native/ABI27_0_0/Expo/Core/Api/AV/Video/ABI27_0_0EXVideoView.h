// Copyright 2015-present 650 Industries. All rights reserved.

#import <ReactABI27_0_0/ABI27_0_0RCTComponent.h>

#import "ABI27_0_0EXAVObject.h"
#import "ABI27_0_0EXVideoPlayerViewControllerDelegate.h"

@class ABI27_0_0RCTEventDispatcher;

@interface ABI27_0_0EXVideoView : UIView <ABI27_0_0EXVideoPlayerViewControllerDelegate, ABI27_0_0EXAVObject>

typedef NS_OPTIONS(NSUInteger, ABI27_0_0EXVideoFullscreenUpdate)
{
  ABI27_0_0EXVideoFullscreenUpdatePlayerWillPresent = 0,
  ABI27_0_0EXVideoFullscreenUpdatePlayerDidPresent  = 1,
  ABI27_0_0EXVideoFullscreenUpdatePlayerWillDismiss = 2,
  ABI27_0_0EXVideoFullscreenUpdatePlayerDidDismiss  = 3,
};

@property (nonatomic, strong, getter=getStatus) NSDictionary *status;
@property (nonatomic, strong) NSDictionary *source;
@property (nonatomic, assign) BOOL useNativeControls;
@property (nonatomic, strong) NSString *nativeResizeMode;
@property (nonatomic, copy) ABI27_0_0RCTDirectEventBlock onLoadStart;
@property (nonatomic, copy) ABI27_0_0RCTDirectEventBlock onLoad;
@property (nonatomic, copy) ABI27_0_0RCTDirectEventBlock onError;
@property (nonatomic, copy) ABI27_0_0RCTDirectEventBlock onStatusUpdate;
@property (nonatomic, copy) ABI27_0_0RCTDirectEventBlock onReadyForDisplay;
@property (nonatomic, copy) ABI27_0_0RCTDirectEventBlock onFullscreenUpdate;

- (instancetype)initWithBridge:(ABI27_0_0RCTBridge *)bridge;

- (void)setStatus:(NSDictionary *)status
         resolver:(ABI27_0_0RCTPromiseResolveBlock)resolve
         rejecter:(ABI27_0_0RCTPromiseRejectBlock)reject;

- (void)replayWithStatus:(NSDictionary *)status
                resolver:(ABI27_0_0RCTPromiseResolveBlock)resolve
                rejecter:(ABI27_0_0RCTPromiseRejectBlock)reject;

- (void)setSource:(NSDictionary *)source
       withStatus:(NSDictionary *)initialStatus
         resolver:(ABI27_0_0RCTPromiseResolveBlock)resolve
         rejecter:(ABI27_0_0RCTPromiseRejectBlock)reject;

- (void)setFullscreen:(BOOL)value
             resolver:(ABI27_0_0RCTPromiseResolveBlock)resolve
             rejecter:(ABI27_0_0RCTPromiseRejectBlock)reject;

@end
