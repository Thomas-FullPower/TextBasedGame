#pragma once
#include <iostream>
#include <windows.h>
#include "Player.h"
#include "Encounter.h"
#include "Enemy.h"
#include "EnemyDavey.h"
#include "EvilFrogEnemy.h"
#include "EnemyAgressiveShrub.h"
#include "EnemyPonderingDeer.h"
#include "EnemyCursedFlowers.h"
#include "EnemyLittleMountainTitan.h"
#include "EnemyLiar.h"
#include "EnemyRockyGhoul.h"
#include "EnemyToughGuy.h"
#include "BossTitan.h"


class GameStructure
{
public:
	GameStructure(Player* player);
	~GameStructure();

	bool gameLoop();

private:
	void writeText();
	void titleScreen();
	void clearScreen();
	void finalScreen();
	void deathScreen();
	void areaChange();

	Player* player;
	int currentArea;
};

