//
// Created by Anna on 12.01.2021.
//

#include "GameModelModule.h"


void TicTacToeModelModule::GameModelModule::requestObserversToPrintQuestionAboutGameMode() {
        for (auto observer : listObservers_) {
        observer->printRequestGameModeMessage();
    }
}

void TicTacToeModelModule::GameModelModule::requestObserversToPrintInfoAboutInvalidGameMode() {
    for (auto observer : listObservers_) {
        observer->printInfoAboutInvalidGameMode();
    }
}