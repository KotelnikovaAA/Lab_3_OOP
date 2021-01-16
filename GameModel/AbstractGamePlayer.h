//
// Created by Anna on 13.01.2021.
//

#ifndef LAB_3_ABSTRACTGAMEPLAYER_H
#define LAB_3_ABSTRACTGAMEPLAYER_H

#include <string>
#include "AbstractGameLabel.h"
#include "../GameController/AbstractGameController.h"

namespace TicTacToeModelModule {

    class AbstractGamePlayer {
    private:
        AbstractGameController gamepad_;
        std::string name_;
        AbstractGameLabel label_;

    public:

        virtual ~AbstractGamePlayer() = default;

        virtual void makeMove() = 0;

        [[nodiscard]] std::string getPlayerName() const;

        [[nodiscard]] AbstractGameLabel getPlayerLabel() const;

    };

}

#endif //LAB_3_ABSTRACTGAMEPLAYER_H
