#pragma once
#include "Enemy.h"

class EnemyToughGuy : public Enemy
{
public:
	EnemyToughGuy();
	~EnemyToughGuy();

	void rockMessage() override;
	void paperMessage() override;
	void scissorsMessage() override;

};