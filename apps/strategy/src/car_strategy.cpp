#include <glog/logging.h>
#include "car_strategy.h"
namespace gof {
CarStrategy::CarStrategy() {}
CarStrategy::~CarStrategy() {}
void CarStrategy::travel() {
    LOG(INFO) << "Travel by car.";
}
}