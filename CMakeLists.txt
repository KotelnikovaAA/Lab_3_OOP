cmake_minimum_required(VERSION 3.17)
project(lab_3)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab_3 main.cpp
        TicTacToeApplication.cpp
        TicTacToeApplication.h
        GameView/GameConsoleViewModule.cpp
        GameView/GameConsoleViewModule.h
        GameController/AbstractGameController.h
        GameView/IObserver.h
        GameModel/RealGamePlayer.cpp
        GameModel/RealGamePlayer.h
        GameModel/BotGamePlayer.cpp
        GameModel/BotGamePlayer.h
        GameController/GameMenuController.cpp
        GameController/GameMenuController.h
        GameController/GamepadController.cpp
        GameController/GamepadController.h
        GameModel/GameSettings.cpp
        GameController/AbstractGameValidator.cpp
        GameController/AbstractGameValidator.h
        GameController/PlayerInputDataValidator.cpp
        GameController/PlayerActionsValidator.cpp
        GameController/PlayerActionsValidator.h
        GameController/PlayerInputDataValidator.h
        GameModel/GameSettings.h
        GameModel/ExternalGameField.cpp
        GameModel/ExternalGameField.h
        GameModel/InternalGameField.cpp
        GameModel/InternalGameField.h
        GameModel/ExternalGameCell.cpp
        GameModel/ExternalGameCell.h
        GameModel/InternalGameCell.cpp
        GameModel/InternalGameCell.h GameModel/AbstractGameField.h GameModel/AbstractGameCell.h GameModel/AbstractGamePlayer.cpp GameModel/AbstractGamePlayer.h GameModel/GameModelModule.cpp GameModel/GameModelModule.h)