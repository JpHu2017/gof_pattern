#ifndef GOF_PATTERN_PMWINDOWIMP_H
#define GOF_PATTERN_PMWINDOWIMP_H
#include <memory>
#include "cz_def.h"
#include "windowimp.h"
namespace gof {
class CZ_EXPORTS PMWindowImp : public WindowImp {
public:
    typedef std::shared_ptr<PMWindowImp> Ptr;
    PMWindowImp();
    virtual ~PMWindowImp();
    virtual void devDrawText();
    virtual void devDrawLine();
private:
};
}
#endif //GOF_PATTERN_PMWindowImp_H