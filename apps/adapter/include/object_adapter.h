#ifndef GOF_PATTERN_OBJECT_ADAPTER_H
#define GOF_PATTERN_OBJECT_ADAPTER_H
#include <memory>
#include "adaptee.h"
#include "target.h"
namespace gof {
class ObjectAdapter : public Target {
public:
    ObjectAdapter();
    ~ObjectAdapter();
    virtual void request();
private:
    Adaptee::Ptr _adaptee_ptr;
};
}
#endif //GOF_PATTERN_OBJECT_ADAPTER_H