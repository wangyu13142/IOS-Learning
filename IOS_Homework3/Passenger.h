//
//  Passenger.h
//  College Demo
//
//  Created by mashujun on 2022/7/18.
//

#import "Person.h"

NS_ASSUME_NONNULL_BEGIN

@interface Orders : NSObject
//属性
@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong) NSDate *startTime;
@property (nonatomic, strong) NSDate *endTime;
@property (nonatomic, copy) NSString *TrainNo;
@property (nonatomic, copy) NSNumber *seatNo;
@end

@interface Passenger : Person
// @property 属性
// 是否年满 18 岁
@property (nonatomic, assign) BOOL isAdult;
// 历史订单 （数组）
@property (nonatomic, copy) Orders *historyOrders;
// 未出行订单 （数组）
@property (nonatomic, copy) Orders *unfinishedOrders;
// Function 方法
// 去订票
- (void)orderTickets: (Passenger *) passenger;
// 去检票
- (void)checkTickets: (Passenger *) passenger;
@end

NS_ASSUME_NONNULL_END
