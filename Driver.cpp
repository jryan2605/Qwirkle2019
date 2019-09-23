// Initial class with main method
// Used to initialise the game
#include "Qwirkle.h"
#include <iostream>

#define EXIT_SUCCESS 0

int main()
{
    std::cout << "Welcome to Qwirkle." << std::endl << std::endl;

    Qwirkle *qwirkleGame = new Qwirkle(2);
    qwirkleGame->start();

    delete qwirkleGame;

    return EXIT_SUCCESS;
}