#pragma once

#include <BWAPI.h>

#include "state.h"

enum Action
{
  Attack,
  Flee,
};

enum ActualAction
{
    Shoot, // Can't redefine attack...
    Move
};

class GameState {
public:
  State state;

  bool isStartingAttack;
  Action lastAction;
  ActualAction actualAction;
  
  BWAPI::TilePosition lastPosition;
  BWAPI::Unit * lastTarget;
  BWAPI::Unit * nearestEnemy;
  BWAPI::Unit * nearestAttackedAlly;
  BWAPI::Unit * nearestAlly;

  BWAPI::Position lastPerfectPosition;
  int notMovingTurns;
};

