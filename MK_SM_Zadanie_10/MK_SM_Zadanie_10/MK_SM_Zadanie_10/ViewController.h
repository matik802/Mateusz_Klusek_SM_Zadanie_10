//
//  ViewController.h
//  MK_SM_Zadanie_10
//
//  Created by student on 12/12/2023.
//  Copyright © 2023 pl.wi.pb. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property(weak, nonatomic) IBOutlet UILabel * gestureLabel;

-(IBAction) tapGesture: (UITapGestureRecognizer *) sender;
-(IBAction) pinchGesture: (UIPinchGestureRecognizer *) sender;
-(IBAction) swipeGesture: (UISwipeGestureRecognizer *) sender;
-(IBAction) longPressGesture: (UILongPressGestureRecognizer *) sender;
@end

