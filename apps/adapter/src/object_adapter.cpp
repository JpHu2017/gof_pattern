#include "object_adapter.h"
namespace gof {
ObjectAdapter::ObjectAdapter() {
    _adaptee_ptr.reset(new Adaptee());
}
ObjectAdapter::~ObjectAdapter() {}
void ObjectAdapter::request() {
    _adaptee_ptr->specialRequest();
}
}