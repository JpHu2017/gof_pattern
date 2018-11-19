#ifndef GOF_PATTERN_CPU_H
#define GOF_PATTERN_CPU_H
#include <memory>
#include "element.h"
#include "visitor.h"
namespace gof {
class Cpu : public Element {
public:
    typedef std::shared_ptr<Cpu> Ptr;
    Cpu(const std::string& name);
    virtual ~Cpu();
    virtual void accept(const Visitor::Ptr& visitor_ptr);
private:
    Cpu::Ptr _this_ptr;
};
}
#endif //GOF_PATTERN_CPU_H