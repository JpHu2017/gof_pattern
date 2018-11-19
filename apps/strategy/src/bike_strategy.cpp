#include <glog/logging.h>
#include "bike_strategy.h"
namespace gof {
BikeStrategy::BikeStrategy() {}
BikeStrategy::~BikeStrategy() {}
void BikeStrategy::travel() {
    LOG(INFO) << "Travel by bike.";
}
}