#include <glog/logging.h>
#include <iostream>
#include "visual_component.h"
#include "text_component.h"
#include "border_decorator.h"
#include "scroll_decorator.h"
int main(int argc, char* argv[]) {
    // no border, no scroll
    gof::VisualComponent::Ptr text_component_ptr;
    text_component_ptr.reset(new gof::TextComponent());
    text_component_ptr->draw();
    text_component_ptr->resize();
	LOG(INFO) << "-----------------------";
    // border & scroll
    gof::VisualComponent::Ptr decorator_ptr;
	decorator_ptr.reset(new gof::BorderDecorator(new gof::ScrollDecorator(&(*text_component_ptr))));
    decorator_ptr->draw();
    decorator_ptr->resize();
}