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
	std::cout << enemy->encounterMessage;
	PlayerPick();
	EnemyPick();
}

int Encounter::PlayerPick()
{
	std::cout << "Input Rock Paper or Scissors" << "\n";
	std::string input;
	std::cin >> input;

	if (input == "Rock" || input == "1") {
		//std::cout << "Rock" << "\n";
		return 1;
	}
	else if (input == "Paper" || input == "2") {
		//std::cout << "Paper" << "\n";
		return 2;
	}
	else if (input == "Scissors" || input == "3") {
		//std::cout << "Scissors" << "\n";
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


	return 0;
}
