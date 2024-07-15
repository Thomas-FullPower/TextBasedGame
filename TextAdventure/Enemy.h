#pragma once
#include "Commons.h"
#include <iostream>

class Enemy
{
public:
	Stats enemyStats;
	int statIncrease;
	std::string encounterMessage;
	std::string damagedMessage;
	std::string defeatedMessage;
	
	Enemy();
	~Enemy();

	virtual void rockMessage();
	virtual void paperMessage();
	virtual void scissorsMessage();
};


