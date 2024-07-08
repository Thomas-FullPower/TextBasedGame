#include <iostream>
#include "Player.h"
#include "Enemy.h"
#include "Encounter.h"

void init();

int main()
{
    std::cout << "Hello World!\n";
    init();

    Player* player = new Player();
    Enemy* enemy = new Enemy();

    Encounter* encounter = new Encounter(player, enemy);
}

void init() {
    std::cout << "INITIALISING\n";


}

