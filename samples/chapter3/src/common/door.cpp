#include <iostream>
#include "common/door.h"
namespace cz {
Door::Door(Room* r1, Room* r2) 
    : _room1(r1), _room2(r2) {}

void Door::Enter() {
    if(_isOpen) {
        std::cout << "Enter successfully!" << std::endl;
    } else {
        std::cout << "It's closed!" << std::endl;
    }
    
}

Room* Door::OtherSideFrom(Room* r1) {
    if(r1 == _room1) {
        return _room2;
    } else if(r1 == _room2) {
        return _room1;
    } else {
        std::cerr << "The door is not near the room!" << std::endl;
    }
}
}