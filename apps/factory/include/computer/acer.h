#ifndef GOF_PATTERN_ACER_H
#define GOF_PATTERN_ACER_H
#include <memory>
#include "../computer.h"
namespace gof {
class Acer : public Computer {
public:
    typedef std::shared_ptr<Acer> Ptr;
    Acer();
    virtual ~Acer();
    virtual const std::string brand() const;
private:
};
}

#endif //GOF_PATTERN_ACER_H