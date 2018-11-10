#include <iostream>
#include "character.h"
#include "character_a.h"
#include "character_factory.h"
int main(int argc, char const *argv[])
{
    gof::CharacterFactory::Ptr factory_ptr;
    factory_ptr.reset(new gof::CharacterFactory());
    Character::Ptr character_ptr = factory_ptr->getCharacter('A');
    character_ptr->display();
    return 0;
}
