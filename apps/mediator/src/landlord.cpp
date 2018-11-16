#include <glog/logging.h>
#include "landlord.h"
#include "mediator.h"
namespace gof {
Landlord::Landlord(const std::string& name) : Colleague(name) {
	_this_ptr.reset(this);
}
Landlord::~Landlord() {}
void Landlord::setMediator(const std::shared_ptr<Mediator>& mediator_ptr) {
    _mediator_ptr = mediator_ptr;
}
void Landlord::sendMessage(const std::string& message) {
	// Note: Can't use "Landlord::Ptr(this)" to replace "_this_ptr"
	/* Because 'this' is common pointer, but 'Landlord::Ptr(this)' is smart pointer.
	* when u define 'Renter::Ptr(this)', count of the "smart pointer to 'this' object" is only one
	* and Landlord::Ptr(this) is a local object. So when leaving the function, 'this' object would be released.
	* We don't want to see that.
	*/
	_mediator_ptr->send(_this_ptr, "Landlord(" + _name + "): " + message);
}
void Landlord::getMessage(const std::string& message) {
    LOG(INFO) << "Landloard(" << _name << "): get the message '" << message << "' from renter.";
}
}