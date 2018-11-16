#ifndef GOF_PATTERN_RENTER_H
#define GOF_PATTERN_RENTER_H
#include "colleague.h"
namespace gof {
class Renter : public Colleague {
public:
    typedef std::shared_ptr<Renter> Ptr;
    Renter(const std::string& name);
    virtual ~Renter();
    virtual void setMediator(const std::shared_ptr<Mediator>& mediator_ptr);
    virtual void sendMessage(const std::string& message);
	virtual void getMessage(const std::string& message);
private:
	Renter::Ptr _this_ptr;
};
}
#endif //GOF_PATTERN_RENTER_H