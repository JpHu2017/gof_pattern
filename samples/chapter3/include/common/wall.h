#ifndef WALL_H
#define WALL_H
#include "cz_def.h"
#include "map_site.h"
namespace cz {
class CZ_EXPORTS Wall : public MapSite {
public:
    Wall();
    virtual void Enter();
private:
};
}
#endif