#include "EnemyAgressiveShrub.h"

EnemyAgressiveShrub::EnemyAgressiveShrub()
{
	enemyStats.maxHealth = 14;
	enemyStats.currentHealth = enemyStats.maxHealth;
	enemyStats.rock = 1;
	enemyStats.paper = 3;
	enemyStats.scissors = 4;
	enemyStats.name = "Agressive shrub";
	statIncrease = 1;

	encounterMessage = "An agressive shrub rustles in your direction";
	damagedMessage = "Leaves are starting to fall off the shrub";
	defeatedMessage = "The agressive shrub falls over as its leaves wither away";
}

EnemyAgressiveShrub::~EnemyAgressiveShrub()
{
}

void EnemyAgressiveShrub::rockMessage()
{
	std::cout << "The agressive shrub gathers the surrounding greenery into a ball to crush you with" << "\n";
}

void EnemyAgressiveShrub::paperMessage()
{
	std::cout << "The agressive shrub prepares to lunge at you and cover you in leaves" << "\n";
}

void EnemyAgressiveShrub::scissorsMessage()
{
	std::cout << "The thorns on the shrub sharpen in an agressive way" << "\n";
}
