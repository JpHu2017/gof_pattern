#ifndef GOF_PATTERN_TRAVEL_CONTEXT_H
#define GOF_PATTERN_TRAVEL_CONTEXT_H
#include <memory>
#include "cz_def.h"
#include "strategy.h"
namespace gof {
class CZ_EXPORTS TravelContext {
public:
    typedef std::shared_ptr<TravelContext> Ptr;
    TravelContext(const IStrategy::Ptr& strategy_ptr);
    ~TravelContext();
    void travel();
private:
    IStrategy::Ptr _strategy_ptr;
};
}
#endif //GOF_PATTERN_TRAVEL_CONTEXT_H