//
//  PFLeftBottonPlayView.h
//  RelaxMyself
//
//  Created by 周坤磊 on 16/1/21.
//  Copyright © 2016年 周坤磊. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PFMusicModel,DOUAudioStreamer;

@interface PFLeftBottomPlayView : UIView

@property (nonatomic, strong) PFMusicModel *music;
@property (nonatomic, strong) DOUAudioStreamer *streamer;
@end
