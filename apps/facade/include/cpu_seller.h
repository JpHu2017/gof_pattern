#ifndef GOF_PATTERN_CPU_SELLER_H
#define GOF_PATTERN_CPU_SELLER_H
#include <memory>
#include "cz_def.h"
namespace gof {
class CZ_EXPORTS CpuSeller{
public:
    typedef std::shared_ptr<CpuSeller> Ptr;
    CpuSeller();
    ~CpuSeller();
    void sellCpu();
private:        
};
}
#endif /GOF_PATTERN_CPU_SELLER_H