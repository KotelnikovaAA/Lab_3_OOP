//
// Created by Anna on 13.01.2021.
//

#include <iostream>
#include <sstream>
#include "GameMenuController.h"


void TicTacToeControllerModule::GameMenuController::requestNewGameSettings() {
    requestGameMode();
}

void TicTacToeControllerModule::GameMenuController::requestGameMode() {
    model_.requestObserversToPrintQuestionAboutGameMode();

    std::string inputString;
    std::cin >> inputString;
    std::istringstream dataStream(inputString);

    size_t userPlayersNumber;
    dataStream >> userPlayersNumber;

    if (!validator_.isCorrectGameModeInput(dataStream, userPlayersNumber)) {
        model_.requestObserversToPrintInfoAboutInvalidGameMode();
        requestGameMode();
    } else {
        customGameSettings.setGameMode(static_cast<TicTacToeModelModule::gameMode>(userPlayersNumber));
    }
}


}
