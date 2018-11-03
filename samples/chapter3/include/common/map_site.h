#ifndef MAP_SITE_H
#define MAP_SITE_H
#include "cz_def.h"
namespace cz {
enum Direction {North, South, East, West};
class CZ_EXPORTS MapSite {
public:
    virtual void Enter() = 0;
private:

};
}
#endif