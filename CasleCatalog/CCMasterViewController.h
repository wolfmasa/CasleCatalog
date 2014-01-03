//
//  CCMasterViewController.h
//  CasleCatalog
//
//  Created by 上原 将司 on 2014/01/03.
//  Copyright (c) 2014年 Project Wolf. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CCDetailViewController;

@interface CCMasterViewController : UITableViewController

@property (strong, nonatomic) CCDetailViewController *detailViewController;

@end
