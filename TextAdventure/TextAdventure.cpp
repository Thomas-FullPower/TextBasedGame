#include <iostream>
#include "GameStructure.h"
#include "Player.h"
#include "Enemy.h"
#include "EvilFrogEnemy.h"
#include "Encounter.h"


int main()
{
    std::cout << "Hello World!\n";
    

    while (true) {
        Player* player = new Player();
        GameStructure* game = new GameStructure(player);

        game->gameLoop() == false;

        player = nullptr;
        delete player;

        game = nullptr;
        delete game;
    }
    
}

