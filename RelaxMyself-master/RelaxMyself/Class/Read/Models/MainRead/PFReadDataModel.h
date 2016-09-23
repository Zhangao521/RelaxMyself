//
//  PFReadData.h
//  简
//
//  Created by 周坤磊 on 16/1/21.
//  Copyright © 2016年 周坤磊. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface PFReadDataModel : NSObject<NSCoding>

/**
 *  头部头像数据数组
 */
@property (nonatomic, strong) NSArray *carousel;

/**
 *  九宫格数据数组
 */
@property (nonatomic, strong) NSArray *list;

@end
