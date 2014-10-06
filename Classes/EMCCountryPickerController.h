//
//  EMCChooseCountryViewControllerManual.h
//  EMCCountryPickerController
//
//  Created by Enrico Maria Crisostomo on 12/05/14.
//  Copyright (c) 2014 Enrico M. Crisostomo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EMCCountryDelegate.h"
#import "EMCCountry.h"

@interface EMCCountryPickerController : UIViewController<UITableViewDataSource, UITableViewDelegate, UISearchControllerDelegate, UISearchResultsUpdating>

- (void)chooseCountry:(NSString *)countryCode programatically:(BOOL)programatically;

@property (weak) id<EMCCountryDelegate> countryDelegate;
@property (copy) NSSet *availableCountryCodes;
@property NSLocale *countryNameDisplayLocale;
@property BOOL showFlags;
@property BOOL drawFlagBorder;
@property CGFloat flagSize;
@property UIColor *flagBorderColor;
@property CGFloat flagBorderWidth;

@end
