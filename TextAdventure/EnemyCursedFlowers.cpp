#include "EnemyCursedFlowers.h"

EnemyCursedFlowers::EnemyCursedFlowers()
{
	enemyStats.maxHealth = 14;
	enemyStats.currentHealth = enemyStats.maxHealth;
	enemyStats.rock = 5;
	enemyStats.paper = 3;
	enemyStats.scissors = 4;
	enemyStats.name = "Cursed flowers";
	statIncrease = 2;

	encounterMessage = "Some cursed flowers bloom in front of you";
	damagedMessage = "The curse begins to wilt the flowers";
	defeatedMessage = "In the end the flowers where not cursed but were evil by nature";
}

EnemyCursedFlowers::~EnemyCursedFlowers()
{
}

void EnemyCursedFlowers::rockMessage()
{
	std::cout << "The flowers mutter about how you could be crushed if a tree where to fall over" << "\n";
}

void EnemyCursedFlowers::paperMessage()
{
	std::cout << "The flowers wish to consume you in darkness" << "\n";
}

void EnemyCursedFlowers::scissorsMessage()
{
	std::cout << "The flowers curse cuts through even the purest of souls" << "\n";
}
