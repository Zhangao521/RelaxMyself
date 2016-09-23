//
//  PFDetailModel.m
//  简
//
//  Created by 周坤磊 on 16/1/21.
//  Copyright © 2016年 周坤磊. All rights reserved.
//


#import "PFReadDetailModel.h"
#import "MJExtension.h"
#import "PFReadDetailListModel.h"

@implementation PFReadDetailModel


- (NSDictionary *)objectClassInArray
{
    return @{@"list" : [PFReadDetailListModel class]};
    //return nil;
}

- (instancetype)initWithCoder:(NSCoder *)aDecoder
{
    if (self = [super init]) {
        self.total = [aDecoder decodeIntegerForKey:@"total"];
        
        self.columnsInfo = [aDecoder decodeObjectForKey:@"columnsInfo"];
        
        self.list = [aDecoder decodeObjectForKey:@"list"];
    }
    return self;
}

- (void)encodeWithCoder:(NSCoder *)aCoder
{
    [aCoder encodeObject:self.list forKey:@"list"];
    [aCoder encodeObject:self.columnsInfo forKey:@"columnsInfo"];
    [aCoder encodeInteger:self.total forKey:@"total"];
}

@end
