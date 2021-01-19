//
// Created by Anna on 18.01.2021.
//

#ifndef LAB_3_GAMEMODELMODULE_H
#define LAB_3_GAMEMODELMODULE_H

#include <string>
#include <list>
#include <map>
#include <utility>
#include "../GameView/IObserver.h"
#include "GameSettings.h"
#include "ExternalGameField.h"
#include "AbstractGameCell.h"
#include "AbstractGamePlayer.h"
#include "RealGamePlayer.h"
#include "BotGamePlayer.h"

namespace TicTacToeModelModule {

    enum WINNER {
        NO_WINNER = 0,
        FIRST_PLAYER = 1,
        SECOND_PLAYER = 2
    };

    enum GAME_LABEL_TYPES {
        UNKNOWN_LABEL = 0,
        CROSS_LABEL = 1,
        ZERO_LABEL = 2
    };

    const std::string UNKNOWN_GAME_LABEL = " ";
    const std::string CROSS_GAME_LABEL = "X";
    const std::string ZERO_GAME_LABEL = "O";

    const std::map<GAME_LABEL_TYPES, std::string> LABEL_VALUES_BY_TYPE_MAP{
            {UNKNOWN_LABEL, UNKNOWN_GAME_LABEL},
            {CROSS_LABEL,   CROSS_GAME_LABEL},
            {ZERO_LABEL,    ZERO_GAME_LABEL}
    };

    const size_t UNDEFINED_CELL_NUMBER = 0;
    const size_t MIN_PERMISSIBLE_CELL_NUMBER = 1;
    const size_t MAX_PERMISSIBLE_CELL_NUMBER = 9;

    class GameModelModule {
    private:
        std::list<TicTacToeViewModule::IObserver *> observersList_;

        ExternalGameField *gameField_;
        size_t currentExternalCellNumber_ = UNDEFINED_CELL_NUMBER;
        size_t currentInternalCellNumber_ = UNDEFINED_CELL_NUMBER;

        std::map<size_t, AbstractGamePlayer *> matchesBetweenIdsAndPlayersMap;

        size_t currentActivePlayerId = FIRST_PLAYER_ID;

        std::string message_;

        void informObserversPlayerNames(const TicTacToeModelModule::GameSettings &customGameSettings) const ;

        bool isReasonForStoppingGame = false;

        void createNewPlayingField();

        void createGamePlayers(const TicTacToeModelModule::GameSettings &customGameSettings);

        void createRealGamePlayer(const std::string &name, const size_t id, const GAME_LABEL_TYPES &labelType);

        void createBotGamePlayer(const std::string &name, const size_t id, const GAME_LABEL_TYPES &labelType);

        bool isTwoPlayersGameModeSet(const gameMode &mode) const;

        void changeActivePlayerId();

        bool isActiveFirstPlayer();

        void notifyObservers();

    public:
        void attachObserver(TicTacToeViewModule::IObserver *observer);

        void detachObserver(TicTacToeViewModule::IObserver *observer);

        void startPlayingGame();

        void createNewGameArena(const TicTacToeModelModule::GameSettings &customGameSettings);

        void requestObserversToPrintQuestionAboutGameMode();

        void requestObserversToPrintInfoAboutInvalidGameMode();

        void requestObserversToPrintQuestionAboutPlayerName(const size_t currentInterlocutorId);

        void requestObserversToPrintInfoAboutInvalidPlayerNameFormat(const size_t currentInterlocutorId);

        void requestObserversToPrintQuestionAboutExternalCellCoordinate(const size_t currentInterlocutorId);

        size_t getCurrentExternalCellNumber();

        // TODO: я тут закончила
        bool isFreeSpaceToMakeMoveInsideExternalCell() const ;

        std::string getReasonForStoppingGameMessage();

    };

}

#endif //LAB_3_GAMEMODELMODULE_H
