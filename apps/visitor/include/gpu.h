#ifndef GOF_PATTERN_GPU_H
#define GOF_PATTERN_GPU_H
#include <memory>
#include "element.h"
#include "visitor.h"
namespace gof {
class Gpu : public Element {
public:
    typedef std::shared_ptr<Gpu> Ptr;
    Gpu(const std::string& name);
    virtual ~Gpu();
    virtual void accept(const Visitor::Ptr& visitor_ptr);
private:
    Gpu::Ptr _this_ptr;
};
}
#endif //GOF_PATTERN_CPU_H