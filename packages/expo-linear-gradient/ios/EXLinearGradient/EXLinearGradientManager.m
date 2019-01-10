// Copyright 2015-present 650 Industries. All rights reserved.

#import "EXLinearGradientManager.h"
#import "EXLinearGradient.h"
#import <EXCore/EXUIManager.h>

@interface EXLinearGradientManager ()

@end

@implementation EXLinearGradientManager

EX_EXPORT_MODULE(EXLinearGradientManager);

- (dispatch_queue_t)methodQueue
{
  return dispatch_get_main_queue();
}

- (NSString *)viewName
{
  return @"ExpoLinearGradient";
}

- (UIView *)view
{
  return [[EXLinearGradient alloc] init];
}

EX_VIEW_PROPERTY(colors, NSArray *, EXLinearGradient) {
  [view setColors:value];
}

EX_VIEW_PROPERTY(startPoint, CGPoint, EXLinearGradient) {
  [view setStartPoint:value];
}

EX_VIEW_PROPERTY(endPoint, CGPoint, EXLinearGradient) {
  [view setEndPoint:value];
}

EX_VIEW_PROPERTY(locations, NSArray *, EXLinearGradient) {
  [view setLocations:value];
}

@end
