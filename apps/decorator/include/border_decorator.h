#ifndef GOF_PATTERN_BORDER_DECORATOR_H
#define GOF_PATTERN_BORDER_DECORATOR_H
#include <memory>
#include "decorator.h"
namespace gof {
class BorderDecorator : public Decorator {
public:
    typedef std::shared_ptr<BorderDecorator> Ptr;
    BorderDecorator(VisualComponent* component_ptr);
    virtual ~BorderDecorator();
    virtual void draw();
    virtual void resize();
private:
    
};
}
#endif //GOF_PATTERN_BORDER_DECORATOR_H