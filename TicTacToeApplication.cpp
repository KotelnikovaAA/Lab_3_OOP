//
// Created by Anna on 12.01.2021.
//

#include <iostream>
#include "TicTacToeApplication.h"
#include "GameModel/GameModelModule.h"
#include "GameController/GameMenuController.h"
#include "GameView/GameConsoleViewModule.h"

void TicTacToe::TicTacToeApplication::launchGameApplication() {
        TicTacToeModelModule::GameModelModule model;
        TicTacToeViewModule::GameConsoleViewModule viewer(model);
        TicTacToeControllerModule::GameMenuController managerGameController(model);

        managerGameController.requestNewGameSettings();

        model.createNewGameArena(managerGameController.getGameSettings());
        model.startPlayingGame();
}
