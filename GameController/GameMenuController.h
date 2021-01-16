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

        TicTacToeModelModule::GameSettings customGameSettings;
        PlayerInputDataValidator validator_;

    public:
        explicit GameMenuController(TicTacToeModelModule::GameModelModule &model)
                : AbstractGameController(model) {};


        void requestNewGameSettings();

        void requestGameMode(); // is contained in requestNewGameSettings
        void requestPlayerNamesMessage();

        void requestGamePlayerName();    // is contained in requestNewGameSettings

        void requestFirstGameMove();

        void requestNextGameMove();

        GameSettings &getGameSettings() const;

    };

}

#endif //LAB_3_GAMEMENUCONTROLLER_H
