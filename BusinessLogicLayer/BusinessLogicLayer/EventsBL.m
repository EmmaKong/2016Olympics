//
//  EventsBL.m
//  BusinessLogicLayer
//
//  Created by emma on 15/6/17.
//  Copyright (c) 2015年 Emma. All rights reserved.
//

#import "EventsBL.h"

@implementation EventsBL
//查询所用数据方法
-(NSMutableArray*) readData
{
    EventsDAO *dao = [EventsDAO sharedManager];
    
    NSMutableArray* list  = [dao findAll];
    
    return list;
}

@end
