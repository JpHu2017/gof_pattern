#ifndef GOF_PATTERN_MEDIATOR_H
#define GOF_PATTERN_MEDIATOR_H
#include <memory>
#include <string>
#include "colleague.h"
#include "cz_def.h"
namespace gof {
class CZ_EXPORTS Mediator {
public:
    typedef std::shared_ptr<Mediator> Ptr;
    virtual ~Mediator();
    virtual void send(const Colleague::Ptr colleague_ptr, const std::string& message) = 0;
protected:
    Mediator();
};
}
#endif //GOF_PATTERN_MEDIATOR_H