#include "mainboard.h"
namespace gof {
MainBoard::MainBoard(const std::string& name) : Element(name) {
    _this_ptr.reset(this);
}
MainBoard::~MainBoard() {}
void MainBoard::accept(const Visitor::Ptr& visitor_ptr) {
    visitor_ptr->visitMainBoard(_this_ptr);
}
}