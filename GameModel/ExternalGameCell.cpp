//
// Created by Anna on 18.01.2021.
//

#include "ExternalGameCell.h"
#include "GameLabelTypesEnum.h"

TicTacToeModelModule::ExternalGameCell::ExternalGameCell() {
    label_ = GAME_LABEL_TYPES::UNKNOWN_LABEL;
    field_ = new InternalGameField();
}
