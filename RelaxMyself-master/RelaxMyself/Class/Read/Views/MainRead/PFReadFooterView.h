//
//  PFFooterView.h
//  简
//
//  Created by 周坤磊 on 16/1/21.
//  Copyright © 2016年 周坤磊. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "PFReadButton.h"

@class PFReadFooterView;
@protocol PFReadFooterViewDelegate <NSObject>

@optional
- (void)footerView:(PFReadFooterView *)footerView buttonClick:(PFReadButton *)button;

@end
@interface PFReadFooterView : UIView

@property (nonatomic, strong) NSArray *footers;
@property (nonatomic, weak) id<PFReadFooterViewDelegate> footerDelegate;

@end
