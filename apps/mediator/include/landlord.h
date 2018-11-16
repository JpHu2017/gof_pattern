#ifndef GOF_PATTERN_LANDLORD_H
#define GOF_PATTERN_LANDLORD_H
#include "colleague.h"

namespace gof {
class Landlord : public Colleague {
public:
    typedef std::shared_ptr<Landlord> Ptr;
    Landlord(const std::string& name);
    virtual ~Landlord();
    virtual void setMediator(const std::shared_ptr<Mediator>& mediator_ptr);
    virtual void sendMessage(const std::string& message);
	virtual void getMessage(const std::string& message);
private:
	Landlord::Ptr _this_ptr;
};
}
#endif //GOF_PATTERN_LANDLORD_H