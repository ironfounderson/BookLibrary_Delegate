//
//  BookViewController.h
//  BookLibrary_Delegate
//
//  Created by Robert Höglund on 11/3/10.
//  Copyright 2010 rhoglund coding. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface BookViewController : UIViewController {
	UITextField *titleField_;
	UITextField *authorField_;
}

@property (nonatomic, retain) IBOutlet UITextField *titleField;
@property (nonatomic, retain) IBOutlet UITextField *authorField;

- (IBAction)cancel:(id)sender;
- (IBAction)save:(id)sender;

@end
