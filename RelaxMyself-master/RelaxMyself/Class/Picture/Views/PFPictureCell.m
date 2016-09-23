//
//  PFPictureCell.m
//  RelaxMyself
//
//  Created by  on 16/1/21.
//  Copyright © 2016. All rights reserved.
//


#import "PFPictureCell.h"
#import "PFPictureModel.h"
#import "UIImageView+WebCache.h"

@interface PFPictureCell ()
@property (weak, nonatomic) IBOutlet UILabel *titleLab;
@property (weak, nonatomic) IBOutlet UIImageView *iconView;

@end
@implementation PFPictureCell

- (void)setPicture:(PFPictureModel *)picture
{
    _picture = picture;
    [self.iconView sd_setImageWithURL:[NSURL URLWithString:picture.small_url] placeholderImage:[UIImage imageWithColor:[UIColor grayColor]]];
    self.titleLab.text = picture.title;
}
- (void)awakeFromNib {
    // Initialization code
}

@end
