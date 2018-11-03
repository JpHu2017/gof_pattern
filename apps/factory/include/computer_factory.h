#ifndef GOF_PATTERN_COMPUTER_FACTORY_H
#define GOF_PATTERN_COMPUTER_FACTORY_H
#include <memory>
#include "computer.h"
#include "cz_def.h"
namespace gof {
class CZ_EXPORTS ComputerFactory {
public:
    typedef std::shared_ptr<ComputerFactory> Ptr;
    ComputerFactory();
    virtual ~ComputerFactory();
    virtual Computer::Ptr creatComputer() = 0;
private:
};
}
#endif //GOF_PATTERN_COMPUTER_FACTORY_H