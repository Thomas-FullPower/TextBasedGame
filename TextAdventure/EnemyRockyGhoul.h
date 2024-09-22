#pragma once
#include "Enemy.h"

class EnemyRockyGhoul : public Enemy
{
public:
	EnemyRockyGhoul();
	~EnemyRockyGhoul();

	void rockMessage() override;
	void paperMessage() override;
	void scissorsMessage() override;

};