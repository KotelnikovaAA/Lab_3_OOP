//
// Created by Anna on 17.01.2021.
//

#ifndef LAB_3_PLAYERINPUTDATAVALIDATOR_H
#define LAB_3_PLAYERINPUTDATAVALIDATOR_H

#include "AbstractGameValidator.h"
#include "../GameModel/GameSettings.h"
#include <sstream>

namespace TicTacToeControllerModule {

    class PlayerInputDataValidator : public AbstractGameValidator {
    private:

        const char WHITESPACE = ' ';

    public:

        bool isCorrectStreamStateAfterReadingInputData(const std::istringstream &stream);

        bool isStreamFailedAfterReadingInputData(const std::istringstream &stream);

        bool isStreamReachedEndOfFile(const std::istringstream &stream);

        bool isAcceptableGameMode(size_t mode);

        bool isCorrectFormatOfEnteredPlayerName(const std::string &name);

        bool isEmptyInputString(const std::string &inputString);

        bool isSingleWordString(const std::string &inputString);

    };

}

#endif //LAB_3_PLAYERINPUTDATAVALIDATOR_H
