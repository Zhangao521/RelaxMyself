//
//  PFReadDetailHeadView.h
//  简
//
//  Created by 周坤磊 on 16/1/21.
//  Copyright © 2016年 周坤磊. All rights reserved.
//


#import <UIKit/UIKit.h>

typedef enum {
    mostHot,
    mostNew
}PFReadDetailHeadViewButtonType;

@class PFReadDetailHeadView;

@protocol PFReadDetailHeadViewDelegate <NSObject>
@optional
- (void)readDetailViewHeadView:(PFReadDetailHeadView *)headView buttonClick:(PFReadDetailHeadViewButtonType)type;

@end

@interface PFReadDetailHeadView : UIView
@property (nonatomic, weak) id<PFReadDetailHeadViewDelegate> delegate;

@end
