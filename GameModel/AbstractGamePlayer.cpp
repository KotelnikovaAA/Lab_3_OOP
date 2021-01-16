//
// Created by Anna on 13.01.2021.
//

#include "AbstractGamePlayer.h"

std::string TicTacToeModelModule::AbstractGamePlayer::getPlayerName() const {
    return name_;
}

AbstractGameLabel TicTacToeModelModule::AbstractGamePlayer::getPlayerLabel() const {
    return label_;
}

