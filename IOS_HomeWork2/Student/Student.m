//
//  Student.m
//  Student
//
//  Created by wangyu on 2022/7/19.
//

#import "Student.h"

@implementation Student
-(void) study:(float)time{
    NSString *string1 = @"我已经学习了：";
    NSString *string2 = [NSString stringWithFormat:@"%f",time];
    NSString *string = [string1 stringByAppendingString:string2];
    NSString *string3 = @"个小时：";
    NSString *result = [string stringByAppendingString:string3];
    NSLog(@"%@",result);
}

@end
