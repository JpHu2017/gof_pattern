#ifndef GOF_PATTERN_MEMENTO_H
#define GOF_PATTERN_MEMENTO_H
#include <memory>
#include "cz_def.h"
namespace gof
{
class GameRole;
class CZ_EXPORTS Memento {
public:
    typedef std::shared_ptr<Memento> Ptr;
    ~Memento();
    Memento& operator=(const Memento& other);
private:
    friend class GameRole;
	Memento(const int& vitality, const int& attack, const int& defense);
    int _vitality;
    int _attack;
    int _defense;
};
}
#endif //GOF_PATTERN_MEMENTO_H