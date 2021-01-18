2//
// Created by Anna on 12.01.2021.
//

#ifndef LAB_3_IOBSERVER_H
#define LAB_3_IOBSERVER_H

namespace TicTacToeViewModule {

    class IObserver {
    public:
        virtual ~IObserver() = default;

        virtual void update() = 0;

        virtual void printRequestGameModeMessage() = 0;

        virtual void printInfoAboutInvalidGameMode() = 0;

        virtual void printRequestPlayerNameMessage(const size_t playerId) = 0;

        virtual void printInfoAboutInvalidPlayerNameFormat(const size_t playerId) = 0;

        virtual void printReasonForStoppingGameMessage() = 0;
    };

}

#endif //LAB_3_IOBSERVER_H
