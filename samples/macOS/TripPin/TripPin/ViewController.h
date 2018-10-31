//
//  ViewController.h
//  TripPin
//
//  Created by Steve Pearson on 31/10/2018.
//  Copyright © 2018 MyOrg. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ViewController : NSViewController<NSTableViewDelegate, NSTableViewDataSource>

@property (weak) IBOutlet NSTableView *tableView;

@end

