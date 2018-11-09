#ifndef GOF_PATTERN_VISUAL_COMPONENT_H
#define GOF_PATTERN_VISUAL_COMPONENT_H
#include <memory>
#include "cz_def.h"
namespace gof {
class CZ_EXPORTS VisualComponent {
public:
    typedef std::shared_ptr<VisualComponent> Ptr;
    VisualComponent();
    virtual ~VisualComponent();
    virtual void draw() = 0;
    virtual void resize() = 0;
private:
};
}
#endif //GOF_PATTERN_VISUAL_COMPONENT_H