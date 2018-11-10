#include <glog/logging.h>
#include "character_b.h"
namespace gof {
CharacterB::~CharacterB() {}
void CharacterB::setSize(const int& w, const int& h) {
    _width = w;
    _height = h;
}
void CharacterB::display() {
	LOG(INFO) << "CharacterB : " << _char_symbol << "(" << _width << "," << _height << ")";
}
CharacterB::CharacterB() {
    _char_symbol = 'B';
    _width = 100;
    _height = 200;
}
}