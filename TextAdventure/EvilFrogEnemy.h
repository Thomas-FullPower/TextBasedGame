#pragma once
#include "Enemy.h"

class EvilFrogEnemy : public Enemy
{
public:
	EvilFrogEnemy();
	~EvilFrogEnemy();

	void rockMessage() override;
	void paperMessage() override;
	void scissorsMessage() override;

};

