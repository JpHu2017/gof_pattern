// adapter(class)
#ifndef GOF_PATTERN_CLASS_ADAPTER_H
#define GOF_PATTERN_CLASS_ADAPTER_H
#include <memory>
#include "target.h"
#include "adaptee.h"
namespace gof {
class ClassAdapter : public Target, private Adaptee {
public:
    typedef std::shared_ptr<ClassAdapter> Ptr;
    ClassAdapter();
    ~ClassAdapter();
    virtual void request();
private:
};
}
#endif //GOF_PATTERN_CLASS_ADAPTER_H