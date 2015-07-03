//
//  EventsDAO.h
//  PersistenceLayer
//
//  Created by emma on 15/6/17.
//  Copyright (c) 2015年 Emma. All rights reserved.
//

#import "BaseDAO.h"
#import "Events.h"

@interface EventsDAO : BaseDAO

+(EventsDAO*)sharedManager;

//插入Note方法
-(int) create:(Events*)model;

//删除Note方法
-(int) remove:(Events*)model;

//修改Note方法
-(int) modify:(Events*)model;

//查询所有数据方法
-(NSMutableArray*) findAll;

//按照主键查询数据方法
-(Events*) findById:(Events*)model;


@end
