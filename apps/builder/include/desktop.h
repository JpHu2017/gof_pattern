#ifndef GOF_PATTERN_DESKTOP_H
#define GOF_PATTERN_DESKTOP_H
#include <memory>
#include <string>
#include "cz_def.h"
namespace gof {
class CZ_EXPORTS Desktop {
public:
    typedef std::shared_ptr<Desktop> Ptr;
    Desktop();
    ~Desktop();
    void setMainFrame(const std::string& mainframe);
    void setScreen(const std::string& screen);
    void setKeyMouse(const std::string& keymouse);
    const std::string identifyItself() const ;
private:
    std::string _mainframe;
    std::string _screen;
    std::string _keymouse;
};
}
#endif //GOF_PATTERN_DESKTOP_H