#include "travel_context.h"
namespace gof {
TravelContext::TravelContext(const IStrategy::Ptr& strategy_ptr) 
    : _strategy_ptr(strategy_ptr) {}
TravelContext::~TravelContext() {}
void TravelContext::travel() {
    _strategy_ptr->travel();
}
}