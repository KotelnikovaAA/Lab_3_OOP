//
// Created by Anna on 17.01.2021.
//

#ifndef LAB_3_GAMESETTINGS_H
#define LAB_3_GAMESETTINGS_H

#include <string>
#include <map>
#include "../GameController/PlayerInputDataValidator.h"

namespace TicTacToeModelModule {

    const size_t FIRST_PLAYER_ID = 1;
    const size_t SECOND_PLAYER_ID = 2;

    enum gameMode {
        ONE_PLAYER = 1,
        TWO_PLAYERS = 2
    };

    class GameSettings {
    private:

        gameMode userGameMode_;

        const std::string DEFAULT_FIRST_PLAYER_NAME = "[PLAYER_1]";
        const std::string DEFAULT_SECOND_PLAYER_NAME = "[PLAYER_2]";

        std::string firstPlayerName_ = DEFAULT_FIRST_PLAYER_NAME;
        std::string secondPlayerName_ = DEFAULT_SECOND_PLAYER_NAME;

        std::map<size_t, std::string> playerNamesByIdMap {
                {FIRST_PLAYER_ID, firstPlayerName_},
                {SECOND_PLAYER_ID, secondPlayerName_}
        };

    public:

        void setGameMode(const gameMode userMode);

        gameMode getGameMode() const;

        void setPlayerNameById(size_t playerId, const std::string &name);

        std::string getPlayerNameById(const size_t playerId) const;
    };

}

#endif //LAB_3_GAMESETTINGS_H
