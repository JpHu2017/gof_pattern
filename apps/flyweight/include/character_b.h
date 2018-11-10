#ifndef GOF_PATTERN_CHARACTERB_H
#define GOF_PATTERN_CHARACTERB_H
#include <memory>
#include "character.h"
namespace gof {
//Concrete Flyweight
class CharacterB : public Character{
public:
    typedef std::shared_ptr<CharacterB> Ptr;
    virtual ~CharacterB();
    virtual void setSize(const int& w, const int& h);
    virtual void display();
private:
    CharacterB();
};
}
#endif //GOF_PATTERN_CHARACTERB_H