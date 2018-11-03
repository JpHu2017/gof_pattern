#include <iostream>
#include "common/maze.h"
#include "common/maze_game.h"
int main(int argc, char* argv[]) {
    cz::MazeGame maze_game;
    cz::Maze* maze = maze_game.CreateMaze();
    return 0;
}