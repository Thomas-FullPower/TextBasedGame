#include "Encounter.h"

Encounter::Encounter(Player* _player, Enemy* _enemy)
{
	player = _player;
	enemy = _enemy;

	bool choosing = true;
	if (Fight() == 1) {

		while (choosing == true) {
			system("cls");
			std::cout << "Health: " << player->playerStats.currentHealth << "/" << player->playerStats.maxHealth << "  Rock: " << player->playerStats.rock << "  Paper: " << player->playerStats.paper << "  Scissors: " << player->playerStats.scissors << "\n";
			std::cout << "\n";

			std::cout << "You can increase a stat by " << enemy->statIncrease << "\nDo you choose Rock Paper or Scissors?\n";

			std::string stat;
			std::cin >> stat;
			std::cout << "\n";

			for (int i = 0; i < stat.length(); i++) {
				stat[i] = tolower(stat[i]);
			}

			if (stat == "rock" || stat == "1") {
				player->playerStats.rock = player->playerStats.rock + enemy->statIncrease;
				std::cout << "Rock increased to " << player->playerStats.rock << "\n";

				choosing = false;

			}
			else if (stat == "paper" || stat == "2") {
				player->playerStats.paper = player->playerStats.paper + enemy->statIncrease;
				std::cout << "Paper increased to " << player->playerStats.paper << "\n";

				choosing = false;

			}
			else if (stat == "scissors" || stat == "3") {
				player->playerStats.scissors = player->playerStats.scissors + enemy->statIncrease;
				std::cout << "Scissors increased to " << player->playerStats.scissors << "\n";

				choosing = false;
			}
			else {
				std::cout << "Not a valid input" << "\n";
			}
			std::cin.ignore(2);
		}

	}

	
}

Encounter::~Encounter()
{
	player = nullptr;
	delete player;

	enemy = nullptr;
	delete enemy;
}

int Encounter::Fight()
{
	bool fighting = true;
	int playerPick;
	int enemyPick;

	system("cls");
	std::cout << "Health: " << player->playerStats.currentHealth << "/" << player->playerStats.maxHealth << "  Rock: " << player->playerStats.rock << "  Paper: " << player->playerStats.paper << "  Scissors: " << player->playerStats.scissors << "\n";
	std::cout << "\n" <<enemy->encounterMessage << "\n";
	std::cin.ignore(1);

	while (fighting == true) {
		system("cls");
		std::cout << "Health: " << player->playerStats.currentHealth << "/" << player->playerStats.maxHealth << "  Rock: " << player->playerStats.rock << "  Paper: " << player->playerStats.paper << "  Scissors: " << player->playerStats.scissors << "\n";
		
		if (enemy->enemyStats.maxHealth / 3 > enemy->enemyStats.currentHealth) {
			std::cout << "\n" << enemy->damagedMessage;
		}

		std::cout << "\n";
		enemyPick = EnemyPick();
		playerPick = PlayerPick();

		if (enemyPick == 1) {
			std::cout << enemy->enemyStats.name << " picks Rock" << "\n";
		}
		else if (enemyPick == 2) {
			std::cout << enemy->enemyStats.name << " picks Paper" << "\n";
		}
		else if (enemyPick == 3) {
			std::cout << enemy->enemyStats.name << " picks Scissors" << "\n";
		}

		if ((playerPick == 1 && enemyPick == 3) || (playerPick == 2 && enemyPick == 1) || (playerPick == 3 && enemyPick == 2)) {
			std::cout << player->playerStats.name << " deals ";
			if (playerPick == 1) {
				std::cout << player->playerStats.rock;
				enemy->enemyStats.currentHealth = enemy->enemyStats.currentHealth - player->playerStats.rock;
			}
			else if (playerPick == 2) {
				std::cout << player->playerStats.paper;
				enemy->enemyStats.currentHealth = enemy->enemyStats.currentHealth - player->playerStats.paper;
			}
			else if (playerPick == 3) {
				std::cout << player->playerStats.scissors;
				enemy->enemyStats.currentHealth = enemy->enemyStats.currentHealth - player->playerStats.scissors;
			}
			std::cout << " damage to " << enemy->enemyStats.name <<"\n";

		}
		else if ((playerPick == 1 && enemyPick == 2) || (playerPick == 2 && enemyPick == 3) || (playerPick == 3 && enemyPick == 1) || playerPick == 0) {
			std::cout << player->playerStats.name << " recives ";
			if (enemyPick == 1) {
				std::cout << enemy->enemyStats.rock;
				player->playerStats.currentHealth = player->playerStats.currentHealth - enemy->enemyStats.rock;
			}
			else if (enemyPick == 2) {
				std::cout << enemy->enemyStats.paper;
				player->playerStats.currentHealth = player->playerStats.currentHealth - enemy->enemyStats.paper;
			}
			else if (enemyPick == 3) {
				std::cout << enemy->enemyStats.scissors;
				player->playerStats.currentHealth = player->playerStats.currentHealth - enemy->enemyStats.scissors;
			}
			std::cout << " damage from " << enemy->enemyStats.name << "\n";


		}
		else if (playerPick == enemyPick) {
			std::cout << "No damage is dealt or recived" << "\n";
		}
		else {
			
		}

		//std::cout << player->playerStats.currentHealth << enemy->enemyStats.currentHealth  << "\n";
		
		if (enemy->enemyStats.currentHealth <= 0) {
			std::cout << "\n" << enemy->defeatedMessage;
			std::cin.ignore(2);
			return 1;
		}

		std::cin.ignore(2);


		if (player->playerStats.currentHealth <= 0) {
			fighting = false;
			return 0;
		}
		


	}
}

int Encounter::PlayerPick()
{
	std::cout << "\n" << "Input Rock Paper or Scissors:" << "\n";
	std::string input;
	std::cin >> input;
	std::cout << "\n";

	for (int i = 0; i < input.length(); i++) {
		input[i] = tolower(input[i]);
	}

	if (input == "rock" || input == "1") {
		std::cout << player->playerStats.name << " picks Rock" << "\n";
		return 1;
	}
	else if (input == "paper" || input == "2") {
		std::cout << player->playerStats.name << " picks Paper" << "\n";
		return 2;
	}
	else if (input == "scissors" || input == "3") {
		std::cout << player->playerStats.name << " picks Scissors" << "\n";
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
		return 0;
	}


	return choice;
}
