#pragma once
#include "Player.h"
#include "Enemy.h"

class Encounter
{
public:
	Encounter(Player* _player, Enemy* _enemy);
	~Encounter();

private:
	void Fight();
	int PlayerPick();
	int EnemyPick();

	Player* player;
	Enemy* enemy;

};

