#include <glog/logging.h>
#include "circuit_detector.h"
#include "cpu.h"
#include "gpu.h"
#include "mainboard.h"
namespace gof {
CircuitDetector::CircuitDetector(const std::string& visitor_name) : Visitor(visitor_name) {}
CircuitDetector::~CircuitDetector() {}
void CircuitDetector::visitCpu(const std::shared_ptr<Cpu>& cpu_ptr) {
    LOG(INFO) << _visitor_name << " is checking Cpu's circuits.( " << cpu_ptr->getName() << " )";
}
void CircuitDetector::visitGpu(const std::shared_ptr<Gpu>& gpu_ptr) {
    LOG(INFO) << _visitor_name << " is checking Gpu's circuits.( " << gpu_ptr->getName() << " )";
}
void CircuitDetector::visitMainBoard(const std::shared_ptr<MainBoard>& mainboard_ptr) {
    LOG(INFO) << _visitor_name << " is checking Mainboard's circuits.( " << mainboard_ptr->getName() << " )";
}

}