//
// Created by Anna on 18.01.2021.
//

#include "ExternalGameField.h"

TicTacToeModelModule::ExternalGameField::ExternalGameField() {
    for (size_t currentCellIndex = 0; currentCellIndex < FIELD_CELLS_NUMBER; currentCellIndex++) {
        fieldCells_[currentCellIndex] = new ExternalGameCell();
    }
}
