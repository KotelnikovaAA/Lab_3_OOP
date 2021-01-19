//
// Created by Anna on 13.01.2021.
//

#include "GamepadController.h"


TicTacToeControllerModule::GamepadController::GamepadController(TicTacToeModelModule::GameModelModule &model)
        : AbstractGameController(model) {

}

void TicTacToeControllerModule::GamepadController::requestCellCoordinatesFromActivePlayer() {
    if(isExternalCellNumberUndefined()) {
        requestDoubleCellCoordinate();
    } else {
        requestSingleCellCoordinate();
    }
}


bool TicTacToeControllerModule::GamepadController::isExternalCellNumberUndefined() {
    auto externalCellNumber = model_.getCurrentExternalCellNumber();
    return externalCellNumber == TicTacToeModelModule::UNDEFINED_CELL_NUMBER;
}


void TicTacToeControllerModule::GamepadController::requestDoubleCellCoordinate() {
    //requestExternalCellCoordinate();


    // TODO: write method!!!
}

//void TicTacToeControllerModule::GamepadController::requestExternalCellCoordinate() {
//    model_.requestObserversToPrintQuestionAboutExternalCellCoordinate(currentInterlocutorId_);
//    auto inputData = readUserInputData();
//
//    std::istringstream dataStream(inputData);
//    size_t userCellNumber;
//    dataStream >> userCellNumber;

//    if (validator_.isCorrectStreamStateAfterReadingInputData(dataStream) && validator_.isAcceptableCellNumber(userCellNumber)) {
//        if ()
//        model_.setExternalCellCoordinate(userCellNumber);
//    } else {
//        model_.requestObserversToPrintInfoAboutInvalidInputCellNumber()
//    }
//}

void TicTacToeControllerModule::GamepadController::requestSingleCellCoordinate() {
    // TODO: write method!!!
}

void TicTacToeControllerModule::GamepadController::readCellCoordinates() {
    // TODO: write method!!!
}

