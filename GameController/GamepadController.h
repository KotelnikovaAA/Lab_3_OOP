//
// Created by Anna on 13.01.2021.
//

#ifndef LAB_3_GAMEPADCONTROLLER_H
#define LAB_3_GAMEPADCONTROLLER_H

#include "AbstractGameController.h"
#include "PlayerActionsValidator.h"

namespace TicTacToeControllerModule {

    class GamepadController : public AbstractGameController {
    private:
        PlayerActionsValidator validator_;

        bool isExternalCellNumberUndefined();

    public:
        GamepadController(TicTacToeModelModule::GameModelModule &model);

        void requestCellCoordinatesFromActivePlayer();  // TODO: two next methods are contained in his method : if the field is fulled -> doubleCoordinates else singleCoordinate

        void requestDoubleCellCoordinate();

        void requestSingleCellCoordinate();

        void readCellCoordinates();

    };

}

#endif //LAB_3_GAMEPADCONTROLLER_H
