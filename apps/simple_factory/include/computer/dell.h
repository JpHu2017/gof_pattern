#ifndef GOF_PATTERN_DELL_H
#define GOF_PATTERN_DELL_H
#include <memory>
#include "../computer.h"
namespace gof {
class Dell : public Computer {
public:
    typedef std::shared_ptr<Dell> Ptr;
    Dell();
    virtual ~Dell();
    virtual const std::string brand() const;
private:
};
}

#endif //GOF_PATTERN_DELL_H