//
//  PFReadTableViewCell.h
//  简
//
//  Created by 周坤磊 on 16/1/21.
//  Copyright © 2016年 周坤磊. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PFReadDetailListModel;

@interface PFReadDetailCell : UITableViewCell

@property (nonatomic, strong) PFReadDetailListModel *article;

+ (instancetype)cellWithTableView:(UITableView *)tableView;
@end
