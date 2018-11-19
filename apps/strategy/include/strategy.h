#ifndef GOF_PATTERN_STRATEGY_H
#define GOF_PATTERN_STRATEGY_H
#include <memory>
#include "cz_def.h"
namespace gof {
class CZ_EXPORTS IStrategy {
public:
    typedef std::shared_ptr<IStrategy> Ptr;
    IStrategy();
    virtual ~IStrategy();
    virtual void travel() = 0;
private:
};
}
#endif //GOF_PATTERN_STRATEGY_H