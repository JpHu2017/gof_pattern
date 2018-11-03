#ifndef GOF_PATTERN_COMPUTER_H
#define GOF_PATTERN_COMPUTER_H
#include <memory>
#include <string>
#include "cz_def.h"
namespace gof {
class CZ_EXPORTS Computer {
public:
    typedef std::shared_ptr<Computer> Ptr;
    Computer();
    //use keyword 'virtual' to make that subclass of Computer could be destructed 
    virtual ~Computer();
    virtual const std::string brand() const = 0; 
private:   
};
}
#endif //GOF_PATTERN_COMPUTER_H