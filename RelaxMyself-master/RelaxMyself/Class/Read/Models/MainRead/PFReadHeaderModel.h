//
//  PFReadHeaderModel.h
//  简
//
//  Created by 周坤磊 on 16/1/21.
//  Copyright © 2016年 周坤磊. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PFReadHeaderModel : NSObject<NSCoding>

/**
 *  图片地址
 */
@property (nonatomic, copy) NSString * img;
/**
 *  网址
 */
@property (nonatomic, copy) NSString * url;

@end
