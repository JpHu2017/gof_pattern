#include "visitor.h"
namespace gof {
Visitor::Visitor(const std::string& visitor_name) 
    : _visitor_name(visitor_name) {}
Visitor::~Visitor() {}
}