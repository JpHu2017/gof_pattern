#include <glog/logging.h>
#include "border_decorator.h"
namespace gof {
BorderDecorator::BorderDecorator(VisualComponent* component_ptr) 
    : Decorator(component_ptr) {}
BorderDecorator::~BorderDecorator() {}
void BorderDecorator::draw() {
    Decorator::draw();
    LOG(INFO) << "Border decorator draw.";
}
void BorderDecorator::resize() {
    Decorator::resize();
    LOG(INFO) << "Border decorator resize.";
}
}