#include "decorator.h"
namespace gof {
Decorator::Decorator(VisualComponent* component_ptr) 
    : _component_ptr(component_ptr) {}
Decorator::~Decorator() {}
void Decorator::draw() {
    _component_ptr->draw();
}
void Decorator::resize() {
    _component_ptr->resize();
}
} 