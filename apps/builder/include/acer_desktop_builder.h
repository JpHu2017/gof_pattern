#ifndef GOF_PATTERN_ACER_DESKTOP_BUILDER_H
#define GOF_PATTERN_ACER_DESKTOP_BUILDER_H
#include <memory>
#include "desktop.h"
#include "desktop_builder.h"
namespace gof {
class AcerDesktopBuilder : public DesktopBuilder {
public:
    typedef std::shared_ptr<AcerDesktopBuilder> Ptr;
    AcerDesktopBuilder();
    virtual ~AcerDesktopBuilder();
    virtual void buildMainFrame();
    virtual void buildScreen();
    virtual void buildKeyMouse();
    virtual Desktop::Ptr getDesktop(); 
private:
    Desktop::Ptr _desktop_ptr;
};
}
#endif //GOF_PATTERN_ACER_DESKTOP_BUILDER_H