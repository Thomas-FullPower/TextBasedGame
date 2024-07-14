#pragma once
#include "Commons.h"
#include <iostream>

class Enemy
{
public:
	Stats enemyStats;
	std::string encounterMessage;
	std::string damagedMessage;
	std::string defeatedMessage;
	
	Enemy();
	~Enemy();

	void rockMessage();
	void paperMessage();
	void scissorsMessage();
};


