#ifndef GOF_PATTERN_ELEMENT_H
#define GOF_PATTERN_ELEMENT_H
#include <memory>
#include <string>
#include "cz_def.h"
#include "visitor.h"
namespace gof {
class CZ_EXPORTS Element {
public:
    typedef std::shared_ptr<Element> Ptr;
    Element(const std::string& name);
    virtual ~Element();
    virtual void accept(const Visitor::Ptr& visitor_ptr) = 0;
    const std::string getName() const;
private:
    std::string _elem_name;
};
}
#endif //GOF_PATTERN_ELEMENT_H