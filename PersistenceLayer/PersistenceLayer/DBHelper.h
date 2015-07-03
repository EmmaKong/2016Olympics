//
//  DBHelper.h
//  PersistenceLayer
//
//  Created by emma on 15/6/17.
//  Copyright (c) 2015年 Emma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "sqlite3.h"

@interface DBHelper : NSObject
{
    sqlite3 *db;
}

//获得沙箱Document目录下全路径
+ (NSString *)applicationDocumentsDirectoryFile :(NSString *)fileName;

//初始化并加载数据
-(void) initDB;

//从数据库获得当前数据库版本号
- (int) dbVersionNubmer;


@end
