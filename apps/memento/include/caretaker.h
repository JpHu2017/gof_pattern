#ifndef GOF_PATTERN_CARETAKER_H
#define GOF_PATTERN_CARETAKER_H
#include <memory>
#include <vector>
#include "cz_def.h"
#include "memento.h"
namespace gof {
class CareTaker {
public:
    typedef std::shared_ptr<CareTaker> Ptr;
    CareTaker();
    ~CareTaker();
    void save(const Memento& memento);
    Memento load(const int& state_index) const;
private:
    std::vector<Memento> _memento_vec;
};
}
#endif //GOF_PATTERN_CARETAKER_H