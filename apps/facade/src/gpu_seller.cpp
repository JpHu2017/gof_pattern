#include <glog/logging.h>
#include "gpu_seller.h"
namespace gof {
GpuSeller::GpuSeller() {}
GpuSeller::~GpuSeller() {}
void GpuSeller::sellGpu() {
    LOG(INFO) << "Sell Gpu.";
}
}