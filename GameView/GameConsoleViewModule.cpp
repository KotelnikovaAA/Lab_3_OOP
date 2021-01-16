//
// Created by Anna on 12.01.2021.
//

#include <iostream>
#include "GameConsoleViewModule.h"

void TicTacToeViewModule::GameConsoleViewModule::printRequestGameModeMessage() {
    std::cout << getPlayerNameById << GAME_MODE_REQUEST_MESSAGE << std::endl;
}

void TicTacToeViewModule::GameConsoleViewModule::printRequestPlayerNamesMessage() {
    std::cout << GAME_PLAYER_NAME_REQUEST_MESSAGE << std::endl;
}

void TicTacToeViewModule::GameConsoleViewModule::printInfoAboutInvalidGameMode() {
    std::cout << INVALID_GAME_MODE_MESSAGE << std::endl;
}
