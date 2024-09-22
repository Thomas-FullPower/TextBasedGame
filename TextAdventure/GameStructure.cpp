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

			Enemy* enemy = new EnemyDavey();
			Encounter* encounter = new Encounter(player, enemy);

			if (encounter->victory == false) {
				deathScreen();
				gaming = false;
				return false;
			}

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

			int choice = (std::rand() % 4) + 1;

			if (choice == 1) {
				Enemy* enemy = new EvilFrogEnemy();
				Encounter* encounter = new Encounter(player, enemy);

				if (encounter->victory == false) {
					deathScreen();
					gaming = false;
					return false;
				}

				enemy = nullptr;
				delete enemy;

				encounter = nullptr;
				delete encounter;
			}
			else if (choice == 2) {
				Enemy* enemy = new EnemyAgressiveShrub();
				Encounter* encounter = new Encounter(player, enemy);

				if (encounter->victory == false) {
					deathScreen();
					gaming = false;
					return false;
				}

				enemy = nullptr;
				delete enemy;

				encounter = nullptr;
				delete encounter;
			}
			else if (choice == 3) {
				Enemy* enemy = new EnemyPonderingDeer();
				Encounter* encounter = new Encounter(player, enemy);

				if (encounter->victory == false) {
					deathScreen();
					gaming = false;
					return false;
				}

				enemy = nullptr;
				delete enemy;

				encounter = nullptr;
				delete encounter;
			}
			else if (choice == 4) {
				Enemy* enemy = new EnemyCursedFlowers();
				Encounter* encounter = new Encounter(player, enemy);

				if (encounter->victory == false) {
					deathScreen();
					gaming = false;
					return false;
				}

				enemy = nullptr;
				delete enemy;

				encounter = nullptr;
				delete encounter;
			}



		}
		else if (currentArea == 7) {
			writeText();
		}
		else if (currentArea >= 8 && currentArea <= 11) {
			// Mountain enemies

			int choice = (std::rand() % 4) + 1;

			if (choice == 1) {
				Enemy* enemy = new EnemyLittleMountainTitan();
				Encounter* encounter = new Encounter(player, enemy);

				if (encounter->victory == false) {
					deathScreen();
					gaming = false;
					return false;
				}

				enemy = nullptr;
				delete enemy;

				encounter = nullptr;
				delete encounter;
			}
			else if (choice == 2) {
				Enemy* enemy = new EnemyLiar();
				Encounter* encounter = new Encounter(player, enemy);

				if (encounter->victory == false) {
					deathScreen();
					gaming = false;
					return false;
				}

				enemy = nullptr;
				delete enemy;

				encounter = nullptr;
				delete encounter;
			}
			else if (choice == 3) {
				Enemy* enemy = new EnemyRockyGhoul();
				Encounter* encounter = new Encounter(player, enemy);

				if (encounter->victory == false) {
					deathScreen();
					gaming = false;
					return false;
				}

				enemy = nullptr;
				delete enemy;

				encounter = nullptr;
				delete encounter;
			}
			else if (choice == 4) {
				Enemy* enemy = new EnemyToughGuy();
				Encounter* encounter = new Encounter(player, enemy);

				if (encounter->victory == false) {
					deathScreen();
					gaming = false;
					return false;
				}

				enemy = nullptr;
				delete enemy;

				encounter = nullptr;
				delete encounter;
			}


		}
		else if (currentArea == 12) {
			writeText();
		}
		else if (currentArea == 13) {
			// Big boss man

			Enemy* enemy = new BossTitan ();
			Encounter* encounter = new Encounter(player, enemy);

			if (encounter->victory == false) {
				deathScreen();
				gaming = false;
				return false;
			}

			enemy = nullptr;
			delete enemy;

			encounter = nullptr;
			delete encounter;



		}

		if (gaming == true) {
			areaChange();
		}

	}




	std::cin.ignore(1);
	return false;
}

