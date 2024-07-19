#pragma once
#include "Player.h"
#include "Enemy.h"

class Encounter
{
public:
	Encounter(Player* _player, Enemy* _enemy);
	~Encounter();
	bool victory;

private:
	int Fight();
	int PlayerPick();
	int EnemyPick();

	Player* player;
	Enemy* enemy;

};

