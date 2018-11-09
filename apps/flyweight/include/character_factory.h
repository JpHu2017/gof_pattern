#ifndef GOF_PATTERN_CHARACTER_FACTORY_H
#define GOF_PATTERN_CHARACTER_FACTORY_H
#include <map>
#include <memory>
#include "character.h"
#include "cz_def.h"
namespace gof {
class CZ_EXPORTS CharacterFactory {
public:
    typedef std::shared_ptr<CharacterFactory> Ptr;
    CharacterFactory();
    ~CharacterFactory();
    Character::Ptr getCharacter(const char& c);
private:
    std::map<char, Character::Ptr> _char_map;
};
}
#endif //GOF_PATTERN_CHARACTER_FACTORY_H