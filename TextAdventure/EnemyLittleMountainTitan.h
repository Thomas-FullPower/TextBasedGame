
#pragma once
#include "Enemy.h"

class EnemyLittleMountainTitan : public Enemy
{
public:
	EnemyLittleMountainTitan();
	~EnemyLittleMountainTitan();

	void rockMessage() override;
	void paperMessage() override;
	void scissorsMessage() override;

};

