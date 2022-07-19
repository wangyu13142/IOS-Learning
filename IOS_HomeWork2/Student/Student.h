//
//  Student.h
//  Student
//
//  Created by wangyu on 2022/7/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Student : NSObject
{
@public
    NSString *_name;
    NSString *_major;
    int _age;
}
-(void) study:(float)time;
@end

NS_ASSUME_NONNULL_END
