//
//  ISHTargetsComparisonController.h
//  TargetCompare
//
//  Created by Felix Lamouroux on 09.08.12.
//  Copyright (c) 2012 iosphere GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <XcodeEditor/XCTarget.h>

@interface ISHTargetsComparisonController : NSWindowController <NSTableViewDataSource, NSTableViewDelegate>
@property (weak) IBOutlet NSView *tableContainerView;
@property (weak) IBOutlet NSTableView *tableViewLeft;
@property (weak) IBOutlet NSTableView *tableViewRight;

@property (weak) IBOutlet NSTextField *leftTargetTitle;
@property (weak) IBOutlet NSTextField *rightTargetTitle;
@property (weak) IBOutlet NSImageView *imageView;

@property (strong) XCTarget *targetLeft;
@property (strong) XCTarget *targetRight;

- (id)initWithLeftTarget:(XCTarget *)leftTarget rightTarget:(XCTarget *)rightTarget;

- (void)showResults;
@end
