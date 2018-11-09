#ifndef GOF_PATTERN_CHARACTER_H
#define GOF_PATTERN_CHARACTER_H
#include <memory>
#include "cz_def.h"
namespace gof {
// Flyweight
class CZ_EXPORTS Character {
public:
    typedef std::shared_ptr<Character> Ptr;
    virtual ~Character();
    virtual void setSize(const int& w, const int& h) = 0;
    virtual void display() = 0;
protected:
    Character();
    char _char_symbol;
    int _width;
    int _height;
private:
};
}
#endif //GOF_PATTERN_CHARACTER_H