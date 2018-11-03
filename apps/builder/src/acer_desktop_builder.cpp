#include "acer_desktop_builder.h"
namespace gof {
    AcerDesktopBuilder::AcerDesktopBuilder() {
        _desktop_ptr.reset(new Desktop());
    }
    AcerDesktopBuilder::~AcerDesktopBuilder() {}
    void AcerDesktopBuilder::buildMainFrame() {
        _desktop_ptr->setMainFrame("Mainframe(acer)");
    }
    void AcerDesktopBuilder::buildScreen() {
        _desktop_ptr->setScreen("Screen(acer)");
    }
    void AcerDesktopBuilder::buildKeyMouse() {
        _desktop_ptr->setKeyMouse("Keymouse(acer)");
    }
    Desktop::Ptr AcerDesktopBuilder::getDesktop() {
        return _desktop_ptr;
    } 
}