#include "Enemy.h"

Enemy::Enemy()
{
	enemyStats.maxHealth = 10;
	enemyStats.currentHealth = enemyStats.maxHealth;
	enemyStats.rock = 5;
	enemyStats.paper = 5;
	enemyStats.scissors = 5;
}

Enemy::~Enemy()
{

}