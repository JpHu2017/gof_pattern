#include "manager.h"
namespace gof {
Manager::Manager(const std::string& manager_name, const Manager::Ptr& successor_ptr)
    : _manager_name(manager_name), _successor_ptr(successor_ptr) {}
Manager::~Manager() {}
}