//Reference: https://blog.csdn.net/liang19890820/article/details/79242297
#include <glog/logging.h>
#include <iostream>
#include "travel_context.h"
#include "strategy.h"
#include "bike_strategy.h"
#include "car_strategy.h"
#include "train_strategy.h"
int main(int argc, char const *argv[])
{
    gof::IStrategy::Ptr bike_strategy_ptr, car_strategy_ptr, train_strategy_ptr;
    bike_strategy_ptr.reset(new gof::BikeStrategy());
    car_strategy_ptr.reset(new gof::CarStrategy());
    train_strategy_ptr.reset(new gof::TrainStrategy()); 
    gof::TravelContext::Ptr travel_context_ptr;
    travel_context_ptr.reset(new gof::TravelContext(bike_strategy_ptr)); 
    travel_context_ptr->travel();
    LOG(INFO) << "-------------------------------------";
    travel_context_ptr.reset(new gof::TravelContext(car_strategy_ptr)); 
    travel_context_ptr->travel();
    LOG(INFO) << "-------------------------------------";
    travel_context_ptr.reset(new gof::TravelContext(train_strategy_ptr)); 
    travel_context_ptr->travel();
    return 0;
}
