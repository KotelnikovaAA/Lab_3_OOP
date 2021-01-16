//
// Created by Anna on 12.01.2021.
//

#ifndef LAB_3_GAMECONSOLEVIEWMODULE_H
#define LAB_3_GAMECONSOLEVIEWMODULE_H

#include "IObserver.h"
#include "../GameModel/GameModelModule.h"

#include <map>

namespace TicTacToeViewModule {

    class GameConsoleViewModule : public IObserver {
    private:
        TicTacToeModelModule::GameModelModule &model_;

        const std::string GAME_MODE_REQUEST_MESSAGE = "Please enter the number of players: \n";
        const std::string GAME_PLAYER_NAME_REQUEST_MESSAGE = "Please enter player name: \n";
        const std::string INVALID_GAME_MODE_MESSAGE = "Invalid players number entered. Please enter again. \n";


    public:
        explicit GameConsoleViewModule(TicTacToeModelModule::GameModelModule &model) : model_(model) {};

        ~GameConsoleViewModule() override;

        void update() override;

        void printRequestGameModeMessage() override;

        void printRequestPlayerNamesMessage() override;

        void printInfoAboutInvalidGameMode() override;

        void printReasonForStoppingGameMessage() override;


    };

}

#endif //LAB_3_GAMECONSOLEVIEWMODULE_H
