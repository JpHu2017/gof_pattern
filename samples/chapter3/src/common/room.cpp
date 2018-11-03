#include <iostream>
#include "common/room.h"

namespace cz {
    Room::Room(int roomNo): _roomNumber(roomNo) {}

    MapSite* Room::GetSide(Direction d) const {
        //North, South, East, West
        if(d == North) {
            return _sides[0];
        } else if(d == South) {
            return _sides[1];
        } else if(d == East) {
            return _sides[2];
        } else if(d == West) {
            return _sides[3];
        } else {
            std::cerr << "Direction is error!" << std::endl;
        }
    }
    void Room::SetSide(Direction d, MapSite* m) {
        if(d == North) {
            _sides[0] = m;
        } else if(d == South) {
            _sides[1] = m;
        } else if(d == East) {
            _sides[2] = m;
        } else if(d == West) {
            _sides[3] = m;
        } else {
            std::cerr << "Direction is error!" << std::endl;
        }
    }
    void Room::Enter() {
        std::cout << "Enter Operation in Room!" << std::endl;
    }
}