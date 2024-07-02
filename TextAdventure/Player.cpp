#include "Player.h"

Player::Player()
{
	playerStats.maxHealth = 10;
	playerStats.currentHealth = playerStats.maxHealth;
	playerStats.rock = 5;
	playerStats.paper = 5;
	playerStats.scissors = 5;
}

Player::~Player()
{

}
