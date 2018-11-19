#ifndef GOF_PATTERN_CAR_STRATEGY_H
#define GOF_PATTERN_CAR_STRATEGY_H
#include <memory>
#include "strategy.h"
namespace gof {
class CarStrategy : public IStrategy {
public:
    typedef std::shared_ptr<CarStrategy> Ptr;
    CarStrategy();
    virtual ~CarStrategy();
    virtual void travel();
private:
};
}
#endif //GOF_PATTERN_CAR_STRATEGY_H