#include "common/maze.h"

namespace cz {
    Maze::Maze() {}
    void Maze::AddRoom(Room* r1) {
        _rooms.emplace_back(r1);
    }
    Room* Maze::RoomNo(int No) const {
        return _rooms.at(No);
    }
}