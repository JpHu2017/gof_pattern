#ifndef GOF_PATTERN_SCROLL_DECORATOR_H
#define GOF_PATTERN_SCROLL_DECORATOR_H
#include <memory>
#include "decorator.h"
namespace gof {
class ScrollDecorator : public Decorator {
public:
    typedef std::shared_ptr<ScrollDecorator> Ptr;
    ScrollDecorator(VisualComponent* component_ptr);
    virtual ~ScrollDecorator();
    virtual void draw();
    virtual void resize();
private:
};
}
#endif //GOF_PATTERN_SCROLL_DECORATOR_H