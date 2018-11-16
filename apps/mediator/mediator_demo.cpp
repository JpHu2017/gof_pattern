//Reference: https://www.cnblogs.com/lizhanwu/p/4432605.html
#include <glog/logging.h>
#include <iostream>
#include "colleague.h"
#include "landlord.h"
#include "renter.h"
#include "mediator.h"
#include "house_mediator.h"
int main(int argc, char* argv[]) {
    gof::Mediator::Ptr mediator_ptr;
    gof::Colleague::Ptr landlord_ptr(new gof::Landlord("Anna"));
    gof::Colleague::Ptr renter_ptr(new gof::Renter("Brown"));
    mediator_ptr.reset(new gof::HouseMediator(landlord_ptr, renter_ptr));
    landlord_ptr->setMediator(mediator_ptr);
    renter_ptr->setMediator(mediator_ptr);
	landlord_ptr->sendMessage("I have one house in ShenZhen and want to lend out.");
    LOG(INFO) << "--------------------------------";
    renter_ptr->sendMessage("I want to rent a house in ShenZhen.");
    return 0;
}