//
//  EventsDetailViewController.h
//  2016Olympics
//
//  Created by emma on 15/7/3.
//  Copyright (c) 2015年 Emma. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Events.h"

@interface EventsDetailViewController : UIViewController

@property(nonatomic,strong) Events *event;

@property (weak, nonatomic) IBOutlet UILabel *lblEventName;
@property (weak, nonatomic) IBOutlet UIImageView *imgEventIcon;
@property (weak, nonatomic) IBOutlet UITextView *txtViewKeyInfo;
@property (weak, nonatomic) IBOutlet UITextView *txtViewBasicsInfo;
@property (weak, nonatomic) IBOutlet UITextView *txtViewOlympicInfo;

@end
