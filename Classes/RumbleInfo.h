//
//  RumbleInfo.h
//  BoardGame
//
//  Created by Liz on 10-5-17.
//  Copyright 2010 StupidTent co. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GameVisual.h"
#import "TypeDef.h"
#import "Rumble.h"
#import "Player.h"

#define RandomSlices 10
#define RandomSeedsNeeded 20

@class GameLogic;
@class RumbleTarget;

@interface RumbleInfo : UIView {
	Player * player;
	
	GameLogic * gameLogic;
	NSMutableArray * rumbleTargets;
	
	UIImageView * robotIcon;
	UIImageView * snakeIcon;
	UIImageView * palaceIcon;
	
	UILabel * robotCount;
	UILabel * snakeCount;
	UILabel * palaceCount;	
	
	RumbleTarget * currentRumbleTarget;
	RumbleTarget * nextRumbleTarget;
	
	BOOL swapInProgress;
	BOOL rumbleAlone;

	CGPoint currentPosition;
}

@property (nonatomic,assign) Player * player;
@property (nonatomic,assign) RumbleTarget * currentRumbleTarget;


- (void)initGame;
- (void)enterRumble;
- (void)enterRumbleWithPlayerID:(int)playerID;
- (void)exitRumble;

- (void)addRandomTokenWithType:(TokenType)type;
- (void)activateRumbleTargetWithType:(RumbleTargetType)type;
- (void)swapRumbleTarget:(BOOL)up;
- (void)enterRumbleAnimDidStop;

- (void)reset;
- (void)update;

@end
