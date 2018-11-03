#include "desktop/dell_desktop.h"
namespace gof {
DellDesktop::DellDesktop() {}
DellDesktop::~DellDesktop() {}
const std::string DellDesktop::brand() const {
    return "Dell";
}
const std::string DellDesktop::type() const {
    return "Desktop";
}
}