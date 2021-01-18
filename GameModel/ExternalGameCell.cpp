//
// Created by Anna on 18.01.2021.
//

#include "ExternalGameCell.h"

TicTacToeModelModule::ExternalGameCell::ExternalGameCell() {
    label_ = UNKNOWN_LABEL;
    field_ = new InternalGameField();
}
