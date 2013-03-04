//
//  PlayingCardDeck.m
//  Matchismo
//
//  Created by Sijin He on 03/03/2013.
//  Copyright (c) 2013 Sijin He. All rights reserved.
//

#import "PlayingCardDeck.h"
#import "PlayingCard.h"

@implementation PlayingCardDeck

- (id)init{
    self = [super init];
    
    if(self){
        for (NSString *suit in [PlayingCard validSuits]){
            for(NSUInteger rank = 1; rank <= [PlayingCard maxRank]; rank++){
                PlayingCard *card = [[PlayingCard alloc] init];
                card.rank = rank;
                card.suit = suit;
            }
        }
    }
    
    return self;
}

@end
