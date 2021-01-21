cmake_minimum_required(VERSION 3.17)
project(lab_3)

set(CMAKE_CXX_STANDARD 17)

set(GCC_COVERAGE_COMPILE_FLAGS "-static")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")

add_executable(lab_3 main.cpp
        TicTacToeApplication.cpp
        TicTacToeApplication.h
        GameView/GameConsoleViewModule.cpp
        GameView/GameConsoleViewModule.h
        GameView/IObserver.h
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
        GameModel/InternalGameCell.h
        GameModel/GameModelModule.cpp
        GameModel/GameModelModule.h
        GameModel/AbstractGamePlayer.h
        GameModel/RealGamePlayer.cpp
        GameModel/RealGamePlayer.h
        GameModel/BotGamePlayer.cpp
        GameModel/BotGamePlayer.h
        GameModel/GameLabelTypesEnum.h
        GameModel/GameWinnerEnum.h
        GameController/InterlocutorsIdEnum.h
        GameModel/SpecialGameValues.h
        GameView/OutputMessageDatabase.h
        GameModel/PermissibleGameModes.h
        GameView/OutputFormattingElements.h)