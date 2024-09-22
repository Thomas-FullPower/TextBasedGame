#include "EnemyToughGuy.h"

EnemyToughGuy::EnemyToughGuy()
{
	enemyStats.maxHealth = 20;
	enemyStats.currentHealth = enemyStats.maxHealth;
	enemyStats.rock = 6;
	enemyStats.paper = 7;
	enemyStats.scissors = 4;
	enemyStats.name = "Tough guy";
	statIncrease = 1;

	encounterMessage = "A very tough looking person postures in your direction";
	damagedMessage = "The tough guy starts to loose its confidence";
	defeatedMessage = "The tough guy bursts into tiers and runs home";
}

EnemyToughGuy::~EnemyToughGuy()
{
}

void EnemyToughGuy::rockMessage()
{
	std::cout << "The tough guy asks weather the economy is solid enough to support everyone who lives within it" << "\n";
}

void EnemyToughGuy::paperMessage()
{
	std::cout << "The tough guy asks weather you can truely be sure if literature can be preserved" << "\n";
}

void EnemyToughGuy::scissorsMessage()
{
	std::cout << "The tough guy asks if you can really make a change using a blade at war" << "\n";
}