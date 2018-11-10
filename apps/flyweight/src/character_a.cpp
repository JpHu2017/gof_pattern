#include <glog/logging.h>
#include "character_a.h"
namespace gof {
CharacterA::~CharacterA() {}
void CharacterA::setSize(const int& w, const int& h) {
    _width = w;
    _height = h;
}
void CharacterA::display() {
    LOG(INFO) << "CharacterA : " << _char_symbol << "(" << _width << "," << _height << ")";
}
CharacterA::CharacterA() {
    _char_symbol = 'A';
    _width = 100;
    _height = 200;
}
}