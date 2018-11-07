#ifndef GOF_PATTERN_WINDOW_H
#define GOF_PATTERN_WINDOW_H
#include <memory>
#include "cz_def.h"
#include "windowimp.h"
namespace gof {
class CZ_EXPORTS Window {
public:
    typedef std::shared_ptr<Window> Ptr;
    Window(const WindowImp::Ptr imp_ptr);
    ~Window();
    void drawText();
    void drawRect();
private:
    WindowImp::Ptr _imp_ptr;
};
}
#endif //GOF_PATTERN_WINDOW_H