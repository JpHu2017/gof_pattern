#ifndef GOF_PATTERN_TEXT_COMPONENT_H
#define GOF_PATTERN_TEXT_COMPONENT_H
#include <memory>
#include "visual_component.h"
namespace gof {
class TextComponent : public VisualComponent {
public:
    typedef std::shared_ptr<TextComponent> Ptr;
    TextComponent();
    virtual ~TextComponent();
    virtual void draw();
    virtual void resize();
private:
};
}
#endif //GOF_PATTERN_TEXT_COMPONENT_H