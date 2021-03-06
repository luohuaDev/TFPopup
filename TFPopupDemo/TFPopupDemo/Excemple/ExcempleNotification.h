//
//  ExcempleNotification.h
//  TFPopupDemo
//
//  Created by ztf on 2019/2/21.
//  Copyright © 2019 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void(^ExcempleNotificationBlock)(void);

NS_ASSUME_NONNULL_BEGIN

@interface ExcempleNotification : UIView
@property(nonatomic,  copy)ExcempleNotificationBlock block;

-(void)observerClick:(ExcempleNotificationBlock)block;
@end

NS_ASSUME_NONNULL_END
