//
//  PFControllerModel.h
//  RelaxMyself
//
//  Created by 周坤磊 on 16/1/21.
//  Copyright © 2016年 周坤磊. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PFControllerModel : NSObject
/**
 *  标题
 */
@property (nonatomic, copy) NSString *title;
/**
 *  控制器的名称
 */
@property (nonatomic, copy) NSString *name;
/**
 *  图片名称
 */
@property (nonatomic, copy) NSString *imageName;

@end
