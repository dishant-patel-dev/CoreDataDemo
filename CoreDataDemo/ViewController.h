//
//  ViewController.h
//  CoreDataDemo
//
//  Created by Dishant on 01/05/16.
//  Copyright © 2016 dishant. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UITextField *versionTextField;
@property (weak, nonatomic) IBOutlet UITextField *companyTextField;

- (IBAction)cancel:(id)sender;
- (IBAction)save:(id)sender;

@end

