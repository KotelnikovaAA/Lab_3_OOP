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

void TicTacToeViewModule::GameConsoleViewModule::printInfoAboutInvalidPlayerNameFormat(const size_t playerId) {
    std::cout << addressPlayerById(playerId) << INVALID_PLAYER_NAME_FORMAT_MESSAGE << std::endl;
}

void TicTacToeViewModule::GameConsoleViewModule::setPlayerNames(const std::string &firstPlayerName,
                                                                const std::string &secondPlayerName) {
    FIRST_PLAYER_ADDRESS = firstPlayerName;
    SECOND_PLAYER_ADDRESS = secondPlayerName;
}

void TicTacToeViewModule::GameConsoleViewModule::printQuestionAboutExternalCellCoordinate(const size_t playerId) {
    std::cout << addressPlayerById(playerId) << DOUBLE_CELL_COORDINATE_REQUEST_MESSAGE << std::endl;
}

std::string TicTacToeViewModule::GameConsoleViewModule::addressPlayerById(const size_t id) {
    return addressingPlayersByIdMap.at(id);
}
