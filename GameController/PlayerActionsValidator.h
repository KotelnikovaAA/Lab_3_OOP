//
// Created by Anna on 14.01.2021.
//

#ifndef LAB_3_PLAYERACTIONSVALIDATOR_H
#define LAB_3_PLAYERACTIONSVALIDATOR_H

#include "AbstractGameValidator.h"

namespace TicTacToeControllerModule {

    class PlayerActionsValidator : public AbstractGameValidator {
    private:

        const size_t minCellNumber = 1;
        const size_t maxCellNumber = 9;

        bool isCellNumberNotLessThanMin(const size_t number);

        bool isCellNumberNoMoreThanMax(const size_t number);

    public:

        bool isAcceptableCellNumber(const size_t number);

    };

}
#endif //LAB_3_PLAYERACTIONSVALIDATOR_H