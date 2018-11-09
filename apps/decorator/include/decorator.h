#ifndef GOF_PATTERN_DECORATOR_H
#define GOF_PATTERN_DECORATOR_H
#include <memory>
#include "visual_component.h"
namespace gof {
class Decorator : public VisualComponent {
public:
    typedef std::shared_ptr<Decorator> Ptr;
    // also could use 'const VisualComponent& component', 
    /* 
    // but not use 'const VisualComponent::Ptr& component_ptr', 
    // because use that, the phase that 
    // 'decorator_ptr.reset(new gof::BorderDecorator(new gof::ScrollDecorator(text_component_ptr)));'
    // would be failed
    */
    Decorator(VisualComponent* component_ptr);
    virtual ~Decorator();
    virtual void draw();
    virtual void resize();
private:
    //acquaintance relationship, the object of VisualComponent would be released outside.
    VisualComponent* _component_ptr;
};
}
#endif //GOF_PATTERN_DECORATOR_H