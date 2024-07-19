#include "EvilFrogEnemy.h"

EvilFrogEnemy::EvilFrogEnemy()
{
	enemyStats.maxHealth = 14; 
	enemyStats.currentHealth = enemyStats.maxHealth;
	enemyStats.rock = 3;
	enemyStats.paper = 5;
	enemyStats.scissors = 4;
	enemyStats.name = "Evil Frog";
	statIncrease = 2;

	encounterMessage = "An Evil Frog lands in front of you";
	damagedMessage = "The Evil Frogs rage burns bright as it starts to look injered";
	defeatedMessage = "In its last monents the Evil Frog realised the error in its ways and dies peacefully";
}

EvilFrogEnemy::~EvilFrogEnemy()
{
}

void EvilFrogEnemy::rockMessage()
{
	std::cout << "Looking into the Evil Frogs eyes you see only a heart of stone" << "\n";
}

void EvilFrogEnemy::paperMessage()
{
	std::cout << "The Evil Frog is covered in a dark menacing slime witch is abhorrent to the touch " << "\n";
}

void EvilFrogEnemy::scissorsMessage()
{
	std::cout << "The Evil Frog croaks a sharp croak" << "\n";
}
