//
// Created by Anna on 18.01.2021.
//

#include "GameModelModule.h"

void TicTacToeModelModule::GameModelModule::attachObserver(TicTacToeViewModule::IObserver *observer) {
    observersList_.push_back(observer);
}


void TicTacToeModelModule::GameModelModule::detachObserver(TicTacToeViewModule::IObserver *observer) {
    observersList_.remove(observer);
}


void TicTacToeModelModule::GameModelModule::notifyObservers() {
    auto iterator = observersList_.begin();
    while (iterator != observersList_.end()) {
        (*iterator)->update();
        ++iterator;
    }
}


void TicTacToeModelModule::GameModelModule::requestObserversToPrintQuestionAboutGameMode() {
    for (auto observer : observersList_) {
        observer->printRequestGameModeMessage();
    }
}


void TicTacToeModelModule::GameModelModule::requestObserversToPrintInfoAboutInvalidGameMode() {
    for (auto observer : observersList_) {
        observer->printInfoAboutInvalidGameMode();
    }
}


void TicTacToeModelModule::GameModelModule::requestObserversToPrintQuestionAboutPlayerName(
        const size_t currentInterlocutorId) {
    for (auto observer : observersList_) {
        observer->printRequestPlayerNameMessage(currentInterlocutorId);
    }
}


void TicTacToeModelModule::GameModelModule::requestObserversToPrintInfoAboutInvalidPlayerNameFormat(
        size_t currentInterlocutorId) {
    for (auto observer : observersList_) {
        observer->printInfoAboutInvalidPlayerNameFormat();
    }
}


void
TicTacToeModelModule::GameModelModule::createNewGameArena(
        const TicTacToeModelModule::GameSettings &customGameSettings) {
    createNewPlayingField();
    createGamePlayers(customGameSettings);
}


void TicTacToeModelModule::GameModelModule::createNewPlayingField() {
    gameField_ = new ExternalGameField();
}


void
TicTacToeModelModule::GameModelModule::createGamePlayers(const TicTacToeModelModule::GameSettings &customGameSettings) {
    createRealGamePlayer(customGameSettings.getPlayerNameById(FIRST_PLAYER_ID), FIRST_PLAYER_ID, CROSS_LABEL);

    auto mode = customGameSettings.getGameMode();
    if (isTwoPlayersGameModeSet(mode)) {
        createRealGamePlayer(customGameSettings.getPlayerNameById(SECOND_PLAYER_ID), SECOND_PLAYER_ID, ZERO_LABEL);
    } else {
        createBotGamePlayer(customGameSettings.getPlayerNameById(SECOND_PLAYER_ID), SECOND_PLAYER_ID, ZERO_LABEL);
    }

    // TODO: можно написать так: isTwoPlayersGameModeSet(mode) == true ? createRealGamePlayer() : createBotGamePlayer()
}


void TicTacToeModelModule::GameModelModule::createRealGamePlayer(const std::string &name, const size_t id,
                                                                 const GAME_LABEL_TYPES &labelType) {
    matchesBetweenIdsAndPlayersMap[id] = new RealGamePlayer(name, labelType, *this);
}


void TicTacToeModelModule::GameModelModule::createBotGamePlayer(const std::string &name, const size_t id,
                                                                const GAME_LABEL_TYPES &labelType) {
    matchesBetweenIdsAndPlayersMap[id] = new BotGamePlayer(name, labelType, *this);
}


bool TicTacToeModelModule::GameModelModule::isTwoPlayersGameModeSet(const TicTacToeModelModule::gameMode &mode) const {
    return mode == TWO_PLAYERS;
}


void TicTacToeModelModule::GameModelModule::startPlayingGame() {
    //firstPlayer_.запросить самый первый ход, хы

    // TODO: get first player to make special step (he has to choose the field by himself compared to all next steps)
    // первый игрок делает ход и currentPlayerForMove становится второй игрок, далее цикл while
    // перед циклом должно быть истинно currentPlayerForMoveId == secondPlayerId
    while (!isReasonForStoppingGame()) {
        auto currentPlayer = matchesBetweenIdsAndPlayersMap.at(currentActivePlayerId);
        currentPlayer->makeMove();
        changeActivePlayerId();
    }

}

void TicTacToeModelModule::GameModelModule::changeActivePlayerId() {
    currentActivePlayerId = isActiveFirstPlayer() ? SECOND_PLAYER_ID : FIRST_PLAYER_ID;
}

bool TicTacToeModelModule::GameModelModule::isActiveFirstPlayer() {
    return currentActivePlayerId == FIRST_PLAYER_ID;
}

void finishPlayingGame() {

    deleteGameArena() // TODO: и что-то ещё ??
}


//TODO: завершение игры
void deleteGameArena() {
    deleteGamePlayers();// TODO: нужен delete для field в конце игры: одно external, в нем 9 селлов, в каждом селле по интернал полю, в каждом поле по 9 селлов
    deletePlayingField();
}
