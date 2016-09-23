//
//  PFDetailModel.h
//  简
//
//  Created by 周坤磊 on 16/1/21.
//  Copyright © 2016年 周坤磊. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface PFReadDetailModel : NSObject<NSCoding>

@property (nonatomic, strong) NSDictionary *columnsInfo;
/**
 *  列表内容
 */
@property (nonatomic, strong) NSArray *list;
@property (nonatomic, assign) NSInteger total;





@end
