//
//  PlayingCard.h
//  Matchismo
//
//  Created by Sijin He on 03/03/2013.
//  Copyright (c) 2013 Sijin He. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *) validSuits;
+ (NSUInteger) maxRank;

@end
