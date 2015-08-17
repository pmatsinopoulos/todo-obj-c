//
//  ToDoItem.h
//  ToDo2
//
//  Created by Panayotis Matsinopoulos on 8/16/15.
//  Copyright (c) 2015 Panayotis Matsinopoulos. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
