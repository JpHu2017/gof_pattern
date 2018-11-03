#ifndef GOF_PATTERN_ACER_DESKTOP_H
#define GOF_PATTERN_ACER_DESKTOP_H
#include <memory>
#include "../desktop.h"
namespace gof {
class AcerDesktop : public Desktop {
public:
    typedef std::shared_ptr<AcerDesktop> Ptr;
    AcerDesktop();
    virtual ~AcerDesktop();
    virtual const std::string brand() const;
    virtual const std::string type() const;
private:
};
}

#endif //GOF_PATTERN_ACER_DESKTOP_H