void GameStructure::writeText()
{
	clearScreen();
	if (currentArea == 0) {
		for (char character : "At the top of the mountain is said to lie treasures of unspeakable value") {
			std::cout << character;
			Sleep(50);
		}
		std::cin.ignore(2);
		std::cout << "\n";
		for (char character : "No one has ever dared to climb the mountain due to the dangers that lay and wait") {
			std::cout << character;
			Sleep(50);
		}
		std::cin.ignore(1);
		std::cout << "\n";
		for (char character : "But you decide one day you were going to be the first") {
			std::cout << character;
			Sleep(50);
		}
		std::cin.ignore(1);

		clearScreen();

		for (char character : "'I AM GOING TO CLIMB THE MOUNTAIN' you claim") {
			std::cout << character;
			Sleep(50);
		}
		std::cin.ignore(1);
		std::cout << "\n";
		for (char character : "Davey, who you are talking to laughs at the idea, before realising you are serious") {
			std::cout << character;
			Sleep(50);
		}
		std::cin.ignore(1);
		std::cout << "\n";
		for (char character : "'You think you can climb the mountain? Well, I will not let you go unless you best me in a fight' he claims with upmost confidence") {
			std::cout << character;
			Sleep(50);
		}
		std::cin.ignore(1);




	}
	else if (currentArea == 2) {
		// leaving home );
		for (char character : "'You have become powerful, far more powerful than me' he pants ") {
			std::cout << character;
			Sleep(50);
		}
		std::cin.ignore(2);
		std::cout << "\n";
		for (char character : "'I see now you may be ready to climb the mountain, I wish you luck'") {
			std::cout << character;
			Sleep(50);
		}
		std::cin.ignore(1);

		clearScreen();

		for (char character : "The next day you pack to leave and head off into the forest between the mountains and the city") {
			std::cout << character;
			Sleep(50);
		}
		std::cin.ignore(1);
		std::cout << "\n";
		for (char character : "Adventure awaits") {
			std::cout << character;
			Sleep(50);
		}
		std::cin.ignore(1);
	}
	else if (currentArea == 7) {
		// Enter the mountains
			for (char character : "You come to the end of the forest and decide to set up camp before what is ahead") {
				std::cout << character;
				Sleep(50);
			}
			std::cin.ignore(2);
			std::cout << "\n";
			for (char character : "Throughout the night you hear rumblings and a loud roar") {
				std::cout << character;
				Sleep(50);
			}
			std::cin.ignore(1);
			std::cout << "\n";
			for (char character : "Something is waiting for you") {
				std::cout << character;
				Sleep(50);
			}
			std::cin.ignore(1);
	}
	else if (currentArea == 12) {
		// Final boss coming
		for (char character : "Ahead of you, you see a massive creature the size of a mountain and seemly made of stone") {
			std::cout << character;
			Sleep(50);
		}
		std::cin.ignore(2);
		std::cout << "\n";
		for (char character : "This is your last chance to rest before facing the creature") {
			std::cout << character;
			Sleep(50);
		}
		std::cin.ignore(1);
		std::cout << "\n";
		for (char character : "You set up camp awaiting the upcoming challenge") {
			std::cout << character;
			Sleep(50);
		}
		std::cin.ignore(1);
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

void GameStructure::deathScreen()
{
	clearScreen();

	std::cout << "You have been defeated\n\nTry harder next time";
	std::cin.ignore(1);

}

void GameStructure::areaChange()
{
	if (currentArea == 0 || currentArea == 1 || currentArea == 2) {
		currentArea++;
	}
	else if (currentArea == 3 || currentArea == 7) {
		//no turning back
		clearScreen();
		std::cout << "There is no turning back now\n\nYou head deeper towards your goal\n";
		currentArea++;
		std::cin.ignore(1);

	}
	else if (currentArea >= 4 && currentArea <= 6) {
		//onward through the forest
		clearScreen();
		std::cout << "Do you choose to go deeper into the forest or will you turn back to fight an enemy closer to home?\n\nDeeper or Closer?\n\n";
		std::string choice;
		std::cin >> choice;
		for (int i = 0; i < choice.length(); i++) {
			choice[i] = tolower(choice[i]);
		}
		if (choice == "deeper") {
			currentArea++;
			std::cout << "You go deeper";
		}
		else if (choice == "closer") {
			currentArea--;
			std::cout << "You return closer";
		}
		else {
			currentArea++;
			std::cout << "Indecisive in your decision you decide to go deeper";
		}
		std::cin.ignore(2);

	}
	else if (currentArea == 8) {
		//return to safe haven to heal
		clearScreen();
		std::cout << "Do you choose to go deeper into the mountains or will you return to camp?\n\nDeeper or Closer?\n\n";
		std::string choice;
		std::cin >> choice;
		for (int i = 0; i < choice.length(); i++) {
			choice[i] = tolower(choice[i]);
		}
		if (choice == "deeper") {
			currentArea++;
			std::cout << "You go deeper";
		}
		else if (choice == "closer") {
			currentArea--;
			std::cout << "You return closer";
		}
		else {
			currentArea++;
			std::cout << "Indecisive in your decision you decide to go deeper";
		}
		std::cin.ignore(2);


	}
	else if (currentArea >= 9 && currentArea <= 11) {
		//onward through the mountains
		clearScreen();
		std::cout << "Do you choose to go deeper into the mountains or will you turn back to fight an enemy closer to camp?\n\nDeeper or Closer?\n\n";
		std::string choice;
		std::cin >> choice;
		for (int i = 0; i < choice.length(); i++) {
			choice[i] = tolower(choice[i]);
		}
		if (choice == "deeper") {
			currentArea++;
			std::cout << "You go deeper";
		}
		else if (choice == "closer") {
			currentArea--;
			std::cout << "You return closer";
		}
		else {
			currentArea++;
			std::cout << "Indecisive in your decision you decide to go deeper";
		}
		std::cin.ignore(2);

	}
	else if (currentArea == 12) {
		//are you ready to fight big boss man?

		clearScreen();
		std::cout << "Do you choose to fight the monster or return closer to camp and fight a regular enemy\n\nFight or Return?\n\n";
		std::string choice;
		std::cin >> choice;
		for (int i = 0; i < choice.length(); i++) {
			choice[i] = tolower(choice[i]);
		}
		if (choice == "fight") {
			currentArea++;
			std::cout << "You approach the monster";
		}
		else if (choice == "return") {
			currentArea--;
			std::cout << "You return closer";
		}
		else {
			currentArea++;
			std::cout << "Indecisive in your decision you decide to fight";
		}
		std::cin.ignore(2);

	}
}
