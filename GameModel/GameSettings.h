//
// Created by Anna on 13.01.2021.
//

#ifndef LAB_3_GAMESETTINGS_H
#define LAB_3_GAMESETTINGS_H

#include <string>
#include "../GameController/PlayerInputDataValidator.h"

namespace TicTacToeModelModule {

    enum gameMode {
        ONE_PLAYER = 1,
        TWO_PLAYERS = 2
    };

    class GameSettings {
    private:

        gameMode userGameMode_;

        const std::string DEFAULT_FIRST_PLAYER_NAME = "Player_1";
        const std::string DEFAULT_SECOND_PLAYER_NAME = "Player_2";

        std::string firstPlayerName_ = DEFAULT_FIRST_PLAYER_NAME;
        std::string secondPlayerName_ = DEFAULT_SECOND_PLAYER_NAME;


    public:

        void setGameMode(const gameMode userMode);

        gameMode getGameMode() const;

        void setFirstPlayerName(const std::string name);

        std::string getFirstPlayerName() const;

        void setSecondPlayerName(const std::string name);

        std::string getSecondPlayerName() const;

    };

}
#endif //LAB_3_GAMESETTINGS_H
