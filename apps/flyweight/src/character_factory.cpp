#include "character_factory.h"
#include "character_a.h"
#include "character_b.h"
namespace gof {
CharacterFactory::CharacterFactory() {
    char_map.insert('A', Character::Ptr(new CharacterA()));
    char_map.insert('B', Character::Ptr(new CharacterB()));
}
CharacterFactory::~CharacterFactory() {}
Character::Ptr CharacterFactory::getCharacter(const char& c) {
    std::map<char, Character::Ptr>::iterator iter = _char_map.find(c);
    if(iter!=_char_map.end()) {
        return iter->second;
    } else {
        return NULL;
    }
}
}