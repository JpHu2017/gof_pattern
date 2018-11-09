#include <glog/logging.h>
#include "scroll_decorator.h"
namespace gof {
ScrollDecorator::ScrollDecorator(VisualComponent* component_ptr) 
    : Decorator(component_ptr) {}
ScrollDecorator::~ScrollDecorator() {}
void ScrollDecorator::draw() {
    Decorator::draw();
    LOG(INFO) << "Scroll decorator draw.";
}
void ScrollDecorator::resize() {
    Decorator::resize();
    LOG(INFO) << "Scroll decorator resize.";
}
}