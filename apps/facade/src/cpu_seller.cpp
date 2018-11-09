#include <glog/logging.h>
#include "cpu_seller.h"
namespace gof {
CpuSeller::CpuSeller() {}
CpuSeller::~CpuSeller() {}
void CpuSeller::sellCpu() {
    LOG(INFO) << "Sell Cpu.";
}
}