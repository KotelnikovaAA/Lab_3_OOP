//
// Created by Anna on 12.01.2021.
//


#include "TicTacToeApplication.h"
#include "GameModel/GameModelModule.h"
#include "GameController/GameMenuController.h"
#include "GameView/GameConsoleViewModule.h"

void TicTacToe::TicTacToeApplication::launchGameApplication() {

    TicTacToeModelModule::GameModelModule model;
    TicTacToeViewModule::GameConsoleViewModule viewer(model); // create the viewer and subscribe to model
    TicTacToeControllerModule::GameMenuController managerGameController(model);

    managerGameController.requestGameMode();

// TODO: вот эта штука отсюда уйдет в модель


    for (auto currentObserver : model.getListObserves()) {
        currentObserver->printRequestPlayerNamesMessage();
    }
    managerGameController.requestPlayerNamesMessage();

    auto gameSettings = managerGameController.getGameSettings();
    model.createNewGameArena(gameSettings);


    startPlayingGame(); --- // некст строки это и есть этот метод
    managerGameController.requestFirstGameMove();
    while (!model.isReasonForStoppingGame()) {
        managerGameController.requestNextGameMove();
    }

    viewer.printReasonForStoppingGameMessage();

}
