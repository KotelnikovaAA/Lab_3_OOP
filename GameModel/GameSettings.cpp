//
// Created by Anna on 13.01.2021.
//

#include "GameSettings.h"

void TicTacToeModelModule::GameSettings::setGameMode(const gameMode mode) {
    userGameMode_ = mode;
}

TicTacToeModelModule::gameMode TicTacToeModelModule::GameSettings::getGameMode() const {
    return userGameMode_;
}

void TicTacToeModelModule::GameSettings::setFirstPlayerName(const std::string name) {
    firstPlayerName_ = name;
}

std::string TicTacToeModelModule::GameSettings::getFirstPlayerName() const {
    return firstPlayerName_;
}

void TicTacToeModelModule::GameSettings::setSecondPlayerName(const std::string name) {
    secondPlayerName_ = name;
}

std::string TicTacToeModelModule::GameSettings::getSecondPlayerName() const {
    return secondPlayerName_;
}


