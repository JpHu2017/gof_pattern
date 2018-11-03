#ifndef DOOR_H
#define DOOR_H
#include "cz_def.h"
#include "map_site.h"
#include "room.h"
namespace cz {
class CZ_EXPORTS Door : public MapSite {
public:
    Door(Room* = 0, Room* = 0);
    virtual void Enter();
    Room* OtherSideFrom(Room*);
private:
    Room* _room1;
    Room* _room2;
    bool _isOpen;
};
}
#endif