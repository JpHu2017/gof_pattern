#ifndef GOF_PATTERN_BIKE_STRATEGY_H
#define GOF_PATTERN_BIKE_STRATEGY_H
#include <memory>
#include "strategy.h"
namespace gof {
class BikeStrategy : public IStrategy {
public:
    typedef std::shared_ptr<BikeStrategy> Ptr;
    BikeStrategy();
    virtual ~BikeStrategy();
    virtual void travel();
private:
};
}
#endif //GOF_PATTERN_BIKE_STRATEGY_H