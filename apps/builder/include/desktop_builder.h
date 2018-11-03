#ifndef GOF_PATTERN_DESKTOP_BUILDER_H
#define GOF_PATTERN_DESKTOP_BUILDER_H
#include <memory>
#include "desktop.h"
namespace gof {
class DesktopBuilder {
public:
    typedef std::shared_ptr<DesktopBuilder> Ptr;
    DesktopBuilder();
    virtual ~DesktopBuilder();
    virtual void buildMainFrame() = 0;
    virtual void buildScreen() = 0;
    virtual void buildKeyMouse() = 0;
    virtual Desktop::Ptr getDesktop() = 0; 
private:
};
}

#endif //GOF_PATTERN_DESKTOP_BUILDER_H