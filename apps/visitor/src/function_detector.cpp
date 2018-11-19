#include <glog/logging.h>
#include "function_detector.h"
#include "cpu.h"
#include "gpu.h"
#include "mainboard.h"
namespace gof {
FunctionDetector::FunctionDetector(const std::string& visitor_name) : Visitor(visitor_name) {}
FunctionDetector::~FunctionDetector() {}
void FunctionDetector::visitCpu(const std::shared_ptr<Cpu>& cpu_ptr) {
    LOG(INFO) << _visitor_name << " is checking Cpu's function.( " << cpu_ptr->getName() << " )";
}
void FunctionDetector::visitGpu(const std::shared_ptr<Gpu>& gpu_ptr) {
    LOG(INFO) << _visitor_name << " is checking Gpu's function.( " << gpu_ptr->getName() << " )";
}
void FunctionDetector::visitMainBoard(const std::shared_ptr<MainBoard>& mainboard_ptr) {
    LOG(INFO) << _visitor_name << " is checking Mainboard's function.( " << mainboard_ptr->getName() << " )";
}

}