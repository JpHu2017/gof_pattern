#include "director.h"
namespace gof {
Director::Director(const DesktopBuilder::Ptr& builder_ptr) {
    _builder_ptr = builder_ptr;
}
Director::~Director() {}
Desktop::Ptr Director::createDesktop() {
    _builder_ptr->buildMainFrame();
    _builder_ptr->buildScreen();
    _builder_ptr->buildKeyMouse();
    return _builder_ptr->getDesktop();
}
}