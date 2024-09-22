#pragma once
#include "Enemy.h"

class BossTitan : public Enemy
{
public:
	BossTitan();
	~BossTitan();

	void rockMessage() override;
	void paperMessage() override;
	void scissorsMessage() override;

};