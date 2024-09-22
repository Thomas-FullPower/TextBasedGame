#pragma once
#include "Enemy.h"

class EnemyLiar : public Enemy
{
public:
	EnemyLiar();
	~EnemyLiar();

	void rockMessage() override;
	void paperMessage() override;
	void scissorsMessage() override;

};