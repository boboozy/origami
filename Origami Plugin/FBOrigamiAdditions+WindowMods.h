/*
 *  Copyright (c) 2016-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the license found in the
 *  LICENSE file in the root directory of this source tree.
 *
 */

#import "FBOrigamiAdditions.h"

@interface FBOrigamiAdditions (WindowMods)

- (void)setupWindowMods;
- (BOOL)statusBarHidden;
- (void)setStatusBarHidden:(BOOL)flag;

@end
