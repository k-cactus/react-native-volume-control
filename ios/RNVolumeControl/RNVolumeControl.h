//  ReactNativeVolumeController
//
//  Created by Tyler Malone on 03/18/19
//  Copyright © 2019. All rights reserved.
//

#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#else
#import "RCTBridgeModule.h"
#endif

#if __has_include(<React/RCTEventEmitter.h>)
#import <React/RCTEventEmitter.h>
#else
#import "RCTEventEmitter.h"
#endif

@interface RNVolumeControl : RCTEventEmitter <RCTBridgeModule>

- (void)initVolumeView;
- (void)setVolume:(float)volumeValue;
@end
