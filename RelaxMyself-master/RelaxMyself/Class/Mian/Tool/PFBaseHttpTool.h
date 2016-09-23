//
//  PFBaseHttpTool.h
//  简
//
//  Created by 周坤磊 on 16/1/21.
//  Copyright © 2016年 周坤磊. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PFBaseHttpTool : NSObject

+ (void)GET:(NSString *)url parameters:(id)model resultClass:(Class)resultClass success:(void (^)(id result))success failure:(void (^)(NSError *error))failure;


+ (void)POST:(NSString *)url parameters:(id)model resultClass:(Class)resultClass success:(void (^)(id result))success failure:(void (^)(NSError *error))failure;
@end
