#ifndef GOF_PATTERN_DELL_FACTORY_H
#define GOF_PATTERN_DELL_FACTORY_H
#include <memory>
#include "../computer.h"
#include "../computer_factory.h"

namespace gof {
class DellFactory : public ComputerFactory {
public:
    typedef std::shared_ptr<DellFactory> Ptr;
    DellFactory();
    virtual ~DellFactory();
    virtual Computer::Ptr creatComputer();
private:

};
}
#endif //GOF_PATTERN_DELL_FACTORY_H