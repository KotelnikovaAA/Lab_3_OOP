//
// Created by Anna on 12.01.2021.
//

#ifndef LAB_3_GAMEMODELMODULE_H
#define LAB_3_GAMEMODELMODULE_H

#include <vector>
#include <string>
#include "AbstractGamePlayer.h"
#include "../GameView/IObserver.h"
#include "GameSettings.h"

namespace TicTacToeModelModule {

    class GameModelModule {
    private:
        AbstractGamePlayer *firstPlayer;
        AbstractGamePlayer *secondPlayer;

        void prepareNewPlayingField();

        std::vector<IObserver *> listObservers_;
        std::string message_;

        void NotifySubscribers();


    public:
        AddSubscriber(TicTacToeViewModule::IObserver *observer);

        RemoveSubscriber(TicTacToeViewModule::IObserver *observer);

        createNewGameArena(TicTacToeModelModule::GameSettings
        customGameSettings);

        void requestObserversToPrintQuestionAboutGameMode();

        void requestObserversToPrintInfoAboutInvalidGameMode();

        bool isReasonForStoppingGame();

        std::string getReasonForStoppingGameMessage();
    };

}

#endif //LAB_3_GAMEMODELMODULE_H
