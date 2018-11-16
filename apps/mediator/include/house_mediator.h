#ifndef GOF_PATTERN_HOUSE_MEDIATOR_H
#define GOF_PATTERN_HOUSE_MEDIATOR_H
#include "mediator.h"
#include "colleague.h"
namespace gof {
class HouseMediator : public Mediator {
public:
    typedef std::shared_ptr<HouseMediator> Ptr;
    HouseMediator(const Colleague::Ptr landlord_ptr, const Colleague::Ptr renter_ptr);
    virtual ~HouseMediator();
    virtual void send(const Colleague::Ptr colleague_ptr, const std::string& message);
private:
    Colleague::Ptr _landlord_ptr;
    Colleague::Ptr _renter_ptr;
};
}
#endif //GOF_PATTERN_HOUSE_MEDIATOR_H