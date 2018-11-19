#include <glog/logging.h>
#include "train_strategy.h"
namespace gof {
TrainStrategy::TrainStrategy() {}
TrainStrategy::~TrainStrategy() {}
void TrainStrategy::travel() {
    LOG(INFO) << "Travel by train.";
}
}