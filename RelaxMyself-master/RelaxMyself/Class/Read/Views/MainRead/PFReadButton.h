//
//  PFReadButton.h
//  简
//
//  Created by 周坤磊 on 16/1/21.
//  Copyright © 2016年 周坤磊. All rights reserved.
//


#import <UIKit/UIKit.h>

@class PFReadFooterModel;

@interface PFReadButton : UIButton

@property (nonatomic, strong) PFReadFooterModel *footer;
/**
 *  标题名称
 */
@property (nonatomic, copy) NSString * title;


@end
