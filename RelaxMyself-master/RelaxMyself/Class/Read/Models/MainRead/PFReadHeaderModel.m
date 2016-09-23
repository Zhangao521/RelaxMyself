//
//  PFReadHeaderModel.m
//  简
//
//  Created by 周坤磊 on 16/1/21.
//  Copyright © 2016年 周坤磊. All rights reserved.
//


#import "PFReadHeaderModel.h"

@implementation PFReadHeaderModel

- (instancetype)initWithCoder:(NSCoder *)aDecoder
{
    if (self = [super init]) {
        self.img = [aDecoder decodeObjectForKey:@"img"];
        self.url = [aDecoder decodeObjectForKey:@"url"];

    }
    return self;
}

- (void)encodeWithCoder:(NSCoder *)aCoder
{
    [aCoder encodeObject:self.img forKey:@"img"];
    [aCoder encodeObject:self.url forKey:@"url"];
}

@end
