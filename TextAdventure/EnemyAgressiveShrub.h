#pragma once
#include "Enemy.h"

class EnemyAgressiveShrub : public Enemy
{
public:
	EnemyAgressiveShrub();
	~EnemyAgressiveShrub();

	void rockMessage() override;
	void paperMessage() override;
	void scissorsMessage() override;

};

