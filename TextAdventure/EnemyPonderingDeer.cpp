#include "EnemyPonderingDeer.h"

EnemyPonderingDeer::EnemyPonderingDeer()
{
	enemyStats.maxHealth = 20;
	enemyStats.currentHealth = enemyStats.maxHealth;
	enemyStats.rock = 5;
	enemyStats.paper = 2;
	enemyStats.scissors = 5;
	enemyStats.name = "Pondering deer";
	statIncrease = 2;

	encounterMessage = "A pondering deer begins pondering";
	damagedMessage = "Pondering deer is starting to struggle to think";
	defeatedMessage = "Pondering deer questions weather keeping fighting is worth it and leaves";
}

EnemyPonderingDeer::~EnemyPonderingDeer()
{
}

void EnemyPonderingDeer::rockMessage()
{
	std::cout << "The deer wonders weather it could crush you" << "\n";
}

void EnemyPonderingDeer::paperMessage()
{
	std::cout << "The pondering deeer questions weather covering you in acid would be effective" << "\n";
}

void EnemyPonderingDeer::scissorsMessage()
{
	std::cout << "The pondering deer consideres slicing you in half" << "\n";
}