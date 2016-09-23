//
//  PFHeaderView.h
//  简
//
//  Created by 周坤磊 on 16/1/21.
//  Copyright © 2016年 周坤磊. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "PFHerderImageView.h"

@class PFHeaderView,PFHerderImageView;

@protocol PFHeaderViewDelegate <NSObject>

@optional

- (void)headerView:(PFHeaderView *)headerView imageViewTap:(PFHerderImageView *)imageView;

@end

@interface PFHeaderView : UIView

@property (nonatomic, strong) NSArray *headers;
@property (nonatomic, weak) id<PFHeaderViewDelegate> delegate;
@end
