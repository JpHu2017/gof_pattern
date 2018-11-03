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
    //use keyword 'virtual' to make that subclass of Computer could be destructed 
    virtual ~Desktop();
    virtual const std::string brand() const = 0; 
    virtual const std::string type() const = 0;
private:   
};
}
#endif //GOF_PATTERN_DESKTOP_H