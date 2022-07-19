//
//  main.m
//  Student
//
//  Created by wangyu on 2022/7/19.
//

#import <Foundation/Foundation.h>
#import "Student.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        NSLog(@"Hello, World!");
        // 创建对象，完成对象的声明，实例化，初始化
        Student *stu=[Student new];
        // 调用对象的sayHello方法
        [stu study:15];
    }
    return 0;
}
