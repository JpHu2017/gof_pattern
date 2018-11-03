#ifndef MAZE_H
#define MAZE_H
#include <vector>
#include "cz_def.h"
#include "room.h"
namespace cz {
class CZ_EXPORTS Maze {
public:
    Maze();
    void AddRoom(Room*);
    Room* RoomNo(int) const;
private:
    std::vector< Room*> _rooms;
};
}
#endif