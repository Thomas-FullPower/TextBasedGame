#include "EnemyLiar.h"


EnemyLiar::EnemyLiar()
{
	enemyStats.maxHealth = 22;
	enemyStats.currentHealth = enemyStats.maxHealth;
	enemyStats.rock = 5;
	enemyStats.paper = 5;
	enemyStats.scissors = 5;
	enemyStats.name = "Liar";
	statIncrease = 1;

	encounterMessage = "You see no one in front of you but then you realise your being lied to";
	damagedMessage = "The smurk begins to fade off the liars face";
	defeatedMessage = "The liar believes itself to have won but knows its lying";
}

EnemyLiar::~EnemyLiar()
{
}

void EnemyLiar::rockMessage()
{
	std::cout << "The liar announces its gonna pick paper" << "\n";
}

void EnemyLiar::paperMessage()
{
	std::cout << "The liar announces its gonna pick scissors" << "\n";
}

void EnemyLiar::scissorsMessage()
{
	std::cout << "The liar announces its gonna pick rock" << "\n";
}
