
#include <iostream>
#include <ctime>

#include "TicTacToeApplication.h"
#include "GameModel/ExternalGameField.h"


int main() {
    srand(time(0));

    try {
        TicTacToe::TicTacToeApplication gameApplication;
        gameApplication.launchGameApplication();
    } catch (std::exception &exception) {
        std::cerr << exception.what() << std::endl;
    }

    return EXIT_SUCCESS;
}
