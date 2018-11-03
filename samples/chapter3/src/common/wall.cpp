#include <iostream>
#include "common/wall.h"

namespace cz {
    Wall::Wall() {}
    void Wall::Enter() {
        std::cout << "Enter Operation in Wall!" << std::endl;
    }
}