#pragma once
#include "Player.h"
#include "Enemy.h"

class Encounter
{
public:
	Encounter();
	~Encounter();

private:
	void Fight();

	Player* player;
	Enemy* enemy;

};

