//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_GRAPHICSMANAGER_H
#define HACKEDBETA_GRAPHICSMANAGER_H

#include <type_traits>

#include "BaseOutput.h"

#include "HeadlessOutput.h"
#include "GraphicsOutput.h"

class OutputManager {

public:

    OutputManager(BaseOutput *output0, BaseOutput *output1) {
        Output0 = output0;
        Output1 = output1;
    }

    void Update0() {
        if (Output0 != nullptr) {
            Output0->Update(Grid);

        }
    }

    void Update1() {
        if (Output1 != nullptr) {
            Output1->Update(Grid);

        }
    }
    void setGrid(std::vector<std::vector<bool>> grid) {
        Grid = grid;
    }
private:
    BaseOutput *Output0;
    BaseOutput *Output1;
    std::vector<std::vector<bool>> Grid;

};

#endif //HACKEDBETA_GRAPHICSMANAGER_H
