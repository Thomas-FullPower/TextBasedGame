#include "Encounter.h"

Encounter::Encounter(Player* _player, Enemy* _enemy)
{
	player = _player;
	enemy = _enemy;

	Fight();
}

Encounter::~Encounter()
{
	player = nullptr;
	delete player;

	enemy = nullptr;
	delete enemy;
}

void Encounter::Fight()
{
	bool fighting = true;
	int playerPick;
	int enemyPick;

	std::cout << enemy->encounterMessage;
	while (fighting == true) {
		system("cls");
		std::cout << "Health: " << player->playerStats.currentHealth << "/" << player->playerStats.maxHealth << "  Rock: " << player->playerStats.rock << "  Paper: " << player->playerStats.paper << "  Scissors: " << player->playerStats.scissors << "\n";



		playerPick = PlayerPick();
		enemyPick = EnemyPick();

		if ((playerPick == 1 && enemyPick == 3) || (playerPick == 2 && enemyPick == 1) || (playerPick == 3 && enemyPick == 1)) {
			std::cout << "YOU WIN" << "\n";
			if (playerPick == 1) {
				enemy->enemyStats.currentHealth = enemy->enemyStats.currentHealth - player->playerStats.rock;
			}
			else if (playerPick == 2) {
				enemy->enemyStats.currentHealth = enemy->enemyStats.currentHealth - player->playerStats.paper;
			}
			else if (playerPick == 3) {
				enemy->enemyStats.currentHealth = enemy->enemyStats.currentHealth - player->playerStats.scissors;
			}

		}
		else if ((playerPick == 1 && enemyPick == 2) || (playerPick == 2 && enemyPick == 3) || (playerPick == 3 && enemyPick == 2)) {
			if (enemyPick == 1) {
				player->playerStats.currentHealth = player->playerStats.currentHealth - enemy->enemyStats.rock;
			}
			else if (enemyPick == 2) {
				player->playerStats.currentHealth = player->playerStats.currentHealth - enemy->enemyStats.paper;
			}
			else if (enemyPick == 3) {
				player->playerStats.currentHealth = player->playerStats.currentHealth - enemy->enemyStats.scissors;
			}



		}
		else if (playerPick == enemyPick) {
			std::cout << "YOU DRAW" << "\n";
		}
		else {
			std::cout << "how?" << "\n";
		}

		//std::cout << player->playerStats.currentHealth << enemy->enemyStats.currentHealth  << "\n";

	}
}

int Encounter::PlayerPick()
{
	std::cout << "Input Rock Paper or Scissors" << "\n";
	std::string input;
	std::cin >> input;

	if (input == "Rock" || input == "1") {
		std::cout << "player picks Rock" << "\n";
		return 1;
	}
	else if (input == "Paper" || input == "2") {
		std::cout << "player picks Paper" << "\n";
		return 2;
	}
	else if (input == "Scissors" || input == "3") {
		std::cout << "player picks Scissors" << "\n";
		return 3;
	}
	else {
		return 0;
	}

}

int Encounter::EnemyPick()
{
	//std::cout << (std::rand() % 3) + 1 << "\n";
	int choice = (std::rand() % 3) + 1;

	if (choice == 1) {
		enemy->rockMessage();
	}
	else if (choice == 2) {
		enemy->paperMessage();
	}
	else if (choice == 3) {
		enemy->scissorsMessage();
	}
	else {
		std::cout << "The fuck?" << "\n";
	}


	return choice;
}
