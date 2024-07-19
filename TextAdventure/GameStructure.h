#pragma once
#include <iostream>
#include <windows.h>
#include "Player.h"
#include "Encounter.h"
#include "Enemy.h"
#include "EvilFrogEnemy.h"

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

