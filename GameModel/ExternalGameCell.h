//
// Created by Anna on 18.01.2021.
//

#ifndef LAB_3_EXTERNALGAMECELL_H
#define LAB_3_EXTERNALGAMECELL_H

#include "AbstractGameCell.h"
#include "InternalGameField.h"

namespace TicTacToeModelModule {

    class ExternalGameCell : public AbstractGameCell {
    private:

        InternalGameField *field_;

    public:
        ExternalGameCell();
    };

}

#endif //LAB_3_EXTERNALGAMECELL_H
