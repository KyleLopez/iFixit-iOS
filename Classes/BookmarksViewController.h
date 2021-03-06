//
//  BookmarksViewController.h
//  iFixit
//
//  Created by David Patierno on 4/4/11.
//  Copyright 2011 iFixit. All rights reserved.
//

#import "LoginViewControllerDelegate.h"

@class LoginViewController;

@interface BookmarksViewController : UITableViewController <LoginViewControllerDelegate, UIActionSheetDelegate>

@property (nonatomic, retain) NSMutableDictionary *bookmarks;
@property (nonatomic, retain) LoginViewController *lvc;
@property (nonatomic, retain) NSMutableArray *devices;
@property (nonatomic, retain) UIBarButtonItem *editButton;

- (void)refresh;

@end
