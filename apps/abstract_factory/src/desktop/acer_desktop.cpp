#include "desktop/acer_desktop.h"
namespace gof {
AcerDesktop::AcerDesktop() {}
AcerDesktop::~AcerDesktop() {}
const std::string AcerDesktop::brand() const {
    return "Acer";
}
const std::string AcerDesktop::type() const {
    return "Desktop";
}
}