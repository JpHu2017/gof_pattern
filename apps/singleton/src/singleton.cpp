#include "singleton.h"
namespace gof {
    Singleton::~Singleton() {}
    Singleton::Ptr Singleton::instance() {
        if(_instance_ptr.get()) {
            return _instance_ptr;
        } else {
			_instance_ptr.reset(new Singleton());
        }
		return _instance_ptr;
    }
    const std::string Singleton::identifyItself() const {
        return "Singleton " + std::to_string(_id);
    }
    Singleton::Singleton() {
        ++_id;
    }
    Singleton::Ptr Singleton::_instance_ptr;
    int Singleton::_id = 0;
}