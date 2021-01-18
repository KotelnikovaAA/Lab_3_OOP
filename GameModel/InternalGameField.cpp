//
// Created by Anna on 18.01.2021.
//

#include "InternalGameField.h"

TicTacToeModelModule::InternalGameField::InternalGameField() {
    for (size_t currentCellIndex = 0; currentCellIndex < FIELD_CELLS_NUMBER; currentCellIndex++) {
        fieldCells_[currentCellIndex] = new InternalGameCell();
    }
}
