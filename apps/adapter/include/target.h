#ifndef GOF_PATTERN_TARGET_H
#define GOF_PATTERN_TARGET_H
#include <memory>
#include "cz_def.h"
namespace gof {
class CZ_EXPORTS Target {
public:
    typedef std::shared_ptr<Target> Ptr;
    Target();
    ~Target();
    virtual void request() = 0;
private:
};
}
#endif //GOF_PATTERN_TARGET_H