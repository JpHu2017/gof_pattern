#ifndef GOF_PATTERN_ACER_FACTORY_H
#define GOF_PATTERN_ACER_FACTORY_H
#include <memory>
#include "../computer.h"
#include "../computer_factory.h"

namespace gof {
class AcerFactory : public ComputerFactory {
public:
    typedef std::shared_ptr<AcerFactory> Ptr;
    AcerFactory();
    virtual ~AcerFactory();
    virtual Computer::Ptr creatComputer();
private:

};
}
#endif //GOF_PATTERN_ACER_FACTORY_H