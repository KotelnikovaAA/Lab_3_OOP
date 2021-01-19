//
// Created by Anna on 18.01.2021.
//

#ifndef LAB_3_ABSTRACTGAMEFIELD_H
#define LAB_3_ABSTRACTGAMEFIELD_H

#include <vector>
#include "AbstractGameCell.h"
#include "GameWinnerEnum.h"

namespace TicTacToeModelModule {

    const size_t FIELD_CELLS_NUMBER = 9;

    class AbstractGameField {
    protected:
        bool isCompletelyFilled_ = false;

        TicTacToeModelModule::GAME_LABEL_TYPES fieldLabel_ = GAME_LABEL_TYPES::UNKNOWN_LABEL; // TODO: почему он не видит?.....

        TicTacToeModelModule::WINNER winner_ = WINNER::NO_WINNER;

        std::vector<AbstractGameCell*> fieldCells_;

    public:
        virtual ~AbstractGameField() = default;
    };
}

#endif //LAB_3_ABSTRACTGAMEFIELD_H
