//
// Created by Anna on 13.01.2021.
//

#ifndef LAB_3_REALGAMEPLAYER_H
#define LAB_3_REALGAMEPLAYER_H

#include "AbstractGamePlayer.h"

namespace TicTacToeModelModule {

    class RealGamePlayer : public AbstractGamePlayer {


    public:
        RealGamePlayer();

        ~RealGamePlayer();

        void makeMove() override;
    };

}

#endif //LAB_3_REALGAMEPLAYER_H
