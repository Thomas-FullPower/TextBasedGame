#include <iostream>
#include "GameStructure.h"
#include "Player.h"
#include "Encounter.h"


int main()
{
    std::cout << "Hello World!\n";
    
    //setbuf(stdout, NULL);
    

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

