#include "Enemy.h"

Enemy::Enemy()
{
	enemyStats.maxHealth = 10;
	enemyStats.currentHealth = enemyStats.maxHealth;
	enemyStats.rock = 5;
	enemyStats.paper = 5;
	enemyStats.scissors = 5;
	enemyStats.name = "enemy";

	encounterMessage = "An enemy appears";
	damagedMessage = "Enemy is on its last legs";
	defeatedMessage = "Enemy is defeated";

}

Enemy::~Enemy()
{

}


void Enemy::rockMessage()
{
	std::cout << "Motherfucker bouta pick rock" << "\n";
}

void Enemy::paperMessage()
{
	std::cout << "Motherfucker bouta pick paper" << "\n";
}

void Enemy::scissorsMessage()
{
	std::cout << "Motherfucker bouta pick scissors" << "\n";
}
