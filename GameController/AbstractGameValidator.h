//
// Created by Anna on 14.01.2021.
//

#ifndef LAB_3_ABSTRACTGAMEVALIDATOR_H
#define LAB_3_ABSTRACTGAMEVALIDATOR_H


#include <sstream>

namespace TicTacToeControllerModule {

    class AbstractGameValidator {
    public:

        bool isCorrectStreamStateAfterReadingInputData(const std::istringstream &stream);

        bool isStreamFailedAfterReadingInputData(const std::istringstream &stream);

        bool isStreamReachedEndOfFile(const std::istringstream &stream);

    };

}

#endif //LAB_3_ABSTRACTGAMEVALIDATOR_H
