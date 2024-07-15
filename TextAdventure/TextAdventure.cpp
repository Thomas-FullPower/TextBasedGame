#include <iostream>
#include "GameStructure.h"
#include "Player.h"
#include "Enemy.h"
#include "EvilFrogEnemy.h"
#include "Encounter.h"


void init();

int main()
{
    std::cout << "Hello World!\n";
    init();

    //Player* player = new Player();
    //Enemy* enemy = new EvilFrogEnemy();

    //Encounter* encounter = new Encounter(player, enemy);
    //encounter = nullptr;
    //delete encounter;
    


}

void init() {
    //std::cout << "INITIALISING\n";
    Player* player = new Player();
    GameStructure* game = new GameStructure(player);

    while (game->gameLoop() == false);

}

