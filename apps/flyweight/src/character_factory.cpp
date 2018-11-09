#include "character_factory.h"
namespace gof {
CharacterFactory::CharacterFactory() {}
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