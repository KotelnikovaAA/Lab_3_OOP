//
// Created by Anna on 12.01.2021.
//

#ifndef LAB_3_ABSTRACTGAMECONTROLLER_H
#define LAB_3_ABSTRACTGAMECONTROLLER_H

#include "../GameModel/GameModelModule.h"

namespace TicTacToeControllerModule {

    class AbstractGameController {
    protected:
        TicTacToeModelModule::GameModelModule &model_;

    public:
        explicit AbstractGameController(TicTacToeModelModule::GameModeModule &model) : model_(model) {};

        virtual ~AbstractGameController() = default;
    };

}


#endif //LAB_3_ABSTRACTGAMECONTROLLER_H
