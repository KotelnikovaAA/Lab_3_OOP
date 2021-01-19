//
// Created by Anna on 18.01.2021.
//

#ifndef LAB_3_BOTGAMEPLAYER_H
#define LAB_3_BOTGAMEPLAYER_H

#include "AbstractGamePlayer.h"

namespace TicTacToeModelModule {

    class BotGamePlayer : public AbstractGamePlayer {

    public:

        BotGamePlayer(const std::string &name, const GAME_LABEL_TYPES &labelType, const GameModelModule &model)
                : AbstractGamePlayer(name, labelType, model) {};

        void makeMove() override;

    };

}

#endif //LAB_3_BOTGAMEPLAYER_H
