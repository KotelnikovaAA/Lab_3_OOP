//
// Created by Anna on 14.01.2021.
//

#include "PlayerActionsValidator.h"

bool TicTacToeControllerModule::PlayerActionsValidator::isAcceptableCellNumber(const size_t number) {
    return (isCellNumberNotLessThanMin(number) && isCellNumberNoMoreThanMax(number));
}

bool TicTacToeControllerModule::PlayerActionsValidator::isCellNumberNotLessThanMin(const size_t number) {
    return number >= minCellNumber;
}

bool TicTacToeControllerModule::PlayerActionsValidator::isCellNumberNoMoreThanMax(const size_t number) {
    return number <= maxCellNumber;
}
