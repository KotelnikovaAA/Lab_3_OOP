//
// Created by Anna on 18.01.2021.
//

#ifndef LAB_3_ABSTRACTGAMECELL_H
#define LAB_3_ABSTRACTGAMECELL_H

#include "GameModelModule.h"

namespace TicTacToeModelModule {

    class AbstractGameCell {
    protected:
        GAME_LABEL_TYPES label_ = UNKNOWN_LABEL;

    public:
        virtual ~AbstractGameCell() = default;

        GAME_LABEL_TYPES getCellLabel() const;  // TODO: is it actually necessary?

    };

    GAME_LABEL_TYPES AbstractGameCell::getCellLabel() const {
        return label_;
    }
}

#endif //LAB_3_ABSTRACTGAMECELL_H
