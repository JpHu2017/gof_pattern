#ifndef GOF_PATTERN_DIRECTOR_H
#define GOF_PATTERN_DIRECTOR_H
#include "cz_def.h"
#include "desktop_builder.h"
#include "desktop.h"
namespace gof {
class CZ_EXPORTS Director {
public:
    typedef std::shared_ptr<Director> Ptr;
    Director(const DesktopBuilder::Ptr& builder_ptr);
    ~Director();
    Desktop::Ptr createDesktop(); 
private:
    DesktopBuilder::Ptr _builder_ptr;
};
}
#endif //GOF_PATTERN_DIRECTOR_H