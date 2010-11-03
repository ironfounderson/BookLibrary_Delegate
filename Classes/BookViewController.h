//
//  BookViewController.h
//  BookLibrary_Delegate
//
//  Created by Robert Höglund on 11/3/10.
//  Copyright 2010 rhoglund coding. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Book;
@class BookViewController;

@protocol BookViewControllerDelegate
- (void)bookViewControllerDidCancel:(BookViewController *)controller;
- (void)bookViewControllerDidSave:(BookViewController *)controller;
@end

@interface BookViewController : UIViewController {
	UITextField *titleField_;
	UITextField *authorField_;
	Book *book_;
	id <BookViewControllerDelegate> delegate_;
}

@property (nonatomic, retain) IBOutlet UITextField *titleField;
@property (nonatomic, retain) IBOutlet UITextField *authorField;
@property (nonatomic, retain) Book *book;
@property (nonatomic, assign) id <BookViewControllerDelegate> delegate;

- (IBAction)cancel:(id)sender;
- (IBAction)save:(id)sender;

@end
