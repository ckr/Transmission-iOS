//
//  BPConnectionViewController.h
//  Transmission-iOS
//
//  Created by Brian Partridge on 2/28/13.
//  Copyright (c) 2013 Brian Partridge. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BPConnectionViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *spinner;
@property (weak, nonatomic) IBOutlet UILabel *activityLabel;
@property (weak, nonatomic) IBOutlet UIButton *retryButton;

- (IBAction)retryTapped:(id)sender;
@end
