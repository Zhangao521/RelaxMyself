//
//  PFArticleModel.m
//  简
//
//  Created by 周坤磊 on 16/1/21.
//  Copyright © 2016年 周坤磊. All rights reserved.
//


#import "PFArticleModel.h"

@implementation PFArticleModel

- (instancetype)initWithCoder:(NSCoder *)aDecoder
{
    if (self = [super init]) {
        self.html = [aDecoder decodeObjectForKey:@"htlm"];
    }
    return self;
}

- (void)encodeWithCoder:(NSCoder *)aCoder
{
    [aCoder encodeObject:self.html forKey:@"htlm"];
}
@end
