#ifndef GOF_PATTERN_ADAPTEE_H
#define GOF_PATTERN_ADAPTEE_H
#include <memory>
#include "cz_def.h"
namespace gof {
class CZ_EXPORTS Adaptee {
public:
    typedef std::shared_ptr<Adaptee> Ptr;
    Adaptee();
    ~Adaptee();
    void specialRequest();
private:

};
}
#endif //GOF_PATTERN_ADAPTEE_H