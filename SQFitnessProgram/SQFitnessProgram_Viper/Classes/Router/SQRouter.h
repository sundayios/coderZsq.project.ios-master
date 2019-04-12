//
//  SQRouter.h
//  SQFitnessProgram_Viper
//
//  Created by 朱双泉 on 2019/2/25.
//  Copyright © 2019 Castie!. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SQViperRouter.h"

NS_ASSUME_NONNULL_BEGIN

@interface SQRouter : NSObject<SQViperRouter>

+ (void)pushViewController:(UIViewController *)destination fromViewController:(UIViewController *)source animated:(BOOL)animated;

+ (void)popViewController:(UIViewController *)viewController animated:(BOOL)animated;

+ (void)presentViewController:(UIViewController *)viewControllerToPresent fromViewController:(UIViewController *)source animated:(BOOL)animated completion:(void (^__nullable)(void))completion;

+ (void)dismissViewController:(UIViewController *)viewController animated:(BOOL)animated completion:(void (^__nullable)(void))completion;

@end

NS_ASSUME_NONNULL_END
