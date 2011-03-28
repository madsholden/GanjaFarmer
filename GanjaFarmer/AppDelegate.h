//
//  AppDelegate.h
//  GanjaFarmer
//
//  Created by Mads Holden on 3/28/11.
//  Copyright NTNU 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
