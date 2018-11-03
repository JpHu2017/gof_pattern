#ifndef GOF_PATTERN_DELL_DESKTOP_H
#define GOF_PATTERN_DELL_DESKTOP_H
#include <memory>
#include "../desktop.h"
namespace gof {
class DellDesktop : public Desktop {
public:
    typedef std::shared_ptr<DellDesktop> Ptr;
    DellDesktop();
    virtual ~DellDesktop();
    virtual const std::string brand() const;
    virtual const std::string type() const;
private:
};
}

#endif //GOF_PATTERN_DELL_DESKTOP_H