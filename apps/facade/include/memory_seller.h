#ifndef GOF_PATTERN_MEMORY_SELLER_H
#define GOF_PATTERN_MEMORY_SELLER_H
#include <memory>
#include "cz_def.h"
namespace gof {
class CZ_EXPORTS MemorySeller{
public:
    typedef std::shared_ptr<MemorySeller> Ptr;
    MemorySeller();
    ~MemorySeller();
    void sellMemory();
private:        
};
}
#endif /GOF_PATTERN_MEMORY_SELLER_H