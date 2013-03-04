//
//  Card.h
//  Matchismo
//
//  Created by Sijin He on 25/02/2013.
//  Copyright (c) 2013 Sijin He. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic) BOOL faceUp;
@property (nonatomic) BOOL unplayable;

- (int)match:(NSArray *)otherCards;

@end
