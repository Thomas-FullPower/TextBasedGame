#include "GameStructure.h"

GameStructure::GameStructure(Player* player)
{
	this->player = player;
	currentArea = 0;
}

GameStructure::~GameStructure()
{
	player = nullptr;
	delete player;
}

bool GameStructure::gameLoop() // return false if loose and true if win
{
	titleScreen();
	clearScreen();

	bool gaming = true;
	while (gaming == true) {
		writeText();
		if (currentArea != 0) {
			if (currentArea == 1) {
				Enemy* enemy = new EvilFrogEnemy();
				Encounter* fight = new Encounter(player, enemy);

				enemy = nullptr;
				delete enemy;
				
				fight = nullptr;
				delete fight;
			}


			//ask if you want to go forwards or back
			currentArea++;

		}

	}

	writeText();



	std::cin.ignore(1);
	return false;
}

void GameStructure::writeText()
{
	if (currentArea == 0) {
		for (char character : "Hello my name is tom i like to plarty all the time") {
			std::cout << character;
			Sleep(50);
		}
		std::cin.ignore(1);
		std::cout << "\n";
		for (char character : "Hello my name is tom i like to plarty all the time") {
			std::cout << character;
			Sleep(50);
		}
		std::cin.ignore(1);

		currentArea++;
	}
}

void GameStructure::titleScreen()
{
	system("cls");
	std::cout << "This is the titleScreen :)" << "\n";
	std::cin.ignore(1);
}

void GameStructure::clearScreen()
{
	system("cls");
	std::cout << "Health: " << player->playerStats.currentHealth << "/" << player->playerStats.maxHealth << "  Rock: " << player->playerStats.rock << "  Paper: " << player->playerStats.paper << "  Scissors: " << player->playerStats.scissors << "\n";
	std::cout << "\n";
}
