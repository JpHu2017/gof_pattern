#include "house_mediator.h"
namespace gof {
HouseMediator::HouseMediator(const Colleague::Ptr landlord_ptr, const Colleague::Ptr renter_ptr) 
    : _landlord_ptr(landlord_ptr), _renter_ptr(renter_ptr){}
HouseMediator::~HouseMediator() {}
void HouseMediator::send(const Colleague::Ptr colleague_ptr, const std::string& message) {
    if(colleague_ptr == _landlord_ptr) {
        _renter_ptr->getMessage(message);
    } else if(colleague_ptr == _renter_ptr) {
		_landlord_ptr->getMessage(message);
    }
}
}