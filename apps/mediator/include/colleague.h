#ifndef GOF_PATTERN_COLLEAGUE_H
#define GOF_PATTERN_COLLEAGUE_H
#include <memory>
#include <string>
#include "cz_def.h"
namespace gof {
class Mediator;
class CZ_EXPORTS Colleague {
public:
    typedef std::shared_ptr<Colleague> Ptr;
    Colleague(const std::string& name);
    virtual ~Colleague();
    virtual void setMediator(const std::shared_ptr<Mediator>& mediator_ptr) = 0;
    virtual void sendMessage(const std::string& message) = 0;
    virtual void getMessage(const std::string& message) = 0;
protected:
    std::string _name;
    std::shared_ptr<Mediator> _mediator_ptr;
};
}
#endif //GOF_PATTERN_COLLEAGUE_H