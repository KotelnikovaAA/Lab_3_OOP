cmake_minimum_required(VERSION 3.17)
project(lab_3)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab_3 main.cpp
        TicTacToeApplication.cpp
        TicTacToeApplication.h
        GameModel/AbstractGameField.h
        GameModel/AbstractGameLabel.h
        GameModel/AbstractGamePlayer.h
        GameModel/AbstractGamePlayer.cpp
        GameModel/GameModelModule.cpp
        GameModel/GameModelModule.h
        GameView/GameConsoleViewModule.cpp
        GameView/GameConsoleViewModule.h
        GameController/AbstractGameController.cpp
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
        GameModel/GameSettings.h GameController/AbstractGameValidator.cpp GameController/AbstractGameValidator.h GameController/PlayerInputDataValidator.cpp GameController/PlayerInputDataValidator.h GameController/PlayerActionsValidator.cpp GameController/PlayerActionsValidator.h)