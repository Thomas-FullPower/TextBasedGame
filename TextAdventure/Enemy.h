#pragma once
#include "Commons.h"
#include <iostream>

class Enemy
{
public:
	Stats enemyStats;
	std::string encounterMessage;
	
	Enemy();
	~Enemy();

	void rockMessage();
	void paperMessage();
	void scissorsMessage();
};

