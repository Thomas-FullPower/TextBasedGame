#include "EnemyRockyGhoul.h"

EnemyRockyGhoul::EnemyRockyGhoul()
{
	enemyStats.maxHealth = 21;
	enemyStats.currentHealth = enemyStats.maxHealth;
	enemyStats.rock = 4;
	enemyStats.paper = 5;
	enemyStats.scissors = 6;
	enemyStats.name = "Rocky ghoul";
	statIncrease = 1;

	encounterMessage = "A sense of fear fills the area, a rocky ghoul is nearby";
	damagedMessage = "The rocky ghoul begins to fade";
	defeatedMessage = "You hear loud screams as the ghoul dissapears";
}

EnemyRockyGhoul::~EnemyRockyGhoul()
{
}

void EnemyRockyGhoul::rockMessage()
{
	std::cout << "The ground beneith you begins to animate" << "\n";
}

void EnemyRockyGhoul::paperMessage()
{
	std::cout << "A thick mist covers the area" << "\n";
}

void EnemyRockyGhoul::scissorsMessage()
{
	std::cout << "You feel a sharp pain in your chest" << "\n";
}
