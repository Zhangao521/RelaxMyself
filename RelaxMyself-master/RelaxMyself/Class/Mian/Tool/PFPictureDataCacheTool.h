//
//  PFPictureDataCache.h
//  RelaxMyself
//
//  Created by 周坤磊 on 16/1/21.
//  Copyright © 2016年 周坤磊. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FMDB.h"

@class PFPictureModel;

@interface PFPictureDataCacheTool : NSObject

+ (void)saveDataWithArr:(NSArray *)arr idstr:(NSString *)idstr;

+ (void)saveDataWithModel:(PFPictureModel *)model idstr:(NSString *)idstr;

+ (NSArray *)dataWithIdstr:(NSString *)idstr;

+ (void)deleteWithIdstr:(NSString *)idstr;

@end
