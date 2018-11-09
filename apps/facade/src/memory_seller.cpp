#include <glog/logging.h>
#include "memory_seller.h"
namespace gof {
MemorySeller::MemorySeller() {}
MemorySeller::~MemorySeller() {}
void MemorySeller::sellMemory() {
    LOG(INFO) << "Sell Memory.";
}
}