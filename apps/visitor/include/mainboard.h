#ifndef GOF_PATTERN_MAINBOARD_H
#define GOF_PATTERN_MAINBOARD_H
#include <memory>
#include "element.h"
#include "visitor.h"
namespace gof {
class MainBoard : public Element {
public:
    typedef std::shared_ptr<MainBoard> Ptr;
    MainBoard(const std::string& name);
    virtual ~MainBoard();
    virtual void accept(const Visitor::Ptr& visitor_ptr);
private:
    MainBoard::Ptr _this_ptr;
};
}
#endif //GOF_PATTERN_MAINBOARD_H