#include <iostream>
#include "character.h"
#include "character_a.h"
#include "character_b.h"
#include "character_factory.h"
int main(int argc, char const *argv[])
{
    gof::CharacterFactory::Ptr factory_ptr;
    factory_ptr.reset(new gof::CharacterFactory());
    gof::Character::Ptr charactera_ptr = factory_ptr->getCharacter('A');
	gof::Character::Ptr characterb_ptr = factory_ptr->getCharacter('B');
    charactera_ptr->display();
	characterb_ptr->display();
	// flyweight 
	charactera_ptr->setSize(200, 400);
	characterb_ptr->setSize(200, 400);
	charactera_ptr->display();
	characterb_ptr->display();
    return 0;
}
