//
//  PFHttpTool.h
//  RelaxMyself
//
//  Created by 周坤磊 on 16/1/21.
//  Copyright © 2016年 周坤磊. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "AFNetworking.h"


@interface PFHttpTool : NSObject

+ (void)GET:(NSString *)url parameters:(id)parameters progress:(void(^)(NSProgress *downloadProgress))progress success:(void(^)(id response))success failure:(void(^)(NSError *error))failure;

+ (void)POST:(NSString *)url parameters:(id)parameters progress:(void(^)(NSProgress *downloadProgress))progress success:(void(^)(id response))success failure:(void(^)(NSError *error))failure;

+ (void)POST:(NSString *)url parameters:(id)parameters block:(void(id<AFMultipartFormData>formData))block progress:(void(^)(NSProgress *uploadProgress))progress success:(void(^)(id response))success failure:(void(^)(NSError *error))failure;
@end
