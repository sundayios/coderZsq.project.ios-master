//
//  SQTrainingDateListDataSource.h
//  SQFitnessProgram_Viper
//
//  Created by 朱双泉 on 2019/2/26.
//  Copyright © 2019 Castie!. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SQTrainingDateListDataSource <NSObject>

- (NSArray *)fetchDataSourceFromDB;

@end

NS_ASSUME_NONNULL_END
