#include <iostream>
#include "TicTacToeApplication.h"

int main() {

    // TODO: write catch part
    try {
        TicTacToe::TicTacToeApplication gameApplication;
        gameApplication.launchGameApplication();
    } catch (...) {

    }

    return EXIT_SUCCESS;
}


// TODO: вынести enum gameMode в