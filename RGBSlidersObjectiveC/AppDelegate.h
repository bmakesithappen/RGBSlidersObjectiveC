//
//  AppDelegate.h
//  RGBSlidersObjectiveC
//
//  Created by Bernard Désert on 10/18/17.
//  Copyright © 2017 Bernard Désert. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

