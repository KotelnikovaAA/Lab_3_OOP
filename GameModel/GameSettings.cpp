//
// Created by Anna on 13.01.2021.
//

#include <iostream>
#include "GameSettings.h"

void TicTacToeModelModule::GameSettings::setGameMode(const gameMode mode) {
    userGameMode_ = mode;
}

TicTacToeModelModule::gameMode TicTacToeModelModule::GameSettings::getGameMode() const {
    return userGameMode_;
}

void TicTacToeModelModule::GameSettings::setPlayerNameById(const size_t playerId, const std::string &name) {
    playerNamesByIdMap[playerId] = name;
}

std::string TicTacToeModelModule::GameSettings::getPlayerNameById(const size_t playerId) const {
    return playerNamesByIdMap.at(playerId);
}