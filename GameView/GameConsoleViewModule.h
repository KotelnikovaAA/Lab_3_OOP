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

        const std::string GAME_MODE_REQUEST_MESSAGE = "Please enter the number of players (1 or 2): \n";
        const std::string PLAYER_NAME_REQUEST_MESSAGE = "Please enter player name: \n";
        const std::string INVALID_GAME_MODE_MESSAGE = "Invalid players number was entered. Please enter again. \n";
        const std::string INVALID_PLAYER_NAME_FORMAT_MESSAGE = "Incorrect player name were entered. Please enter again. \n";

        const std::string FIRST_PLAYER_ADDRESS = "[FIRST_PLAYER] ";
        const std::string SECOND_PLAYER_ADDRESS = "[SECOND_PLAYER] ";

        const std::map<size_t, std::string> addressingPlayersByIdMap {
                {TicTacToeModelModule::FIRST_PLAYER_ID, FIRST_PLAYER_ADDRESS},
                {TicTacToeModelModule::SECOND_PLAYER_ID, SECOND_PLAYER_ADDRESS}
        };

        std::string addressPlayerById(size_t id);

    public:
        explicit GameConsoleViewModule(TicTacToeModelModule::GameModelModule &model) : model_(model) {
            model_.attachObserver(this);
        };

        ~GameConsoleViewModule() override {
            model_.detachObserver(this);
        };

        void update() override;

        void printRequestGameModeMessage() override;

        void printInfoAboutInvalidGameMode() override;

        void printRequestPlayerNameMessage(size_t playerId) override;

        void printInfoAboutInvalidPlayerNameFormat(size_t playerId) override;

        void printReasonForStoppingGameMessage() override;
    };

}

#endif //LAB_3_GAMECONSOLEVIEWMODULE_H
