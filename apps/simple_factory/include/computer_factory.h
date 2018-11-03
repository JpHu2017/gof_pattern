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
    ~ComputerFactory();
    Computer::Ptr creatComputer(const std::string& brand);
private:
};
}
#endif //GOF_PATTERN_COMPUTER_FACTORY_H