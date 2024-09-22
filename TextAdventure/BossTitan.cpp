#include "BossTitan.h"

#include "BossTitan.h"

BossTitan::BossTitan()
{
	enemyStats.maxHealth = 30;
	enemyStats.currentHealth = enemyStats.maxHealth;
	enemyStats.rock = 6;
	enemyStats.paper = 7;
	enemyStats.scissors = 4;
	enemyStats.name = "Earth Titan";
	statIncrease = 1;

	encounterMessage = "The Mountain Titan towers over you";
	damagedMessage = "The Mountain Titan lets out a roar in anger and pain";
	defeatedMessage = "The light fades from the once powerful titans eyes";
}

BossTitan::~BossTitan()
{
}

void BossTitan::rockMessage()
{
	std::cout << "The Mountain Titan lifts a massive rock into the air to crush you with" << "\n";
}

void BossTitan::paperMessage()
{
	std::cout << "The mountain Titans unyeilding rage covers the area" << "\n";
}

void BossTitan::scissorsMessage()
{
	std::cout << "The Mountain titan pulls out a massive blade" << "\n";
}