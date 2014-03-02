//
//  GameState.h
//  Project Fieldlord
//
//  Created by Jason Fieldman on 2/25/14.
//  Copyright (c) 2014 Jason Fieldman. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GameState : NSObject

SINGLETON_INTR(GameState);


@property (nonatomic, assign) int64_t shotsAttempted;
@property (nonatomic, assign) int64_t hitsMade;
@property (nonatomic, readonly) int64_t score;
@property (nonatomic, assign) int shotgunsLeft;

@end
