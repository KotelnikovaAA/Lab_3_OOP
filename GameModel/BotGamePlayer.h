//
// Created by Anna on 13.01.2021.
//

#ifndef LAB_3_BOTGAMEPLAYER_H
#define LAB_3_BOTGAMEPLAYER_H

#include "AbstractGamePlayer.h"

namespace TicTacToeModelModule {

    class BotGamePlayer : public AbstractGamePlayer {

    public:
        BotGamePlayer();

        ~BotGamePlayer();

        void makeMove() override;
    };

}

#endif //LAB_3_BOTGAMEPLAYER_H
