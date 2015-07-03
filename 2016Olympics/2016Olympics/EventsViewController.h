//
//  EventsViewController.h
//  2016Olympics
//
//  Created by emma on 15/7/3.
//  Copyright (c) 2015年 Emma. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EventsViewCell.h"
#import "EventsBL.h"
#import "Events.h"
#import "EventsDetailViewController.h"
#define  COL_COUNT 4 // 一排四个

@interface EventsViewController : UICollectionViewController
@property (strong, nonatomic) NSArray * events;

@end
