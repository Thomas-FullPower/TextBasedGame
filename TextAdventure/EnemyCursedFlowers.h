#pragma once
#include "Enemy.h"

class EnemyCursedFlowers : public Enemy
{
public:
	EnemyCursedFlowers();
	~EnemyCursedFlowers();

	void rockMessage() override;
	void paperMessage() override;
	void scissorsMessage() override;

};
