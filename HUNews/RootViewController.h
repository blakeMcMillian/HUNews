//
//  RootViewController.h
//  HUNews
//
//  Created by Blake McMillian on 1/24/15.
//  Copyright (c) 2015 Hampton University. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import "PCHUNews.h"

@interface RootViewController : UIViewController<UITableViewDataSource, UITableViewDelegate>
@property (strong, nonatomic) IBOutlet UITableView *tableViewInstance;

@end
