//
//  DetailViewController.h
//  SHA-1
//
//  Created by Vaishnavi Narayan on 9/22/16.
//  Copyright © 2016 Vaishnavi Narayan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

