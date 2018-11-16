#include "caretaker.h"
namespace gof {
CareTaker::CareTaker() {}
CareTaker::~CareTaker() {}
void CareTaker::save(const Memento& memento) {
    _memento_vec.push_back(memento);
}
Memento CareTaker::load(const int& state_index) const {
    return _memento_vec.at(state_index);
}
}