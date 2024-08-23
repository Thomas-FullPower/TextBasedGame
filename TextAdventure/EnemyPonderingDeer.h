#pragma once
#include "Enemy.h"

class EnemyPonderingDeer : public Enemy
{
public:
	EnemyPonderingDeer();
	~EnemyPonderingDeer();

	void rockMessage() override;
	void paperMessage() override;
	void scissorsMessage() override;

};


