//
// Created by Anna on 14.01.2021.
//

// TODO: check &&, not &!!!!!

#include <algorithm>
#include "PlayerInputDataValidator.h"

bool TicTacToeControllerModule::PlayerInputDataValidator::isAcceptableGameMode(const size_t mode) {
    return (static_cast<TicTacToeModelModule::gameMode>(mode) == TicTacToeModelModule::ONE_PLAYER ||
            static_cast<TicTacToeModelModule::gameMode>(mode) == TicTacToeModelModule::TWO_PLAYERS);
}

bool TicTacToeControllerModule::PlayerInputDataValidator::isCorrectFormatOfEnteredPlayerName(const std::string &name) {
    return (!isEmptyInputString(name) && isSingleWordString(name));
}

bool TicTacToeControllerModule::PlayerInputDataValidator::isEmptyInputString(const std::string &inputString) {
    return inputString.empty();
}

bool TicTacToeControllerModule::PlayerInputDataValidator::isSingleWordString(const std::string &inputString) {
    return std::count(inputString.begin(), inputString.end(), WHITESPACE);
}
