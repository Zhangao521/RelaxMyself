//
//  PFReadData.m
//  简
//
//  Created by 周坤磊 on 16/1/21.
//  Copyright © 2016年 周坤磊. All rights reserved.
//


#import "PFReadDataModel.h"
#import "MJExtension.h"
#import "PFReadFooterModel.h"
#import "PFReadHeaderModel.h"

@implementation PFReadDataModel

- (NSDictionary *)objectClassInArray
{
    return @{@"list" : [PFReadFooterModel class], @"carousel" : [PFReadHeaderModel class]};
}

- (instancetype)initWithCoder:(NSCoder *)aDecoder
{
    if (self = [super init]) {
        self.list = [aDecoder decodeObjectForKey:@"list"];
        self.carousel = [aDecoder decodeObjectForKey:@"carousel"];
    }
    return self;
}

- (void)encodeWithCoder:(NSCoder *)aCoder
{
    [aCoder encodeObject:self.list forKey:@"list"];
    [aCoder encodeObject:self.carousel forKey:@"carousel"];
}
@end
