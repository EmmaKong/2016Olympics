//
//  ScheduleDAO.h
//  PersistenceLayer
//
//  Created by emma on 15/6/17.
//  Copyright (c) 2015年 Emma. All rights reserved.
//

#import "BaseDAO.h"
#import "Schedule.h"
#import "Events.h"

@interface ScheduleDAO : BaseDAO

+ (ScheduleDAO*)sharedManager;

//插入Note方法
-(int) create:(Schedule*)model;

//删除Note方法
-(int) remove:(Schedule*)model;

//修改Note方法
-(int) modify:(Schedule*)model;

//查询所有数据方法
-(NSMutableArray*) findAll;

//按照主键查询数据方法
-(Schedule*) findById:(Schedule*)model;
@end
