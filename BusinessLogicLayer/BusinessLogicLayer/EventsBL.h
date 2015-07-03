//
//  EventsBL.h
//  BusinessLogicLayer
//
//  Created by emma on 15/6/17.
//  Copyright (c) 2015年 Emma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EventsDAO.h"
#import "Events.h"


@interface EventsBL : NSObject
//查询所用数据方法
-(NSMutableArray*) readData;


@end
