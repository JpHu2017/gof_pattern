#ifndef GOF_PATTERN_TRAIN_STRATEGY_H
#define GOF_PATTERN_TRAIN_STRATEGY_H
#include <memory>
#include "strategy.h"
namespace gof {
class TrainStrategy : public IStrategy {
public:
    typedef std::shared_ptr<TrainStrategy> Ptr;
    TrainStrategy();
    virtual ~TrainStrategy();
    virtual void travel();
private:
};
}
#endif //GOF_PATTERN_TRAIN_STRATEGY_H