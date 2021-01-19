//
// Created by Anna on 18.01.2021.
//

#ifndef LAB_3_ABSTRACTGAMEPLAYER_H
#define LAB_3_ABSTRACTGAMEPLAYER_H

#include <string>
#include "../GameController/GamepadController.h"

namespace TicTacToeModelModule {

    class AbstractGamePlayer {

    protected:
        TicTacToeControllerModule::GamepadController gamepad_;

        std::string name_;

        GAME_LABEL_TYPES label_;

    public:

        // TODO: как написать этот конструктор? Нужно списков инициализаций инициализировать gamepad_ , полем которого
        //  является ссылка на модель, поэтому нужно использовать конструктор абстрактного класса, для которого уже
        //  определен конструктор списком инициализаций
        AbstractGamePlayer(const std::string &name, const GAME_LABEL_TYPES &labelType, const GameModelModule &model)
                : name_(name), label_(labelType), gamepad_(model) {
        };

        virtual ~AbstractGamePlayer() = default;

        virtual void makeMove() = 0;

        [[nodiscard]] std::string getPlayerName() const;

        TicTacToeModelModule::GAME_LABEL_TYPES getPlayerLabel() const;

    };

}


#endif //LAB_3_ABSTRACTGAMEPLAYER_H
