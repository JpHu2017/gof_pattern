#ifndef GOF_PATTERN_CHARACTERA_H
#define GOF_PATTERN_CHARACTERA_H
#include <memory>
#include "character.h"
namespace gof {
//Concrete Flyweight
class CharacterA : public Character{
public:
    typedef std::shared_ptr<CharacterA> Ptr;
    CharacterA();
    virtual ~CharacterA();
    virtual void setSize(const int& w, const int& h);
    virtual void display();
private:
    
};
}
#endif //GOF_PATTERN_CHARACTERA_H