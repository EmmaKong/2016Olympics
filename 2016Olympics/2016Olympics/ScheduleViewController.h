//
//  ScheduleViewController.h
//  2016Olympics
//
//  Created by emma on 15/7/3.
//  Copyright (c) 2015年 Emma. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Schedule.h"
#import "ScheduleBL.h"
#import "EventsDetailViewController.h"

@interface ScheduleViewController : UITableViewController

//表视图使用的数据
@property (strong, nonatomic) NSDictionary * data;
//比赛日期列表
@property (strong, nonatomic) NSArray * arrayGameDateList;

@end
