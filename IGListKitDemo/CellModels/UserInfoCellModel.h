//
//  UserInfoCellModel.h
//  IGListKitDemo
//
//  Created by gxy on 2018/5/28.
//  Copyright © 2018年 gxy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UserInfoCellModel : NSObject
@property (nonatomic,copy) NSURL *avatar;
@property (nonatomic,copy) NSString *userName;
-(instancetype)initWithUserName:(NSString *)userName;
@end
