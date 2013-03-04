//
//  Deck.h
//  Matchismo
//
//  Created by Sijin He on 25/02/2013.
//  Copyright (c) 2013 Sijin He. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void) addCard:(Card *)card atTop:(BOOL) atTop;

- (Card *) drawRandomCard;

@end
