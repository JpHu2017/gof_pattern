#ifndef GOF_PATTERN_WINDOWIMP_H
#define GOF_PATTERN_WINDOWIMP_H
#include <memory>
#include "cz_def.h"
namespace gof {
class CZ_EXPORTS WindowImp {
public:
    typedef std::shared_ptr<WindowImp> Ptr;
    WindowImp();
    virtual ~WindowImp();
    virtual void devDrawText() = 0;
    virtual void devDrawLine() = 0;
private:

};
}
#endif //GOF_PATTERN_WINDOWIMP_H