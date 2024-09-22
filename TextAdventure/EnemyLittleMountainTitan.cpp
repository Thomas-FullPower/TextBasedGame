#include "EnemyLittleMountainTitan.h"


EnemyLittleMountainTitan::EnemyLittleMountainTitan()
{
	enemyStats.maxHealth = 23;
	enemyStats.currentHealth = enemyStats.maxHealth;
	enemyStats.rock = 7;
	enemyStats.paper = 3;
	enemyStats.scissors = 4;
	enemyStats.name = "Little mountain titan";
	statIncrease = 1;

	encounterMessage = "The ground beneath your feet shakes and in front of you awakens a rock titan";
	damagedMessage = "The Little rock titan begins to crumble";
	defeatedMessage = "The rock titan erodes into rumble";
}

EnemyLittleMountainTitan::~EnemyLittleMountainTitan()
{
}

void EnemyLittleMountainTitan::rockMessage()
{
	std::cout << "The little rock titan lunges at you in order to crush you" << "\n";
}

void EnemyLittleMountainTitan::paperMessage()
{
	std::cout << "The Little rock titan starts an avalanche to cover you in rocks" << "\n";
}

void EnemyLittleMountainTitan::scissorsMessage()
{
	std::cout << "The little rock titan sharpens its edges in pereperation for an attack" << "\n";
}
