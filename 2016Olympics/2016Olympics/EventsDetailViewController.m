//
//  EventsDetailViewController.m
//  2016Olympics
//
//  Created by emma on 15/7/3.
//  Copyright (c) 2015年 Emma. All rights reserved.
//

#import "EventsDetailViewController.h"

@interface EventsDetailViewController ()

@end

@implementation EventsDetailViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [super viewDidLoad];
    
    self.imgEventIcon.image = [UIImage imageNamed:self.event.EventIcon];
    
    self.lblEventName.text = self.event.EventName;
    self.txtViewBasicsInfo.text = self.event.BasicsInfo;
    self.txtViewKeyInfo.text = self.event.KeyInfo;
    self.txtViewOlympicInfo.text = self.event.OlympicInfo;
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
