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
    };

}

#endif //LAB_3_GAMEPADCONTROLLER_H
