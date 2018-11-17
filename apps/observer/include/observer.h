#ifndef GOF_PATTERN_OBSERVER_H
#define GOF_PATTERN_OBSERVER_H
#include <memory>
#include "cz_def.h"
namespace gof {
class CZ_EXPORTS Observer {
public:
    typedef std::shared_ptr<Observer> Ptr;
    Observer();
    virtual ~Observer();
    virtual void update() = 0;
private:
};
}
#endif //GOF_PATTERN_OBSERVER_H