#ifndef GOF_PATTERN_GRAPHIC_H
#define GOF_PATTERN_GRAPHIC_H
#include <memory>
#include "cz_def.h"
namespace gof {
class Graphic {
public:
    typedef std::shared_ptr<Graphic> Ptr;
    virtual ~Graphic();
    virtual void draw() = 0;
protected:
    Graphic();
};
}
#endif //GOF_PATTERN_GRAPHIC_H