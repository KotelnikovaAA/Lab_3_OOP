//
// Created by Anna on 12.01.2021.
//

#ifndef LAB_3_ABSTRACTGAMECONTROLLER_H
#define LAB_3_ABSTRACTGAMECONTROLLER_H

#include <iostream>
#include "../GameModel/GameModelModule.h"


namespace TicTacToeControllerModule {

    class AbstractGameController {
    protected:

        enum interlocutorsId_ {
            FIRST_PLAYER = 1,
            SECOND_PLAYER = 2
        };

        interlocutorsId_ currentInterlocutorId_ = FIRST_PLAYER;

        TicTacToeModelModule::GameModelModule &model_;

    public:
        explicit AbstractGameController(TicTacToeModelModule::GameModelModule &model);

        virtual ~AbstractGameController() = default;
//
//        std::string readUserInputData() {
//            std::string inputData;
//            std::cin >> inputData;
//
//            return inputData;
//        }
    };

}


#endif //LAB_3_ABSTRACTGAMECONTROLLER_H
