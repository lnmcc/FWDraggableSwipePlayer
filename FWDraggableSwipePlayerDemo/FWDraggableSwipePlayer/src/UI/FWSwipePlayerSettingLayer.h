//
//  FWSwipePlayerSettingLayer.h
//  FWDraggableSwipePlayer
//
//  Created by Filly Wang on 6/3/15.
//  Copyright (c) 2015 Filly Wang. All rights reserved.
//

#import "FWSwipePlayerLayer.h"

@protocol FWSwipePlayerSettingLayerDelegate <NSObject>

-(void)settingViewCloseBtnOnClick:(id)sender;
@end

@interface FWSwipePlayerSettingLayer : FWSwipePlayerLayer

@property (nonatomic, assign)id<FWSwipePlayerSettingLayerDelegate> delegate;


@end
