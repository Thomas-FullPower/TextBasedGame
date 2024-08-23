#pragma once
#include "Enemy.h"

class EnemyDavey : public Enemy
{
public:
	EnemyDavey();
	~EnemyDavey();

	void rockMessage() override;
	void paperMessage() override;
	void scissorsMessage() override;

};
