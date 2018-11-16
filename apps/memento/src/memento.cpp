#include "memento.h"
namespace gof {
Memento::Memento(const int& vitality, const int& attack, const int& defense)
    :_vitality(vitality), _attack(attack), _defense(defense) {}
Memento::~Memento() {}
Memento& Memento::operator=(const Memento& other) {
    _vitality = other._vitality;
    _attack = other._attack;
    _defense = other._defense;
    return *this;
}
}