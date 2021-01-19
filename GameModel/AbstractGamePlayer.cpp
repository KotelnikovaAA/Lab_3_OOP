//
// Created by Anna on 18.01.2021.
//

#include "AbstractGamePlayer.h"

std::string TicTacToeModelModule::AbstractGamePlayer::getPlayerName() const {
    return name_;
}

TicTacToeModelModule::GAME_LABEL_TYPES TicTacToeModelModule::AbstractGamePlayer::getPlayerLabel() const {
    return label_;
}