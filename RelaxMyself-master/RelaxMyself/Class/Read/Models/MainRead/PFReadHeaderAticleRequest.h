//
//  PFReadHeaderAticleRequest.h
//  简
//
//  Created by 周坤磊 on 16/1/21.
//  Copyright © 2016年 周坤磊. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface PFReadHeaderAticleRequest : NSObject
/**
 *  图片附带的网址 NSString
 */
@property (nonatomic, copy) NSString * contentid;

/**
 *  数值是 2 int
 */
@property (nonatomic, assign) NSInteger client;

@end
