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

	std::cout << "Please enter your name:\n";
	std::cin >> player->playerStats.name;

	clearScreen();

	bool gaming = true;
	while (gaming == true) {

		if (currentArea == 0) {
			writeText();
		}
		else if (currentArea == 1) {
			Enemy* enemy = new EvilFrogEnemy();
			Encounter* encounter = new Encounter(player, enemy);

			enemy = nullptr;
			delete enemy;

			encounter = nullptr;
			delete encounter;
		}
		else if (currentArea == 2) {
			writeText();
		}
		else if (currentArea >= 3 && currentArea <= 6) {
			// Forest enemies
		}
		else if (currentArea == 7) {
			writeText();
		}
		else if (currentArea >= 8 && currentArea <= 11) {
			// Mountain enemies
		}
		else if (currentArea == 12) {
			writeText();
		}
		else if (currentArea == 13) {
			// Big boss man
		}




		/// MAKE IT SO THAT CURRENT AREA CHANGES


	}




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
	}
	else if (currentArea == 2) {
		// leaving home );
	}
	else if (currentArea == 7) {
		// Enter the mountains
	}
	else if (currentArea == 12) {
		// Final boss coming
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

void GameStructure::finalScreen()
{

}
