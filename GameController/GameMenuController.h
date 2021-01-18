//
// Created by Anna on 13.01.2021.
//

#ifndef LAB_3_GAMEMENUCONTROLLER_H
#define LAB_3_GAMEMENUCONTROLLER_H

#include "AbstractGameController.h"
#include "../GameModel/GameModelModule.h"
#include "../GameModel/GameSettings.h"

namespace TicTacToeControllerModule {

    class GameMenuController : public AbstractGameController {
    private:

        enum interlocutorsId_ {
            FIRST_PLAYER = 1,
            SECOND_PLAYER = 2
        };

        TicTacToeModelModule::GameSettings customGameSettings;

        PlayerInputDataValidator validator_;

        interlocutorsId_ currentInterlocutorId_ = FIRST_PLAYER;

        [[nodiscard]] bool isTwoPlayersGameModeSet() const;

    public:
        explicit GameMenuController(TicTacToeModelModule::GameModelModule &model)
                : AbstractGameController(model) {};

        void requestNewGameSettings();

        void requestGameMode();

        void requestAllPlayerNames();

        void requestPlayerName();

        bool isCurrentInterlocutorFirstPlayer();

        void changeCurrentInterlocutorToSecondPlayer();

        std::string readUserInputData();

        [[nodiscard]] TicTacToeModelModule::GameSettings getGameSettings() const;
    };

}

#endif //LAB_3_GAMEMENUCONTROLLER_H
