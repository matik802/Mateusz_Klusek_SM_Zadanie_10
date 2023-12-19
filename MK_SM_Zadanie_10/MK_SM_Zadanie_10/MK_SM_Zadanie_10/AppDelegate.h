//
//  AppDelegate.h
//  MK_SM_Zadanie_10
//
//  Created by student on 12/12/2023.
//  Copyright © 2023 pl.wi.pb. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

