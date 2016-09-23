//
//  PFHerderImageView.m
//  简
//
//  Created by 周坤磊 on 16/1/21.
//  Copyright © 2016年 周坤磊. All rights reserved.
//


#import "PFHerderImageView.h"

@implementation PFHerderImageView

- (void)setUrl:(NSString *)url
{
    NSString *str = [url substringFromIndex:17];
    _url = [str copy];
}
/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

@end
