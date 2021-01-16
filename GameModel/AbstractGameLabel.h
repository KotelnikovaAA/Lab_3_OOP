//
// Created by Anna on 12.01.2021.
//

#ifndef LAB_3_ABSTRACTGAMELABEL_H
#define LAB_3_ABSTRACTGAMELABEL_H


#include <string>

namespace TicTacToeModelModule {

// TODO: WRITE UNKNOWN LABEL TYPE
    class AbstractGameLabel {
    private:
        std::string playerLabel_;

    public:
        [[nodiscard]] std::string getPlayerLabel() const;
    };

}

#endif //LAB_3_ABSTRACTGAMELABEL_H
