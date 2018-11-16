#include <glog/logging.h>
#include "renter.h"
#include "mediator.h"
namespace gof {
Renter::Renter(const std::string& name) : Colleague(name) {
	_this_ptr.reset(this);
}
Renter::~Renter() {}
void Renter::setMediator(const std::shared_ptr<Mediator>& mediator_ptr) {
    _mediator_ptr = mediator_ptr;
}
void Renter::sendMessage(const std::string& message) {
	// Note: Can't use "Renter::Ptr(this)" to replace "_this_ptr"
	/* Because this is common pointer, but Renter::Ptr(this) is smart pointer.
	 * when u define this, count of the "smart pointer to 'this' object" is only one
	 * Renter::Ptr(this) is a local object. So when leave the function, this would be released. 
	 * We don't want to see that.
	 */
	_mediator_ptr->send(_this_ptr, "Renter(" + _name + "): " + message);
}
void Renter::getMessage(const std::string& message) {
    LOG(INFO) << "Renter(" << _name << "): get the message '" << message << "' from landlord.";
}
}