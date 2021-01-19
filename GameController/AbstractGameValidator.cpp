//
// Created by Anna on 14.01.2021.
//

#include "AbstractGameValidator.h"

bool TicTacToeControllerModule::AbstractGameValidator::isCorrectStreamStateAfterReadingInputData(
        const std::istringstream &stream) {
    return (!isStreamFailedAfterReadingInputData(stream) && isStreamReachedEndOfFile(stream));
}

bool TicTacToeControllerModule::AbstractGameValidator::isStreamFailedAfterReadingInputData(
        const std::istringstream &stream) {
    return stream.fail();
}

bool TicTacToeControllerModule::AbstractGameValidator::isStreamReachedEndOfFile(const std::istringstream &stream) {
    return stream.eof();
}
