//
//  PFLeftButton.h
//  RelaxMyself
//
//  Created by 周坤磊 on 16/1/21.
//  Copyright © 2016年 周坤磊. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface PFLeftCell : UITableViewCell

@property (nonatomic, weak) UIImageView *iconView;
@property (nonatomic, weak) UILabel *titleLab;

+ (instancetype)cellWithTableView:(UITableView *)tableView;
@end
