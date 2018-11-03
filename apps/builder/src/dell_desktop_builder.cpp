#include "dell_desktop_builder.h"
namespace gof {
    DellDesktopBuilder::DellDesktopBuilder() {
        _desktop_ptr.reset(new Desktop());
    }
    DellDesktopBuilder::~DellDesktopBuilder() {}
    void DellDesktopBuilder::buildMainFrame() {
        _desktop_ptr->setMainFrame("Mainframe(dell)");
    }
    void DellDesktopBuilder::buildScreen() {
        _desktop_ptr->setScreen("Screen(dell)");
    }
    void DellDesktopBuilder::buildKeyMouse() {
        _desktop_ptr->setKeyMouse("Keymouse(dell)");
    }
    Desktop::Ptr DellDesktopBuilder::getDesktop() {
        return _desktop_ptr;
    } 
}