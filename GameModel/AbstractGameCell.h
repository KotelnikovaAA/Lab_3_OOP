//
// Created by Anna on 18.01.2021.
//

#ifndef LAB_3_ABSTRACTGAMECELL_H
#define LAB_3_ABSTRACTGAMECELL_H

#include "./GameLabelTypesEnum.h"


namespace TicTacToeModelModule {

    class AbstractGameCell {
    protected:
         TicTacToeModelModule::GAME_LABEL_TYPES label_ = GAME_LABEL_TYPES::UNKNOWN_LABEL;

    public:
        virtual ~AbstractGameCell() = default;

        TicTacToeModelModule::GAME_LABEL_TYPES getCellLabel() const;  // TODO: is it actually necessary?

    };

}

#endif //LAB_3_ABSTRACTGAMECELL_H
