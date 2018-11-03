#ifndef MAZE_GAME_H
#define MAZE_GAME_H
#include "cz_def.h"
#include "maze.h"
namespace cz {
class CZ_EXPORTS MazeGame {
public:
    MazeGame();
    Maze* CreateMaze();
private:
};
}
#endif