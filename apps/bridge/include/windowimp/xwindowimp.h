#ifndef GOF_PATTERN_XWINDOWIMP_H
#define GOF_PATTERN_XWINDOWIMP_H
#include <memory>
#include "cz_def.h"
#include "windowimp.h"
namespace gof {
class CZ_EXPORTS XWindowImp : public WindowImp {
public:
    typedef std::shared_ptr<XWindowImp> Ptr;
    XWindowImp();
    virtual ~XWindowImp();
    virtual void devDrawText();
    virtual void devDrawLine();
private:
};
}
#endif //GOF_PATTERN_XWINDOWIMP_H