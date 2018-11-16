#include <glog/logging.h>
#include "gamerole.h"
namespace gof {
GameRole::GameRole()  : _vitality(100), _attack(100), _defense(100){}
Memento GameRole::saveState() {
    Memento memento(_vitality, _attack, _defense);
    return memento;
}
void GameRole::load(const Memento& memento) {
    _vitality = memento._vitality;
    _attack = memento._attack;
    _defense = memento._defense;
}
void GameRole::showState() {
    LOG(INFO) << "Vitality: " << _vitality << ", Attack: " << _attack << ", Defense: " << _defense;
}
void GameRole::attack() {
    _vitality -= 10;
    _attack -= 10;
    _defense -= 10;
}
}