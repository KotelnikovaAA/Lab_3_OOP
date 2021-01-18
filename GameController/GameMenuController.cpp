//
// Created by Anna on 13.01.2021.
//

#include <iostream>
#include <sstream>
#include "GameMenuController.h"


void TicTacToeControllerModule::GameMenuController::requestNewGameSettings() {
    requestGameMode();
    requestAllPlayerNames();
}

void TicTacToeControllerModule::GameMenuController::requestGameMode() {
    model_.requestObserversToPrintQuestionAboutGameMode();

    auto inputData = readUserInputData();
    
    std::istringstream dataStream(inputData);
    size_t userPlayersNumber;
    dataStream >> userPlayersNumber;
    if (validator_.isCorrectStreamStateAfterReadingInputData(dataStream)) {
        if (validator_.isAcceptableGameMode(userPlayersNumber)) {
            auto userGameMode = static_cast<TicTacToeModelModule::gameMode>(userPlayersNumber);
            customGameSettings.setGameMode(userGameMode);
            return;
        }
    }
    
    model_.requestObserversToPrintInfoAboutInvalidGameMode();
    requestGameMode();
}

void TicTacToeControllerModule::GameMenuController::requestAllPlayerNames() {
    requestPlayerName();
    if (isTwoPlayersGameModeSet() && isCurrentInterlocutorFirstPlayer()) {
        changeCurrentInterlocutorToSecondPlayer();
        requestPlayerName();
    }
}

void TicTacToeControllerModule::GameMenuController::requestPlayerName() {
    auto interlocutorId = static_cast<size_t>(currentInterlocutorId_);
    model_.requestObserversToPrintQuestionAboutPlayerName(interlocutorId);

    auto playerName = readUserInputData();
    if (validator_.isCorrectFormatOfEnteredPlayerName(playerName)) {
        customGameSettings.setPlayerNameById(currentInterlocutorId_, playerName);
    } else {
        model_.requestObserversToPrintInfoAboutInvalidPlayerNameFormat(currentInterlocutorId_);
        requestPlayerName();
    }
}

bool TicTacToeControllerModule::GameMenuController::isTwoPlayersGameModeSet() const {
    return customGameSettings.getGameMode() == TicTacToeModelModule::TWO_PLAYERS;
}

bool TicTacToeControllerModule::GameMenuController::isCurrentInterlocutorFirstPlayer() {
    return currentInterlocutorId_ == FIRST_PLAYER;
}

void TicTacToeControllerModule::GameMenuController::changeCurrentInterlocutorToSecondPlayer() {
    currentInterlocutorId_ = SECOND_PLAYER;
}

std::string TicTacToeControllerModule::GameMenuController::readUserInputData() {
    std::string inputData;
    std::cin >> inputData;

    return inputData;
}

TicTacToeModelModule::GameSettings TicTacToeControllerModule::GameMenuController::getGameSettings() const {
    return customGameSettings;
}
