#include "desktop.h"
namespace gof {
Desktop::Desktop() {}
Desktop::~Desktop() {}
void Desktop::setMainFrame(const std::string& mainframe) {
    _mainframe = mainframe;
}
void Desktop::setScreen(const std::string& screen) {
    _screen = screen;
}
void Desktop::setKeyMouse(const std::string& keymouse) {
    _keymouse = keymouse;
}
const std::string Desktop::identifyItself() const  {
    return _mainframe + " + " + _screen + " + " + _keymouse;
}
}