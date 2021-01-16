//
// Created by Anna on 14.01.2021.
//

#ifndef LAB_3_PLAYERINPUTDATAVALIDATOR_H
#define LAB_3_PLAYERINPUTDATAVALIDATOR_H

#include "AbstractGameValidator.h"
#include "../GameModel/GameSettings.h"

namespace TicTacToeControllerModule {

    class PlayerInputDataValidator : public AbstractGameValidator {
    private:


    public:
        ??? void checkInputGameModeValidity(TicTacToeModelModule::gameMode userMode);
        isAcceptableGameMode();
        isStreamFailedAfterReadingInputData();

    };

}

#endif //LAB_3_PLAYERINPUTDATAVALIDATOR_H
