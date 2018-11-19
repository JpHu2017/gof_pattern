#ifndef GOF_PATTERN_COMPUTER_H
#define GOF_PATTERN_COMPUTER_H
#include <memory>
#include <vector>
#include "cz_def.h"
#include "visitor.h"
#include "cpu.h"
#include "gpu.h"
#include "mainboard.h"
namespace gof {
class CZ_EXPORTS Computer {
public:
    typedef std::shared_ptr<Computer> Ptr;
    Computer(const Element::Ptr& cpu_ptr, const Element::Ptr& gpu_ptr, const Element::Ptr& mainboard_ptr);
    void accept(const Visitor::Ptr& visitor_ptr);
    virtual ~Computer();
private:
    std::vector<Element::Ptr> _elem_ptr_vec;
};
}
#endif //GOF_PATTERN_COMPUTER_H