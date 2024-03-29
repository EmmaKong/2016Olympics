//
//  Events.h
//  PersistenceLayer
//
//  Created by emma on 15/6/17.
//  Copyright (c) 2015年 Emma. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Events : NSObject
//编号
@property(nonatomic, assign) NSUInteger EventID;
//项目名
@property(nonatomic, strong) NSString* EventName;
//项目图标
@property(nonatomic, strong) NSString* EventIcon;
//项目关键信息
@property(nonatomic, strong) NSString* KeyInfo;
//项目基本信息
@property(nonatomic, strong) NSString* BasicsInfo;
//项目奥运会历史信息
@property(nonatomic, strong) NSString* OlympicInfo;

@end
