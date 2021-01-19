//
// Created by Anna on 18.01.2021.
//

#include "AbstractGamePlayer.h"

//TicTacToeModelModule::AbstractGamePlayer::AbstractGamePlayer(const std::string &name,
//                                                             const TicTacToeModelModule::GAME_LABEL_TYPES labelType,
//                                                             TicTacToeModelModule::GameModelModule &model) :
//        name_(name), label_(labelType) {
//    this -> gamepad_ = TicTacToeControllerModule::GamepadController(model);
//}

std::string TicTacToeModelModule::AbstractGamePlayer::getPlayerName() const {
    return name_;
}

TicTacToeModelModule::GAME_LABEL_TYPES TicTacToeModelModule::AbstractGamePlayer::getPlayerLabel() const {
    return label_;
}
