#include "EnemyDavey.h"

EnemyDavey::EnemyDavey()
{
	enemyStats.maxHealth = 20;
	enemyStats.currentHealth = enemyStats.maxHealth;
	enemyStats.rock = 4;
	enemyStats.paper = 4;
	enemyStats.scissors = 4;
	enemyStats.name = "Davey";
	statIncrease = 1;

	encounterMessage = "Davey grabs his weapons: a hammer, a sword and a net and readys himself to fight";
	damagedMessage = "Davey is beginning to look tired";
	defeatedMessage = "Davey falls to his knees and admits defeat";
}

EnemyDavey::~EnemyDavey()
{
}

void EnemyDavey::rockMessage()
{
	std::cout << "Davey gets ready to swing his hammer" << "\n";
}

void EnemyDavey::paperMessage()
{
	std::cout << "Davey gets ready to throw his net" << "\n";
}

void EnemyDavey::scissorsMessage()
{
	std::cout << "Davey gets ready to swing his sword" << "\n";
}
