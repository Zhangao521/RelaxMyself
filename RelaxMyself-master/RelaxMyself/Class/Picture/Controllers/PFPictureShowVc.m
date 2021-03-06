//
//  PFPictureShowVc.m
//  RelaxMyself
//
//  Created by 周坤磊 on 16/1/21.
//  Copyright © 2016年 周坤磊. All rights reserved.
//


#import "PFPictureShowVc.h"
#import "MJPhoto.h"
#import "PFPictureModel.h"


@interface PFPictureShowVc ()


@end

@implementation PFPictureShowVc

- (void)viewDidLoad {
    [super viewDidLoad];
    
}


- (void)setPictures:(NSArray *)pictures
{
    _pictures = [pictures copy];

    NSUInteger count = pictures.count;
    NSMutableArray *photos = [NSMutableArray arrayWithCapacity:count];
    for (int i = 0; i < count; ++i) {
        PFPictureModel *model = pictures[i];
        MJPhoto *photo = [[MJPhoto alloc] init];
        photo.url = [NSURL URLWithString:model.image_url];
        [photos addObject:photo];
    }
    self.photos = photos;

}

@end
