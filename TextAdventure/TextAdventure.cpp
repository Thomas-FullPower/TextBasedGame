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

        delete player;
        player = nullptr;

        delete game;
        game = nullptr;
    }
    
}

