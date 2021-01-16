//
// Created by Anna on 14.01.2021.
//

#include "PlayerInputDataValidator.h"

void TicTacToeControllerModule::PlayerInputDataValidator::checkInputGameModeValidity(
        TicTacToeModelModule::gameMode userMode) {
    return isAcceptableGameMode(userMode);
}
