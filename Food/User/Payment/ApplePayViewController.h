//
//  ApplePayViewController.h
//  Custom Integration (ObjC)
//
//  Created by Ben Guo on 2/22/17.
//  Copyright © 2017 Stripe. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CheckViewControllerDelegate;

@interface ApplePayViewController : UIViewController

@property (nonatomic, weak) id<CheckViewControllerDelegate> delegate;

@end
