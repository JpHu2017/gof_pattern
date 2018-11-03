#ifndef ROOM_H
#define ROOM_H
#include "cz_def.h"
#include "map_site.h"
namespace cz {
class CZ_EXPORTS Room : public MapSite {
public:
    Room(int roomNo);
    MapSite* GetSide(Direction) const;
    void SetSide(Direction, MapSite*);
    virtual void Enter();
private:
    MapSite* _sides[4];
    int _roomNumber;
};
}
#endif