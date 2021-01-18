//
// Created by Anna on 12.01.2021.
//

#include <iostream>
#include "GameConsoleViewModule.h"

void TicTacToeViewModule::GameConsoleViewModule::printRequestGameModeMessage() {
    std::cout << GAME_MODE_REQUEST_MESSAGE << std::endl;
}

void TicTacToeViewModule::GameConsoleViewModule::printInfoAboutInvalidGameMode() {
    std::cout << INVALID_GAME_MODE_MESSAGE << std::endl;
}

void TicTacToeViewModule::GameConsoleViewModule::printRequestPlayerNameMessage(const size_t playerId) {
    std::cout << addressPlayerById(playerId) << PLAYER_NAME_REQUEST_MESSAGE << std::endl;
}

std::string TicTacToeViewModule::GameConsoleViewModule::addressPlayerById(size_t id) {
        return addressingPlayersByIdMap.at(id);
}

void TicTacToeViewModule::GameConsoleViewModule::printInfoAboutInvalidPlayerNameFormat(const size_t playerId) {
    std::cout << addressPlayerById(playerId) << INVALID_PLAYER_NAME_FORMAT_MESSAGE << std::endl;
}
