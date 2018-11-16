#ifndef GOF_PATTERN_GAME_ROLE_H
#define GOF_PATTERN_GAME_ROLE_H
#include <memory>
#include "cz_def.h"
#include "memento.h"
namespace gof {
class GameRole {
public:
    typedef std::shared_ptr<GameRole> Ptr;
    GameRole();
    Memento saveState();
    void load(const Memento& memento);
    void showState();
    void attack();
private:
    int _vitality;
    int _attack;
    int _defense;
};
}
#endif //GOF_PATTERN_GAME_ROLE_H